#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    pictureId=2;
    QPixmap pix("D:\\Testspace\\qt\\testBuildProject\\testTimer\\pic\\ff1.JPG");
    ui->pictureShow->setPixmap(pix);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_startButton_clicked()
{
    //开启定时器 返回定时器编号
    myTimerId = this->startTimer(TIME_OUT);
}

void Widget::timerEvent(QTimerEvent *event)
{
    if(event->timerId()!=myTimerId)
    {
        return;
    }
    QString path("D:\\Testspace\\qt\\testBuildProject\\testTimer\\pic\\ff");
    path+=QString::number(pictureId);
    path+=".JPG";
    QPixmap pix(path);
    ui->pictureShow->setPixmap(pix);
    pictureId++;
    if(pictureId==9)
    {
        pictureId=1;
    }
}

void Widget::on_stopButton_clicked()
{
    this->killTimer(myTimerId);
}
