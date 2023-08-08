#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    server = new QTcpServer;

    server->listen(QHostAddress::AnyIPv4,TCP_PORT);

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
    socket->peerAddress();//获取客户端地址
    socket->peerPort();//获取客户端端口号

    ui->ipEdit->setText(socket->peerAddress().toString());
    ui->portEdit->setText(QString::number(socket->peerPort()));
//    connect(socket,&QTcpSocket::readyRead,this,&Widget::tcpServerRead);

    //启动线程
    qDebug()<<"newClient creadted";
    myThread *t = new myThread(socket);
    t->start();  //开始线程
}

//void Widget::tcpRead()
//{
//    //获取信号的发出者
//    QTcpSocket *s =  (QTcpSocket *)sender();
//    QByteArray tcpData = s->readAll();
//    ui->msgBoxEdit->setText(QString(tcpData)+'\n');
//}



void Widget::on_sendButton_clicked()
{
    QByteArray ba;
    ba.append(ui->msgBoxEdit->text());
    qDebug()<<ba;
    mySocket->write(ba);
}

