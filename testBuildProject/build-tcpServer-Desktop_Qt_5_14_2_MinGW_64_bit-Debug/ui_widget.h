/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *Title;
    QPushButton *sendButton;
    QLineEdit *msgBoxEdit;
    QComboBox *serverBox;
    QPushButton *refresButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *serverAddress;
    QLabel *clientPort;
    QSpacerItem *verticalSpacer_3;
    QLabel *clientAddress;
    QSpacerItem *verticalSpacer;
    QComboBox *clientPortBox;
    QComboBox *clientAddrBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        QFont font;
        font.setPointSize(15);
        Widget->setFont(font);
        Title = new QLabel(Widget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(300, 10, 171, 41));
        QFont font1;
        font1.setPointSize(20);
        Title->setFont(font1);
        sendButton = new QPushButton(Widget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(590, 270, 111, 41));
        msgBoxEdit = new QLineEdit(Widget);
        msgBoxEdit->setObjectName(QString::fromUtf8("msgBoxEdit"));
        msgBoxEdit->setGeometry(QRect(150, 270, 431, 311));
        serverBox = new QComboBox(Widget);
        serverBox->setObjectName(QString::fromUtf8("serverBox"));
        serverBox->setGeometry(QRect(330, 70, 181, 41));
        QFont font2;
        font2.setPointSize(10);
        serverBox->setFont(font2);
        refresButton = new QPushButton(Widget);
        refresButton->setObjectName(QString::fromUtf8("refresButton"));
        refresButton->setGeometry(QRect(600, 220, 93, 31));
        refresButton->setFont(font2);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 70, 141, 161));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        serverAddress = new QLabel(widget);
        serverAddress->setObjectName(QString::fromUtf8("serverAddress"));
        serverAddress->setFont(font);

        gridLayout->addWidget(serverAddress, 0, 0, 1, 1);

        clientPort = new QLabel(widget);
        clientPort->setObjectName(QString::fromUtf8("clientPort"));
        clientPort->setFont(font);

        gridLayout->addWidget(clientPort, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(132, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 0, 1, 1);

        clientAddress = new QLabel(widget);
        clientAddress->setObjectName(QString::fromUtf8("clientAddress"));
        clientAddress->setFont(font);

        gridLayout->addWidget(clientAddress, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(132, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        clientPortBox = new QComboBox(Widget);
        clientPortBox->setObjectName(QString::fromUtf8("clientPortBox"));
        clientPortBox->setGeometry(QRect(330, 190, 181, 41));
        clientAddrBox = new QComboBox(Widget);
        clientAddrBox->setObjectName(QString::fromUtf8("clientAddrBox"));
        clientAddrBox->setGeometry(QRect(330, 133, 181, 41));
        QWidget::setTabOrder(serverBox, sendButton);
        QWidget::setTabOrder(sendButton, msgBoxEdit);
        QWidget::setTabOrder(msgBoxEdit, refresButton);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Title->setText(QCoreApplication::translate("Widget", "TCP\346\234\215\345\212\241\345\231\250", nullptr));
        sendButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        refresButton->setText(QCoreApplication::translate("Widget", "\345\210\267\346\226\260", nullptr));
        serverAddress->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        clientPort->setText(QCoreApplication::translate("Widget", "\345\256\242\346\210\267\347\253\257\347\253\257\345\217\243", nullptr));
        clientAddress->setText(QCoreApplication::translate("Widget", "\345\256\242\346\210\267\347\253\257\345\234\260\345\235\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
