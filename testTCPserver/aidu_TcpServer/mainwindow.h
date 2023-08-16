#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMessageBox>
#include <QDebug>
#include <mythread.h>
#include <QNetworkInterface>

#define TCP_PORT 8000

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QMainWindow *parent = nullptr);
    void get_local_Ip();
    ~MainWindow();
private slots:
    void newClientHandler();
    void threadSlot(QByteArray b);
//    void tcpRead();

    void on_textMsgSendButton_clicked();

    void on_clientMsgClearButton_clicked();

    void on_textMsgClearButton_clicked();

private:
    Ui::MainWindow *ui;
    QTcpServer *server;
    QTcpSocket *mySocket;
};
#endif // MAINWINDOW_H
