#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <QDebug>

class mythread:public QThread
{
    Q_OBJECT
public:
    explicit mythread(QTcpSocket *s);
    void run();

signals:
    void sendToWidget(QByteArray b);

private slots:
    void readTcpData();

private:
    QTcpSocket *socket;

signals:
};

#endif // MYTHREAD_H
