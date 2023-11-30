#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>

const double pi=3.1415926;

//#define info(arg) qDebug() << "\033[32m" << arg << "\033[0m"

#define info(format, ...) qDebug() << "\033[32m" << QString(format).arg(__VA_ARGS__) << "\033[0m"
#define notice(format, ...) qDebug() << "\033[33m" << QString(format).arg(__VA_ARGS__) << "\033[0m"
#define error(format, ...) qDebug() << "\033[31m" << QString(format).arg(__VA_ARGS__) << "\033[0m"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_calculateButton_clicked();

    void on_radiusEdit_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_clearButton_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
