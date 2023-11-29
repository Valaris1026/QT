#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QNetworkInterface>
#include <QMessageBox>
#include <QComboBox>
#include <QDebug>
#include <mythread.h>

#define TCP_PORT 8000

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void newClientHandler();
    void threadSlot(QByteArray b);
//    void tcpRead();

    void on_sendButton_clicked();


    void on_serverBox_activated(int index);

    void on_refresButton_clicked();

    void on_clientAddrBox_activated(int index);

private:
    Ui::Widget *ui;
    QTcpServer *server;
    QTcpSocket *mySocket;
};
#endif // WIDGET_H
