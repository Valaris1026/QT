#include "chat.h"
#include "ui_chat.h"

Chat::Chat(QTcpSocket *s,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);
    socket = s;

connect(socket,&QTcpSocket::readyRead,this,&Chat::tcpReadData);
}

Chat::~Chat()
{
    delete ui;
}

void Chat::on_clearButton_clicked()
{
    ui->lineEdit->clear();
}

void Chat::tcpReadData()
{
    QByteArray tcpData = socket->readAll();
//    QMessageBox::information(this,"Sever Message",tcpData);
    qDebug()<<tcpData;
    ui->lineEdit->setText("QString(tcpData)+'\n'");
}

void Chat::on_sendButton_clicked()
{
    QByteArray ba;
    ba.append(ui->lineEdit->text().toLocal8Bit());
    socket->write(ba);
}

