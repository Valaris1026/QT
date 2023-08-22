#include "mythread.h"
#include "admt.h"
#include "aiduprotocol.h"

mythread::mythread(QTcpSocket *s)
{
    socket =s;
    this->aiduComm.setSocket(this->socket);
}

void mythread::run()
{
    connect(socket,&QTcpSocket::readyRead,this,&mythread::readTcpData);
}


void mythread::readTcpData()
{
    QByteArray tcpData =socket->readAll();
    emit sendToWindow(tcpData);
    qDebug()<<tcpData;
    this->aiduComm.rxMsg((uint8_t*)tcpData.data(),tcpData.size(),&this->myAdmt);
}
