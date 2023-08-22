#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include "aiduprotocol.h"

class mythread:public QThread
{
    Q_OBJECT
public:
    explicit mythread(QTcpSocket *s);
    void run();

signals:
    void sendToWindow(QByteArray b);

private slots:
    void readTcpData();

private:
    QTcpSocket *socket;
    aiduProtocol aiduComm;
    admt myAdmt;
signals:
};

#endif // MYTHREAD_H
