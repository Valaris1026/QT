#include "mythread.h"

myThread::myThread(QTcpSocket *s)
{
    socket =s;
}

void myThread::run()
{
    connect(socket,&QTcpSocket::readyRead,this,&myThread::tcpReadData);
    connect(socket,&QTcpSocket::disconnected,this,&myThread::tcpDisconnect);
}


void myThread::tcpReadData()
{
    QByteArray tcpData =socket->readAll();
    emit sendToWidget(tcpData);
    qDebug()<<QString(tcpData);
}

void myThread::tcpDisconnect()
{
    qDebug()<<"\033[33m"<<"disconnect"<<"\033[0m";
    this->quit();
}
