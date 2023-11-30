/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadHashButton;
    QLabel *cityNameLabel;
    QLineEdit *cityNameEdit;
    QPushButton *findButton;
    QTextBrowser *cityMessageBrowser;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 100, 181, 41));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(160, 180, 451, 230));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loadHashButton = new QPushButton(widget);
        loadHashButton->setObjectName(QString::fromUtf8("loadHashButton"));

        horizontalLayout->addWidget(loadHashButton);

        cityNameLabel = new QLabel(widget);
        cityNameLabel->setObjectName(QString::fromUtf8("cityNameLabel"));

        horizontalLayout->addWidget(cityNameLabel);

        cityNameEdit = new QLineEdit(widget);
        cityNameEdit->setObjectName(QString::fromUtf8("cityNameEdit"));

        horizontalLayout->addWidget(cityNameEdit);


        horizontalLayout_2->addLayout(horizontalLayout);

        findButton = new QPushButton(widget);
        findButton->setObjectName(QString::fromUtf8("findButton"));

        horizontalLayout_2->addWidget(findButton);


        verticalLayout->addLayout(horizontalLayout_2);

        cityMessageBrowser = new QTextBrowser(widget);
        cityMessageBrowser->setObjectName(QString::fromUtf8("cityMessageBrowser"));

        verticalLayout->addWidget(cityMessageBrowser);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Hash test", nullptr));
        loadHashButton->setText(QCoreApplication::translate("Dialog", "load Hash", nullptr));
        cityNameLabel->setText(QCoreApplication::translate("Dialog", "city name", nullptr));
        findButton->setText(QCoreApplication::translate("Dialog", "find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
