#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_loadHashButton_clicked()
{
notice("[%1] Load city information.",__LINE__);

// 添加到哈希表
cityInfo["beijing"] = QList<tempInfo_s>()<< tempInfo_s{"Monday", 14.2}
                                    << tempInfo_s{"Tuesday", 15.3}
                                    << tempInfo_s{"Wednesday", 13.5}
                                    << tempInfo_s{"Thursday", 16.7}
                                    << tempInfo_s{"Friday", 17.1}
                                    << tempInfo_s{"Saturday", 18.3}
                                    << tempInfo_s{"Sunday", 15.0};

cityInfo["newyork"] = QList<tempInfo_s>()<< tempInfo_s{"Monday", 17.2}
                                    << tempInfo_s{"Tuesday", 5.3}
                                    << tempInfo_s{"Wednesday", 23.5}
                                    << tempInfo_s{"Thursday", 26.7}
                                    << tempInfo_s{"Friday", 27.1}
                                    << tempInfo_s{"Saturday",28.3}
                                    << tempInfo_s{"Sunday", 35.0};;
}

void Dialog::on_findButton_clicked()
{
    notice("[%1] Find city information.",__LINE__);
    QString cityNameStr=ui->cityNameEdit->text();
    ui->cityMessageBrowser->clear();
    if (cityInfo.contains(cityNameStr)) {
        const QList<tempInfo_s> &temperatures = cityInfo[cityNameStr];
        qDebug() << cityNameStr << "的一周温度信息:";
        foreach (const tempInfo_s &info, temperatures) {
            qDebug() << info.weekDay << ": " << info.temperatures;
            QString tempStr;
            ui->cityMessageBrowser->append(info.weekDay+":"+tempStr.setNum(info.temperatures));
        }
    } else {
        qDebug() << "哈希表中没有" << cityNameStr << "的信息。";
    }
}
