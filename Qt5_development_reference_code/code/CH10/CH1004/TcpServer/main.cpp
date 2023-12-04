#include "tcpserver.h"
#include <QApplication>
#include <QPair>


class dev_Channel
{
private:
    int xChNo;                 // Number of channel start with channel 1 R
    uint32_t xChID;            // Identify of channel R
    uint8_t xChSTA;      // Status of channel R/W
    bool xChConSTA;        // Channel connection status -Down R/W
    uint16_t xChResister;      // Resister value of channel -Down R/W
    uint8_t xChProbeType;      // Channel probe type 0-Magnet probe;1-M of electric probe ;2-N of electric probe -Down R/W
    uint8_t xChAdMultipleTime; // Channel sample multiple times from 4 to 16,default 6;-UP R/W
    uint32_t AD_DataNum;       // Number of data to sample,from 1024 to 4096 default 1024.Now this value is in firm value,1024-fast speed mode;2048 middle  speed mode;4096 slow speed mode.-UP R/W
    float fChAD_Freq;          // Frequency need to sample-UP R/W Hz
    uint32_t xMeaNeedTime;     // Measurement of down machine require time./ms Down
    uint8_t xMeaStartTime;
    std::vector<float> data;
public:
    dev_Channel(int setChNo,uint32_t setChID);

    void printInfo()const;

    int getChannelNo(){return this->xChNo;}
    void setChannelNo(const int setChNo){this->xChNo=setChNo;}

    uint32_t getChID(){return this->xChID;}
    void setChID(const uint32_t setID){this->xChID=setID;}

    uint8_t getChannelStatus(){return this->xChSTA;}
    void setChannelStatus(uint8_t setStatus){this->xChSTA=setStatus;}

    bool isChannelConnected(){return this->xChConSTA;}
    void setChannelConnect(bool isConnect){this->xChConSTA=isConnect;}

    uint16_t getChannelResister(){return this->xChResister;}
    void setChannelResister(uint16_t res){this->xChResister=res;}

    uint8_t getChannelProbeType(){return this->xChProbeType;}
    void setChannelProbeType(uint8_t probeType){this->xChProbeType=probeType;}

    uint8_t getChannelMultipleTime(){return this->xChAdMultipleTime;}
    void setChannelMultipleTime(uint8_t mulTime){this->xChAdMultipleTime=mulTime;}

    uint32_t getChannelMeasureDataNumber(){return this->AD_DataNum;}
    void setChannelMeasureDataNumber(uint32_t setAdNumber){;this->AD_DataNum=setAdNumber;}

    float getChannelMeasureFrequency(){return this->fChAD_Freq;}
    void setChannelMeasureFrequency(float setFreq){this->fChAD_Freq=setFreq;}

    uint32_t getChannelMeasureNeedTime(){return this->xMeaNeedTime;}
    void setChannelMeasureNeedTime(uint32_t setNeedTime_s){this->xMeaNeedTime=setNeedTime_s;}

    uint8_t getChannelMeasureStartTime(){return this->xMeaStartTime;}
    void setChannelMeasureStartTime(uint8_t setStartTime){this->xMeaStartTime=setStartTime;}

    std::vector<float> getChannelMeasureDataCache(){return this->data;}
    void setChannelMeasureDataCache(float *setDataAddr){

    }
    void clearChanelMeasureDataCache(){
        this->data.clear();
    }
};

dev_Channel::dev_Channel(int setChNo,uint32_t setChID)
{
    xChNo=setChNo;
    xChID=setChID;
    xChSTA=2;
    xChConSTA=true;
    xChResister=2356;
    xChProbeType=1;
    xChAdMultipleTime=4;
    AD_DataNum=600;
    fChAD_Freq=49.6;
    xMeaNeedTime=45631;
    xMeaStartTime=10;
}

void dev_Channel::printInfo() const{
    qDebug() << "Channel Number:" << xChNo;
    qDebug() << "Channel ID:" << xChID;
    qDebug() << "Channel Status:" << xChSTA;
    qDebug() << "Channel Connection Status:" << xChConSTA;
    qDebug() << "Channel Resister Value:" << xChResister;
    qDebug() << "Channel Probe Type:" << xChProbeType;
    qDebug() << "Channel AD Multiple Time:" << xChAdMultipleTime;
    qDebug() << "AD Data Number:" << AD_DataNum;
    qDebug() << "Channel AD Frequency:" << fChAD_Freq;
    qDebug() << "Measurement Need Time:" << xMeaNeedTime;
    qDebug() << "Measurement Start Time:" << xMeaStartTime;
}

