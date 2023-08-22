#include "aiduprotocol.h"
#include "makepack.h"

aiduProtocol::aiduProtocol(QTcpSocket *socket)
{
    this->socket=socket;
}
/**
 * @brief aiduProtocol::rxMsg
 * @param rxBuf
 * @param rxLength
 * @param admt
 * @return
 */
bool aiduProtocol::rxMsg(uint8_t *rxBuf,uint32_t rxLength,admt *admt)
{
    uint16_t crcTemp = 0;
    uint16_t crcTemp2 = 0xFFFF;

    Aidu_sFrame_T *slave =  (Aidu_sFrame_T*)new uint8_t[rxLength];//(Aidu_sFrame_T *)malloc(rxLength)
    crcTemp = rxBuf[rxLength - 2] << 8 | rxBuf[rxLength - 1];
    if(crcTemp != crcCheck(rxBuf, rxLength - 2, &crcTemp2))
    {
        qDebug()<<"Error aidu master frame,crc check failed.";
        delete []slave;
        return false;
    }
    slave->beginByte = rxBuf[ADMT_SLAVE_OFFSET_BEGINBYTE];
    if(slave->beginByte!=0xA5)
    {
        qDebug()<<"Error aidu master frame,mid Byte wrong.midByte.";
        delete []slave;
        return false;
    }
    slave->DevSerialNum = getByte2Int(&rxBuf[ADMT_SLAVE_OFFSET_DEVSERIALNUM]);
    slave->xTotalChannelNum = rxBuf[ADMT_SLAVE_OFFSET_XTOTALCHANNELNUM];
    slave->sampleChNum = rxBuf[ADMT_SLAVE_OFFSET_SAMPLECHNUM];
    slave->xMeaMethod = rxBuf[ADMT_SLAVE_OFFSET_XMEAMETHOD];
    admt->global.setMeasureMethod(slave->xMeaMethod);
    slave->xSlaveType = rxBuf[ADMT_SLAVE_OFFSET_XSLAVETYPE];
    slave->command1 = rxBuf[ADMT_SLAVE_OFFSET_COMMAND1];
    slave->command2 = rxBuf[ADMT_SLAVE_OFFSET_COMMAND2];
    slave->command3 = rxBuf[ADMT_SLAVE_OFFSET_COMMAND3];
    slave->command4 = rxBuf[ADMT_SLAVE_OFFSET_COMMAND4];
    slave->command5 = rxBuf[ADMT_SLAVE_OFFSET_COMMAND5];
    slave->dataNumber=getByte2ShortInt(&rxBuf[ADMT_SLAVE_OFFSET_DATANUMBER]);
    if(slave->command1!=aiduCom_HearBeat)
    {
        slave->xOpChNo = rxBuf[ADMT_SLAVE_OFFSET_XOPCHNO];
        admt->global.setOperationChannelID(slave->xOpChNo);
        qDebug()<<"Operation channel:"<<slave->xOpChNo;
    }
    memcpy((uint8_t *)slave->data,(uint8_t *)&rxBuf[ADMT_SLAVE_OFFSET_DATA],slave->dataNumber);
    this->executeMsg(slave,admt);
    delete []slave;
    return true;
}

/**
 * @brief aiduProtocol::executeMsg
 * @param slave
 * @param admt
 * @return
 */
