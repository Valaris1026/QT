#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <QDebug>

class myThread :public QThread
{
    Q_OBJECT
public:
    explicit myThread(QTcpSocket *s);
    void run();

signals:
    void sendToWidget(QByteArray b);

private slots:
    void tcpReadData();
    void tcpDisconnect();

private:
    QTcpSocket *socket;

signals:

};

#endif // MYTHREAD_H
