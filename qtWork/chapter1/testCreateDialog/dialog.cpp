#include "dialog.h"
#include "ui_dialog.h"
#include "math.h"

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


void Dialog::on_calculateButton_clicked()
{
    bool okToken;
    QString radiusStrTemp=ui->radiusEdit->text();//get radius
    double radiusDouTemp=radiusStrTemp.toDouble(&okToken);
    double areaDouTemp=std::pow(radiusDouTemp,2)*pi;
    QString areaStrTemp;
    ui->areaEdit->setText(areaStrTemp.setNum(areaDouTemp,'f',4));
}

/**
 * @brief Dialog::on_radiusEdit_textChanged
 * @param arg1 Current string in the text box
 */
void Dialog::on_radiusEdit_textChanged(const QString &arg1)
{
    bool okToken;
    info("arg1 %1 %2",arg1,arg1);
    QString radiusStrTemp=ui->radiusEdit->text();//get radius
    double radiusDouTemp=radiusStrTemp.toDouble(&okToken);
    double areaDouTemp=std::pow(radiusDouTemp,2)*pi;
    QString areaStrTemp;
    ui->areaEdit->setText(areaStrTemp.setNum(areaDouTemp,'f',4));
}
/**
 * @brief Dialog::on_clearButton_clicked
 */
void Dialog::on_clearButton_clicked()
{
    notice("%1:Clear edit",__LINE__);
    ui->radiusEdit->clear();
    ui->areaEdit->clear();
}
