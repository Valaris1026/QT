#ifndef AIDUPROTOCOL_H
#define AIDUPROTOCOL_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QTcpSocket>
#include <makepack.h>
#include <admt.h>

class aiduProtocol:public makePack
{
public:
    aiduProtocol();
    bool rxMsg(uint8_t *rxBuf,uint32_t rxLength,QTcpSocket *socket,ADMT *admt);
    bool txMsg(uint8_t *rxBuf,uint32_t txLength,QTcpSocket *socket,ADMT *admt );
private:
    bool executeMsg();                                                                               // 主机接收从机数据
    void makePack();
    void send();
};

#endif // AIDUPROTOCOL_H