bool aiduProtocol::executeMsg(Aidu_sFrame_T *slave,admt *admt)
{
    if((slave->DevSerialNum==admt->global.getDevSerialNum())
            ||(slave->DevSerialNum==ADMT_SLAVE_BOARDCAST_ADDR))
    {
        switch (slave->command1) {
        case aiduCom_readConfig:
        {
            admt_Channel *currentChannel=&admt->channel[admt->global.getOperationChannelID()];

            admt->global.setFilterType(slave->data[0]);
            admt->global.setProbeType(slave->data[1]);

            currentChannel->setChannelProbeType(slave->data[1]);

            currentChannel->setChannelMultipleTime(slave->data[2]);
            currentChannel->setChannelMeasureDataNumber(getByte2Int(&slave->data[3]));
            currentChannel->setChannelMeasureFrequency(getByte2FloatBigEndian(&slave->data[7]));
            currentChannel=nullptr;
        }
            break;
        case aiduCom_readInfo:
        {
            admt->global.setDevSerialNum(slave->DevSerialNum);
            qDebug()<<"Device serial number is"<<hex<<admt->global.getDevSerialNum();
            admt->global.setDevName((char*)&slave->data[0]);
            qDebug()<<"Device name is "<<admt->global.getDevName();
        }
            break;
        case aiduCom_setConfig:
        {
            if(slave->data[0])
            {
                qDebug()<<"Configuration successfully!";
            }
        }
            break;
        case aiduCom_HearBeat:
        {
               admt->global.setBatteryPercent(slave->data[0]);
                admt->global.setWifiStrength(slave->data[2]);
                this->txMsg(admt,aiduCom_HearBeat);
        }
            break;
        case aiduCom_CheckChConSTA:
        {
            admt_Channel *currentChannel=&admt->channel[admt->global.getOperationChannelID()];
            if(slave->data[0]==1)
            {
                currentChannel->setChannelConnect(true);
            }
            else
            {
                currentChannel->setChannelConnect(false);
            }
        }
            break;
        case aiduCom_RefreshChNum:
        {
            qDebug()<<"Total channel is "<<admt->global.getTotalChannelNumber();
            admt->global.setTotalChannelNumber(slave->xTotalChannelNum);
        }
            break;
        case aiduCom_setMeasure:
        {
            //read and save data,if sample data is multiple frame,then recv all sample data stick then together
        }
            break;
        case aiduCom_RepeatChData:
            break;
        default:
            break;
        }
    }
    else
    {
        qDebug()<<"Serial number error,please check your device serial number!";
        return false;
    }
    return true;
}

/**
 * @brief aiduProtocol::txMsg
 * @param admt
 * @param func
 * @return
 */
bool aiduProtocol::txMsg(admt *admt,Aidu_command_t func)
{
    std::vector<uint8_t> txMsg;
    switch(func)
    {
    case aiduCom_readConfig:
        this->makeCommPack(&txMsg,admt,aiduCom_readConfig);
        break;

    case aiduCom_readInfo:  // Read multiple register
this->makeCommPack(&txMsg,admt,aiduCom_readInfo);
        break;

    case aiduCom_setConfig: // Write single coli
this->makeCommPack(&txMsg,admt,aiduCom_setConfig);
        break;

    case aiduCom_HearBeat:  // Sample data
this->makeCommPack(&txMsg,admt,aiduCom_HearBeat);
        break;

    case aiduCom_CheckChConSTA:
this->makeCommPack(&txMsg,admt,aiduCom_CheckChConSTA);
        break;

    case aiduCom_RefreshChNum:
this->makeCommPack(&txMsg,admt,aiduCom_RefreshChNum);
        break;

    case aiduCom_setMeasure:
this->makeCommPack(&txMsg,admt,aiduCom_setMeasure);
        break;

    case aiduCom_RepeatChData:
this->makeCommPack(&txMsg,admt,aiduCom_RepeatChData);
        break;

    case aiduCom_upMeasureData:
this->makeCommPack(&txMsg,admt,aiduCom_upMeasureData);
        break;
    }
    this->send(&txMsg[0], txMsg.size());
    return true;
}

/**
 * @brief aiduProtocol::makePack
 * @param vec
 * @param admt
 * @param func
 */
