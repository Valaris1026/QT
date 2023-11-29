#include "widget.h"
#include "ui_widget.h"
#include <vector>



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    server = new QTcpServer;

    // 设置一个特定的 IP 地址和端口
    // 查找合适的 IP 地址
    std::vector<QHostAddress> serverAddress;
    foreach(const QNetworkInterface &interface, QNetworkInterface::allInterfaces()) {
        if (interface.flags().testFlag(QNetworkInterface::IsRunning)
                && !interface.flags().testFlag(QNetworkInterface::IsLoopBack)) {
            // 取第一个非本地回环的 IPv4 地址
            foreach(const QNetworkAddressEntry &entry, interface.addressEntries()) {
                if (entry.ip().protocol() == QAbstractSocket::IPv4Protocol) {
                    serverAddress.push_back(entry.ip());
                    break;
                }
            }
        }
    }

    qDebug()<<"\033[32m"<<'['<<__FUNCTION__<<']'<<'['<<__LINE__<<']'<<"Avaliable ip address:"<<"\033[0m";
    foreach (const QHostAddress &address, serverAddress) {

        qDebug()<<"\033[32m"<<address.toString()<<"\033[0m";
        ui->serverBox->addItem(address.toString());
    }

    // 使用找到的地址启动服务器
    quint16 port = 12345; // 替换为你想监听的端口号
    if(!server->listen(serverAddress[0], port)) {
        qDebug() << "Server could not start!";
    } else {
        qDebug() << "Server started on" << serverAddress[0].toString();
    }

    connect(server,&QTcpServer::newConnection,this,&Widget::newClientHandler);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::newClientHandler()
{
    //建立TCP连接
    QTcpSocket *socket = server->nextPendingConnection();
    mySocket = socket;
    socket->peerAddress();//获取客户端地址
    socket->peerPort();//获取客户端端口号

    if((ui->clientAddrBox->findText(socket->peerAddress().toString())))
    {
        ui->clientAddrBox->addItem(socket->peerAddress().toString());
    }
    if(ui->clientPortBox->findText(QString::number(socket->peerPort())))
    {
        ui->clientPortBox->addItem(QString::number(socket->peerPort()));

    }
//    connect(socket,QTcpSocket::ReadOnly,this,&Widget::tcpServerRead);

    //启动线程
    qDebug()<<"newClient creadted";
    myThread *t = new myThread(socket);
    t->start();  //开始线程
    connect(t,&myThread::sendToWidget,this,&Widget::threadSlot);
}

//void Widget::tcpRead()
//{
//    //获取信号的发出者
//    QTcpSocket *s =  (QTcpSocket *)sender();
//    QByteArray tcpData = s->readAll();
//    ui->msgBoxEdit->setText(QString(tcpData)+'\n');
//}

void Widget::threadSlot(QByteArray b)
{
    ui->msgBoxEdit->setText(QString(b));
}


void Widget::on_sendButton_clicked()
{
    QByteArray ba;
    ba.append(ui->msgBoxEdit->text().toLocal8Bit());
    qDebug()<<ba;
    mySocket->write("hello");
}

void Widget::on_serverBox_activated(int index)
{
    qDebug()<<"\033[33m"<<"slected server ip:"<<ui->serverBox->currentText()<<"\033[0m";
}


void Widget::on_refresButton_clicked()
{
    qDebug()<<"\033[33m"<<"Refresh server ip"<<"\nThread running:\n"<<QThread::idealThreadCount()<<"\033[0m";
}


void Widget::on_clientAddrBox_activated(int index)
{

}

