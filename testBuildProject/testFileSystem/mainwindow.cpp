#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->newAction,&QAction::triggered,this,&MainWindow::newActionSlot);
    connect(ui->openAction,&QAction::triggered,this,&MainWindow::openActionSlot);
    connect(ui->saveAction,&QAction::triggered,this,&MainWindow::saveActionSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newActionSlot()
{
    ui->textEdit->clear();
    this->setWindowTitle("新建文本文档.txt");
}

void MainWindow::openActionSlot()
{
   QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                QCoreApplication::applicationFilePath()
                                );
   if(fileName.isEmpty())
   {
        QMessageBox::warning(this,"警告","请选择一个文件");
   }
   else
   {
       qDebug()<<fileName;
       QFile file(fileName);
       file.open(QIODevice::ReadOnly);
       QByteArray ba = file.readAll();
       ui->textEdit->setText(QString(ba));
       file.close();
   }
}

void MainWindow::saveActionSlot()
{
    QString fileName = QFileDialog::getSaveFileName(this,"请选择一个文件",QCoreApplication::applicationFilePath());

    if(fileName.isEmpty())
    {
        QMessageBox::warning(this,"警告","请选择一个文件");

    }
    else
    {
        QFile file(fileName);
        file.open(QIODevice::WriteOnly);
//        ui->textEdit->toPlainText();
        QByteArray ba;
        ba.append(ui->textEdit->toPlainText());
        file.write(ba);
        file.close();
    }
}

void MainWindow::keyPressEvent(QKeyEvent *k)
{
    if(k->modifiers()==Qt::ControlModifier && k->key() == Qt::Key_S)
    {
        qDebug()<<"save";
        saveActionSlot();
    }
}
