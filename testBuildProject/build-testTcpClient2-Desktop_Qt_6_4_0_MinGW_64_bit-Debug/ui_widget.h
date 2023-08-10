/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QTextEdit *tcpSeverMsgEdit;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *ipEdit;
    QSpacerItem *verticalSpacer;
    QLineEdit *portEdit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *connectButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1020, 393);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 40, 161, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        tcpSeverMsgEdit = new QTextEdit(Widget);
        tcpSeverMsgEdit->setObjectName("tcpSeverMsgEdit");
        tcpSeverMsgEdit->setGeometry(QRect(520, 80, 481, 281));
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(680, 30, 131, 31));
        QFont font1;
        font1.setPointSize(15);
        label_4->setFont(font1);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 140, 127, 80));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        widget1 = new QWidget(Widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(260, 141, 173, 71));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ipEdit = new QLineEdit(widget1);
        ipEdit->setObjectName("ipEdit");

        verticalLayout_2->addWidget(ipEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        portEdit = new QLineEdit(widget1);
        portEdit->setObjectName("portEdit");

        verticalLayout_2->addWidget(portEdit);

        widget2 = new QWidget(Widget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(130, 260, 309, 31));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cancelButton = new QPushButton(widget2);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(widget2);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        connectButton = new QPushButton(widget2);
        connectButton->setObjectName("connectButton");

        horizontalLayout->addWidget(connectButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TCP\345\256\242\346\210\267\347\253\257", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250\346\266\210\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243", nullptr));
        cancelButton->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        connectButton->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
