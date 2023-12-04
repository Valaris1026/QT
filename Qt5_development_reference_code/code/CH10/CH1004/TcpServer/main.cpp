#include "tcpserver.h"
#include <QApplication>
#include <QPair>

class dev_Global
{
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

private:
    QHash<QString,dev_info > devInfoPool;
    QHash<QString,QList<int> > devChPool;
public:
    dev_Global();

    void printDevChPool() const {
        for (auto it = devChPool.constBegin(); it != devChPool.constEnd(); ++it) {
            qDebug() << "Key:" << it.key() << "Values:";
            foreach (int value, it.value()) {
                qDebug() << value;
            }
        }
    }

    void removeDev(QString dev)
    {
        qDebug()<<"Remove device:"<<dev;
        devInfoPool.remove(dev);
        devChPool.remove(dev);
    }

    dev_Global&  operator<<(const QPair<QString, int> &data)
    {
       devChPool[data.first].append(data.second);
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
    testGlobal << qMakePair(QString("Channel1"), 100)
           << qMakePair(QString("Channel2"), 200);
    testGlobal.printDevChPool();
    testGlobal.removeDev("Channel2");
    testGlobal.printDevChPool();

    return a.exec();
}
