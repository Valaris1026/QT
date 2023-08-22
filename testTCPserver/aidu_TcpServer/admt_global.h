#ifndef ADMT_GLOBAL_H
#define ADMT_GLOBAL_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

#define MAX_NAME_LEN 100
#define ADMT_NAME2 "ADHC-JS1N V1.0 \'智能堤防堤坝隐患探测仪\'"
#define ADMT_TRANSMITTER 1
#define ADMT_RECEIVER 2

#define ADMT_DEFAULT_SERIAL_NUM 0xFFFFFFF3
#define ADMT_DEFAULT_METHOD 0
#define ADMT_DEFAULT_FILTER 1 // 1-Down filter 2-Up filter
#define ADMT_DEFAULT_PROBE 2  // 1-Electric probe 2-Magnet probe 3-support both probe
#define ADMT_SUPPORT_FILTER 1
#define ADMT_SUPPORT_PROBE 3

class admt_Global
{
private:
    char devName[MAX_NAME_LEN];      // 设备名称
    uint32_t devSerialNum; // 设备序列号
    uint8_t AdChCounter;   // 采样通道上传完成总计
    /*xTotalChannelNum - 总通道数量 初始化上电的时候从下位机中读取 上位机读取配置的时候上传*/
    uint8_t xTotalChannelNum;
    /*xOpChNo -上位机操作下位机的通道ID Ch1~Chx 须小于xTotalChannelNum*/
    uint8_t xOpChNo;
    uint8_t xFilter; // 1-Down filter 2-Up filter
    uint8_t Probe;   // 1-Electric probe 2-Magnet probe 3-support both probe
    /*xFilter_Probe - 滤波与探头选择 上下滤波方式（下位机上传） 下位机的探头类型*/
    uint8_t xFilter_Probe;
    /*xMeaMethod-测量方式（采样方式） 0-采样所有通道的单个频率 1-采样单个通道的所有频率*/
    uint8_t xMeaMethod;
    /*xSlaveType - 从机类型*/
    uint8_t xSlaveType;
    /*xGlobalProgress - 全局的测量进度 下发测量指令后 计算出测量所需时间，使用软件定时器的方式更新进度*/
    uint8_t xGlobalProgress;
    /*xAllChSTA-全局测量状态 */
    uint8_t xAllChSTA;
    /*xMeaNeedTime-测量完成所需时间 单位ms*/
    uint32_t xMeaNeedTime;
    uint8_t batteryPercent; // 电量
    uint8_t wifiStrength;   // wifi信号强度
    friend class admt;
public:
    admt_Global();
    const char* getDevName(){return this->devName;}
    uint32_t getDevSerialNum(){return this->devSerialNum;}
    void setDevName(const char *setName){
        memset(this->devName,0,MAX_NAME_LEN);
        memcpy(this->devName,setName, strlen(setName));
    };
    void setDevSerialNum(const uint32_t setSerialNum){this->devSerialNum = setSerialNum;};
    uint8_t getAdChCounter(){return this->AdChCounter;}
    void setAdChCounter(uint8_t setAdChCounter){this->AdChCounter= setAdChCounter;}
    uint8_t getTotalChannelNumber(){return this->xTotalChannelNum;}
    void setTotalChannelNumber(uint8_t setTotalChannelNum){this->xTotalChannelNum=setTotalChannelNum;}
    uint8_t getOperationChannelID(){return this->xOpChNo;}
    void setOperationChannelID(uint8_t setOpChId){this->xOpChNo=setOpChId;}
    uint8_t getFilterType(){return this->xFilter;}
    void setFilterType(uint8_t setFilterType){this->xFilter=setFilterType;}
    uint8_t getProbeType(){return this->Probe;}
    void setProbeType(uint8_t setProbeType){this->Probe=setProbeType;}
    uint8_t getMeasureMethod(){return this->xMeaMethod;}
    void setMeasureMethod(uint8_t setMeaMethod){this->xMeaMethod=setMeaMethod;}
    uint8_t getSlaveType(){return this->xSlaveType;}
    void setSlaveType(uint8_t setSlaveType){this->xSlaveType = setSlaveType;}
    uint8_t getMeasureGlobalProgress(){return this->xGlobalProgress;}
    void setMeasureGlobalProgress(uint8_t setProgress){this->xGlobalProgress=setProgress;}
    uint8_t getAllChannelStatus(){return this->xAllChSTA;}
    void setAllChannelStatus(uint8_t setStatu){this->xAllChSTA =setStatu;}
    uint32_t getMeasureNeedTime(){return this->xMeaNeedTime;}
    void setMeasureNeedTime(uint32_t setMeaNeedTime_s){this->xMeaNeedTime=setMeaNeedTime_s;}
    uint8_t getBatteryPercent(){return this->batteryPercent;}
    void setBatteryPercent(uint8_t setBatPercent){this->batteryPercent=setBatPercent;}
    uint8_t getWifiStrength(){return this->wifiStrength;}
    void setWifiStrength(uint8_t setWifiStrength){this->wifiStrength =setWifiStrength;}
};

#endif // ADMT_GLOBAL_H
