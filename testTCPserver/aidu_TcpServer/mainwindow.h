#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMessageBox>
#include <QDebug>
#include <mythread.h>
#include <QNetworkInterface>

#include <admt.h>

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

private:
    Ui::MainWindow *ui;
    QTcpServer *server;
    QTcpSocket *mySocket;
};
#endif // MAINWINDOW_H
