#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    socket = new QTcpSocket; //创建socket对象

    connect(socket,&QTcpSocket::readyRead,this,&Widget::tcpReadData);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_cancelButton_clicked()
{
    this->close();
}


void Widget::on_connectButton_clicked()
{
    //获取IP地址和端口号
    QString IP=ui->ipEdit->text();
    QString port=ui->portEdit->text();

    //连接服务器
    socket->connectToHost(QHostAddress(IP),port.toShort());

    //连接判断服务器成功
    connect(socket,&QTcpSocket::connected,[this]{
        QMessageBox::information(this,"连接提示","连接服务器成功");

        this->hide();
        Chat *c=new Chat(socket);
        c->show();
    });
    connect(socket,&QTcpSocket::disconnected,[this]{
        QMessageBox::warning(this,"连接提示","服务器断开");
    });
}


void Widget::on_pushButton_clicked()
{
    socket->write("hello this is qt tcp client");
}

void Widget::tcpReadData()
{
    QByteArray tcpData = socket->readAll();
//    QMessageBox::information(this,"Sever Message",tcpData);
    ui->tcpSeverMsgEdit->setText(QString(tcpData)+'\n');
}