struct dev_info{
    QString devName;      // 设备名称
    uint32_t devSerialNum; // 设备序列号
    QString devSerialNum_Ascii; // 设备序列号-Ascii
    uint8_t devTotalChannelNum;    //总通道数量
    uint8_t supportProbe;//探头支持 1-电极头 2-磁探头 3-电极头和磁探头
    uint8_t supportFilter; //滤波方式支持 1-下位机滤波 2-上位机滤波 3-上下位机滤波
    uint8_t devType;/*设备类型 如：发送机-2 接收机-1*/
    uint8_t measureProgress;//全局测量进度
    uint8_t batteryPercent; // 电量
    uint8_t wifiStrength;   // wifi信号强度
};
struct dev_ctrl{
    uint8_t channelSampleCounter;   // 采样通道上传完成总计
    uint8_t filterType;//滤波方式 1-下位机滤波 2-上位机滤波
    uint8_t probeType;//探头选择 1-电极头 2-磁探头
    uint8_t measureMethod;//测量方式（采样方式） 0-采样所有通道的单个频率 1-采样单个通道的所有频率

};

class dev_Global
{

private:
    QHash<QString,dev_info > devInfoPool;
    QHash<QString,dev_ctrl > devCtrlPool;
    QHash<QString,QList<dev_Channel> > devChPool;
public:
    dev_Global();

    void printDevChPool() const {
        for (auto it = devChPool.constBegin(); it != devChPool.constEnd(); ++it) {
            qDebug() << "Key:" << it.key() << "Values:";
            foreach (dev_Channel value, it.value()) {
                qDebug() <<__LINE__<<__FUNCTION__<< value.getChannelNo();
            }
        }
    }

    void printInfoPool() const {
        for (auto it = devInfoPool.constBegin(); it != devInfoPool.constEnd(); ++it) {
            qDebug() << "Key:" << it.key() << "Values:";
            qDebug() <<__LINE__<<__FUNCTION__<< it.value().devName <<it.value().devSerialNum_Ascii;
        }
    }

    void printChPool() const {
        for (auto it = devChPool.constBegin(); it != devChPool.constEnd(); ++it) {
            qDebug() << "Key:" << it.key();
            const QList<dev_Channel>& channels = it.value();
            for (const dev_Channel& channel : channels) {
                // 假设 dev_Channel 有一个方法 toString() 用于打印信息
                channel.printInfo();
            }
        }
    }

    void removeDev(QString dev)
    {
        qDebug()<<"Remove device:"<<dev;
        devInfoPool.remove(dev);
        devChPool.remove(dev);
    }

    void clearChPool(QString dev){devChPool[dev].clear();};
    void clearInfoPool(QString dev){
        devInfoPool.remove(dev);
    };
    void clearCtrlPool(QString dev){
        devCtrlPool.remove(dev);
    };
    void clearPool(QString dev){
        clearChPool(dev);
        clearInfoPool(dev);
        clearCtrlPool(dev);
    };

    dev_info& getDevInfo(const QString &devKey) {
        if (!devInfoPool.contains(devKey)) {
            throw std::runtime_error("devKey not found");
        }
        return devInfoPool[devKey];
    }

    dev_ctrl& getDevCtrl(const QString &devKey) {
        if (!devCtrlPool.contains(devKey)) {
            throw std::runtime_error("devKey not found");
        }
        return devCtrlPool[devKey];
    }

    QList<dev_Channel>& getDevCh(const QString &devKey) {
        if (!devChPool.contains(devKey)) {
            throw std::runtime_error("devKey not found");
        }
        return devChPool[devKey];
    }

    dev_Global&  operator<<(const QPair<QString, dev_Channel> &data)
    {
        devChPool[data.first].append(data.second);
        return *this;
    }

    dev_Global&  operator<<(const QPair<QString, dev_info> &data)
    {
        devInfoPool[data.first]=data.second;
        return *this;
    }

    dev_Global&  operator<<(const QPair<QString, dev_ctrl> &data)
    {
        devCtrlPool[data.first]=data.second;
        return *this;
    }
};

dev_Global::dev_Global(){


}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TcpServer w;
    w.show();

    dev_Global testGlobal;
    dev_info infoTemp={.devName="ADHC-90H",
                         .devSerialNum=0x12345678,
                         .devSerialNum_Ascii="TEST",
                         .devTotalChannelNum=1,
                         .supportProbe=1,
                         .supportFilter=1,
                         .devType=1,
                         .measureProgress=0,
                         .batteryPercent=100,
                         .wifiStrength=100                         };
    testGlobal<<qMakePair(QString("TST1"),infoTemp);
    testGlobal<<qMakePair(QString("TST2"),infoTemp);

    QString chan="TST1";
    for (int var = 0; var < 10; ++var) {
        dev_Channel *chp=new dev_Channel(var,var+10);
        testGlobal<<qMakePair(chan,*chp);
    }


    testGlobal.printDevChPool();
    testGlobal.printInfoPool();
    testGlobal.removeDev("TST2");
    try {
        dev_info &info = testGlobal.getDevInfo("TST1");
        QList<dev_Channel> &ch = testGlobal.getDevCh("TST1");
        // 使用 info
        info.devSerialNum=0x87654321;
        info.measureProgress=66;
        testGlobal.printDevChPool();
        testGlobal.printInfoPool();
        testGlobal.printChPool();
    } catch (const std::runtime_error &e) {
        // 异常处理：devKey 不存在
        qDebug()<<"Channel do not exist";
    }

    return a.exec();
}
