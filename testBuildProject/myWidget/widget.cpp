#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)//信号写在这里面
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //连接信号和槽 谁发出信号 发出什么信号 谁处理信号 怎么处理
    connect(ui->cmdLineEdit,SIGNAL(returnPressed()),this,SLOT(on_commitButton_clicked()));
    connect(ui->cancelButton,&QPushButton::clicked,this,&Widget::on_cancelButton_clicked);
//    connect(ui->browseButton,&QPushButton::clicked,[this]()
//    {
//        QMessageBox::information(this,"信息","点击浏览");
//    });
    connect(ui->browseButton,&QPushButton::clicked,this,&Widget::on_browseButton_clicked);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_commitButton_clicked()
{
    QString lineText = ui->cmdLineEdit->text();
    QProcess *myProcess=new QProcess(this);
    myProcess->start(lineText);
}

void Widget::on_cancelButton_clicked()
{
    this->close();
}

void Widget::on_browseButton_clicked()
{
     QMessageBox::information(this,"信息","点击浏览");
}
