#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QMainWindow *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    server = new QTcpServer;

    server->listen(QHostAddress::AnyIPv4,TCP_PORT);

    ui->serverAddressEdit->setText(server->serverAddress().toString());
    ui->portEdit->setText(QString (server->serverPort()));

    connect(server,&QTcpServer::newConnection,this,&MainWindow::newClientHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::get_local_Ip()
{
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    // use the first non-localhost IPv4 address
    QString ipAddress;
    qDebug()<<"Ip addressesList number:"<<ipAddressesList.size();
    for (int i = 0; i < ipAddressesList.size(); ++i) {
        qDebug()<<ipAddressesList.at(i);
        if (ipAddressesList.at(i) != QHostAddress::LocalHost &&
            ipAddressesList.at(i).toIPv4Address()) {
            ipAddress = ipAddressesList.at(i).toString();
            if (ipAddress.isEmpty())
                ipAddress = QHostAddress(QHostAddress::LocalHost).toString();
            qDebug()<<"IP"<<i<<"为："<<ipAddress;
//            break;
        }
    }
//    // if we did not find one, use IPv4 localhost
//    if (ipAddress.isEmpty())
//        ipAddress = QHostAddress(QHostAddress::LocalHost).toString();
//    qDebug()<<"IP为："<<ipAddress;
}

void MainWindow::newClientHandler()
{
    //建立TCP连接
    QTcpSocket *socket = server->nextPendingConnection();
    mySocket = socket;
    socket->peerAddress();//获取客户端地址
    socket->peerPort();//获取客户端端口号
    get_local_Ip();

    ui->ipEdit->setText(socket->peerAddress().toString());
    ui->portEdit->setText(QString::number(socket->peerPort()));
//    connect(socket,&QTcpSocket::readyRead,this,&Widget::tcpServerRead);

    //启动线程
    qDebug()<<"newClient creadted";
    mythread *t = new mythread(socket);
    t->start();  //开始线程
    connect(t,&mythread::sendToWindow,this,&MainWindow::threadSlot);
}

void MainWindow::threadSlot(QByteArray b)
{
    ui->clientMsgRcvEdit->setText(QString(b));
}

void MainWindow::on_textMsgSendButton_clicked()
{
    QByteArray ba;
    ba.append(ui->textMsgSendEdit->text().toLocal8Bit());
    qDebug()<<ba;
    ba.append("\r\n");
    mySocket->write(ba);
}


void MainWindow::on_clientMsgClearButton_clicked()
{
    ui->clientMsgRcvEdit->clear();
}


void MainWindow::on_textMsgClearButton_clicked()
{
    ui->clientMsgRcvEdit->clear();
}

