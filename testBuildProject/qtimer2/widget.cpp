#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    timer =new QTimer;
    pictureId=2;
    QImage img;
    img.load("D:\\Testspace\\qt\\testBuildProject\\testTimer\\pic\\ff1.JPG");
    ui->label->setPixmap(QPixmap::fromImage(img));

    //定时器定时到，发出TIMEOUT信号
    connect(timer,&QTimer::timeout,this,&Widget::timeoutSlot);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_startButton_clicked()
{
    timer->start(TIMEOUT);
}
void Widget::timeoutSlot()
{
    QString path("D:\\Testspace\\qt\\testBuildProject\\testTimer\\pic\\ff");
    path+=QString::number(pictureId);
    path+=".JPG";

    QImage img;
    img.load(path);
    ui->label->setPixmap(QPixmap::fromImage(img));

    pictureId++;
    if(pictureId==9){
        pictureId=1;
    }
}

void Widget::on_stopButton_clicked()
{
    timer->stop();
}

void Widget::on_singleButton_clicked()
{
    QTimer::singleShot(TIMEOUT,this,SLOT(timeoutSlot()));
}