void aiduProtocol::makeCommPack(std::vector<uint8_t> *vec,admt *admt,Aidu_command_t func)
{
    uint16_t crc = 0xFFFF;
    std::vector<uint8_t> vecDataTemp;
    Aidu_mFrame_T master;

    master.beginByte = 0xAA;
    master.DevSerialNum = admt->global.getDevSerialNum();
    master.xTotalChannelNum = admt->global.getTotalChannelNumber();
    if(admt->global.getMeasureMethod()==0)
    {
        master.sampleChNum=admt->global.getTotalChannelNumber();
    }
    else
    {
        master.sampleChNum=1;
    }
    if(func != aiduCom_RefreshChNum)
    {
        master.xOpChNo=admt->global.getOperationChannelID();
    }
    if(admt->global.getTotalChannelNumber()==1)
    {
        master.xOpChNo=1;
    }
    master.xMeaMethod = admt->global.getMeasureMethod();
    master.xSlaveType =admt->global.getSlaveType();
    master.command1=func;
    if(master.command1==aiduCom_upMeasureData)
    {
        master.command1=aiduCom_setMeasure;
    }
    master.command2 = 0;
    master.command3 = 0;
    master.command4 = 0;
    master.command5 = 0;
    master.midByte = 0xA5;

    switch (func) {
    case aiduCom_readConfig:
    {
        qDebug()<<"Read configuration of "<<hex<<admt->global.getDevSerialNum()<<" channel "<<admt->global.getOperationChannelID();
    }
        break;
    case aiduCom_readInfo:
        qDebug()<<"Read intformation of device "<<hex<<admt->global.getDevSerialNum();
        break;
    case aiduCom_setConfig:
    {
        qDebug()<<"Set configuration of"<<hex<<admt->global.getDevSerialNum()<<" channel "<<admt->global.getOperationChannelID();
        admt_Channel *currentChannel=&admt->channel[admt->global.getOperationChannelID()];
        add2Pack(&vecDataTemp,admt->global.getFilterType());
        add2Pack(&vecDataTemp,admt->global.getProbeType());
        add2Pack(&vecDataTemp,admt->global.getProbeType());
        add2Pack(&vecDataTemp,currentChannel->getChannelMultipleTime());
        add2Pack(&vecDataTemp,currentChannel->getChannelMeasureDataNumber());
        add2Pack(&vecDataTemp,currentChannel->getChannelMeasureFrequency());
        currentChannel = nullptr;
    }
        break;
    case aiduCom_HearBeat:
    {
        qDebug()<<"Send heart beat to "<<hex<<admt->global.getDevSerialNum();
    }
        break;
    case aiduCom_CheckChConSTA:
    {
        qDebug()<<"Check channel connection of "<<hex<<admt->global.getDevSerialNum()<<" channel "<<admt->global.getOperationChannelID();
    }
        break;
    case aiduCom_RefreshChNum:
    {
        qDebug()<<"Refresh "<<hex<<admt->global.getDevSerialNum()<<" total channel number.";
    }
        break;
    case aiduCom_setMeasure:
    {
        qDebug()<<"Set "<<hex<<admt->global.getDevSerialNum()<<" channel "<<admt->global.getOperationChannelID()<<" start measurement";
    }
        break;
    case aiduCom_upMeasureData:
    {
        qDebug()<<"Update measure data of "<<hex<<admt->global.getDevSerialNum()<<" channel "<<admt->global.getOperationChannelID();
    }
        break;
    case aiduCom_RepeatChData:
    {
        qDebug()<<"Need "<<hex<<admt->global.getDevSerialNum()<<" channel "<<admt->global.getOperationChannelID()<<"repeat measure data.";
    }
        break;
    default:
        break;
    }
    master.dataNumber = vecDataTemp.size();
    //make pack
    addHead(vec, &master);
    vec->insert(vec->end(), vecDataTemp.begin(), vecDataTemp.end());
    //crc
    crcCheck(*vec, vec->size(), &crc);
    add2Pack(vec, crc);
    //add tail 0x0d 0x0a
    add2Pack(vec,'\r');
    add2Pack(vec,'\n');
}

/**
 * @brief aiduProtocol::send
 * @param buf
 * @param len
 */
void aiduProtocol::send(uint8_t *buf, uint32_t len)
{
    QByteArray mydata((char*)buf,len);
    this->socket->write(mydata);
}

