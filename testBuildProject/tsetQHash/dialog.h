#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QHash>
#include <QDebug>

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
    void on_loadHashButton_clicked();

    void on_findButton_clicked();

private:
    struct tempInfo_s {
        QString weekDay;
        double temperatures;
    };
    QHash<QString, QList<tempInfo_s> > cityInfo;
    Ui::Dialog *ui;
};
#endif // DIALOG_H
