#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);//自动建立ui见面的信号（如text changed和clicked等）与对应槽的（如on_lineEdit_textChanged）的连接
    QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");   //正则表达式限制输入字元的范围
    ui->lineEdit->setValidator(new QRegExpValidator(regExp,this));	//(b)
    connect(ui->okButton,SIGNAL(clicked()),this,SLOT(accept()));	//(c)
    connect(ui->cancelButton,SIGNAL(clicked()),this,SLOT(reject()));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_lineEdit_textChanged(const QString &arg1)
{
    qDebug()<<arg1;
    ui->okButton->setEnabled(ui->lineEdit->hasAcceptableInput());
}
