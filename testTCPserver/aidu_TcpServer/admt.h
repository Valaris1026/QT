#ifndef ADMT_H
#define ADMT_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

#define MAX_NAME_LEN 100

class ADMT
{
private:
    char DevName[MAX_NAME_LEN];      // 设备名称
    uint32_t DevSerialNum; // 设备序列号
    uint8_t AdCHcounter;   // 采样通道上传完成总计
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
public:
    ADMT();

};

#endif // ADMT_H
