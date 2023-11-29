#ifndef AIDUPROTOCOL_H
#define AIDUPROTOCOL_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QTcpSocket>
#include <makepack.h>
#include <admt.h>
#include <QDebug>

#define ADMT_SLAVE_BOARDCAST_ADDR 0xFFFFFFFF
#define ADMT_SLAVE_OFFSET_BEGINBYTE 0
#define ADMT_SLAVE_OFFSET_DEVSERIALNUM 1
#define ADMT_SLAVE_OFFSET_XTOTALCHANNELNUM 5
#define ADMT_SLAVE_OFFSET_SAMPLECHNUM 6
#define ADMT_SLAVE_OFFSET_XOPCHNO 7
#define ADMT_SLAVE_OFFSET_XMEAMETHOD 8
#define ADMT_SLAVE_OFFSET_XSLAVETYPE 9
#define ADMT_SLAVE_OFFSET_COMMAND1 10
#define ADMT_SLAVE_OFFSET_COMMAND2 11
#define ADMT_SLAVE_OFFSET_COMMAND3 12
#define ADMT_SLAVE_OFFSET_COMMAND4 13
#define ADMT_SLAVE_OFFSET_COMMAND5 14
#define ADMT_SLAVE_OFFSET_TOTALFRAME 15
#define ADMT_SLAVE_OFFSET_CURRENTFRAME 17
#define ADMT_SLAVE_OFFSET_MIDBYTE 19
#define ADMT_SLAVE_OFFSET_DATANUMBER 20
#define ADMT_SLAVE_OFFSET_DATA 21

#define ADMT_MASTER_OFFSET_BEGINBYTE 0
#define ADMT_MASTER_OFFSET_DEVSERIALNUM 1
#define ADMT_MASTER_OFFSET_XTOTALCHANNELNUM 5
#define ADMT_MASTER_OFFSET_SAMPLECHNUM 6
#define ADMT_MASTER_OFFSET_XOPCHNO 7
#define ADMT_MASTER_OFFSET_XMEAMETHOD 8
#define ADMT_MASTER_OFFSET_XSLAVETYPE 9
#define ADMT_MASTER_OFFSET_COMMAND1 10
#define ADMT_MASTER_OFFSET_COMMAND2 11
#define ADMT_MASTER_OFFSET_COMMAND3 12
#define ADMT_MASTER_OFFSET_COMMAND4 13
#define ADMT_MASTER_OFFSET_COMMAND5 14
#define ADMT_MASTER_OFFSET_MIDBYTE 15
#define ADMT_MASTER_OFFSET_DATANUMBER 16
#define ADMT_MASTER_OFFSET_DATA 17

#pragma pack(push, 1) // 1字节对齐
    typedef struct AIDU_mFRAME
    {
        uint8_t beginByte;
        uint32_t DevSerialNum;
        uint8_t xTotalChannelNum;
        uint8_t sampleChNum;
        uint8_t xOpChNo;
        uint8_t xMeaMethod;
        uint8_t xSlaveType;
        uint8_t command1;
        uint8_t command2;
        uint8_t command3;
        uint8_t command4;
        uint8_t command5;
        uint8_t midByte;
        uint8_t dataNumber;
        uint8_t data[]; // Data area
    } Aidu_mFrame_T;    // aidu protocol master frame type
#pragma pack(pop)

#pragma pack(push, 1) // 1字节对齐
    typedef struct AIDU_sFRAME
    {
        uint8_t beginByte;
        uint32_t DevSerialNum;
        uint8_t xTotalChannelNum;
        uint8_t sampleChNum;
        uint8_t xOpChNo;
        uint8_t xMeaMethod;
        uint8_t xSlaveType;
        uint8_t command1;
        uint8_t command2;
        uint8_t command3;
        uint8_t command4;
        uint8_t command5;
        uint16_t TotalFrame;
        uint16_t CurrentFrame;
        uint8_t midByte;
        uint16_t dataNumber;
        uint8_t data[]; // Data area
    } Aidu_sFrame_T;    // aidu protocol slave frame type
#pragma pack(pop)

typedef enum
{
    aiduCom_readConfig = 0x10,    // 读取配置信息
    aiduCom_readInfo = 0x12,      // 读取设备型号和版本信息
    aiduCom_setConfig = 0x14,     // 测量配置
    aiduCom_HearBeat = 0x21,      // 心跳
    aiduCom_CheckChConSTA = 0x30, // 检查通道连接状态
    aiduCom_RefreshChNum = 0x31,  // 更新通道总数
    aiduCom_setMeasure = 0x32,    // 开始测量及获取测量数据
    aiduCom_upMeasureData = 0x35, // update sample data
    aiduCom_RepeatChData = 0x38   // 重读数据
} Aidu_command_t;

class aiduProtocol:public makePack
{
public:
    aiduProtocol(QTcpSocket *socket);
    aiduProtocol(){};
    bool rxMsg(uint8_t *rxBuf,uint32_t rxLength,admt *admt);
    bool txMsg(admt *admt,Aidu_command_t func);
    void setSocket(QTcpSocket *setSocket){this->socket=setSocket;}
private:
    QTcpSocket *socket;
    bool executeMsg(Aidu_sFrame_T *slave,admt *admt);                                                                              // 主机接收从机数据
    void makeCommPack(std::vector<uint8_t> *vec,admt *admt,Aidu_command_t func);
    void send(uint8_t *buf, uint32_t len);
};

#endif // AIDUPROTOCOL_H
