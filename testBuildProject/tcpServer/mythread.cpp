#include "mythread.h"

myThread::myThread(QTcpSocket *s)
{
    socket =s;
}

void myThread::run()
{
    connect(socket,&QTcpSocket::readyRead,this,&myThread::readTcpData);
}


void myThread::readTcpData()
{
    QByteArray tcpData =socket->readAll();
    emit sendToWidget(tcpData);
    qDebug()<<tcpData;
}
