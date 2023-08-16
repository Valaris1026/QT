#include "mythread.h"

mythread::mythread(QTcpSocket *s)
{
    socket =s;
}

void mythread::run()
{
    connect(socket,&QTcpSocket::readyRead,this,&mythread::readTcpData);
}


void mythread::readTcpData()
{
    QByteArray tcpData =socket->readAll();
    emit sendToWidget(tcpData);
    qDebug()<<tcpData;
}
