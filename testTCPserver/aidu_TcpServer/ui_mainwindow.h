/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *clientMsgRcvEdit;
    QLabel *label_4;
    QPushButton *textMsgSendButton;
    QPushButton *textMsgClearButton;
    QPushButton *clientMsgClearButton;
    QLabel *label_5;
    QLineEdit *textMsgSendEdit;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLineEdit *ipEdit;
    QLabel *label_7;
    QLineEdit *portEdit;
    QLineEdit *lineEdit;
    QLabel *label_10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLineEdit *serverAddressEdit;
    QLabel *label_9;
    QLineEdit *serverPortEdit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_22;
    QLineEdit *lineEdit_14;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *deviceSerialNumberEdit;
    QLineEdit *totalChannelNumberEdit;
    QLineEdit *sampleChannelNumberEdit;
    QLineEdit *operateChannelIDEdit;
    QLineEdit *measureMethodEidt;
    QLineEdit *slaveSampleTypeEdit;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *commandEdit;
    QLineEdit *paramByteSizeEdit;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1191, 704);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 10, 191, 51));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        clientMsgRcvEdit = new QLineEdit(centralwidget);
        clientMsgRcvEdit->setObjectName(QString::fromUtf8("clientMsgRcvEdit"));
        clientMsgRcvEdit->setGeometry(QRect(190, 130, 331, 171));
        clientMsgRcvEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        clientMsgRcvEdit->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 110, 69, 20));
        textMsgSendButton = new QPushButton(centralwidget);
        textMsgSendButton->setObjectName(QString::fromUtf8("textMsgSendButton"));
        textMsgSendButton->setGeometry(QRect(190, 580, 93, 29));
        textMsgClearButton = new QPushButton(centralwidget);
        textMsgClearButton->setObjectName(QString::fromUtf8("textMsgClearButton"));
        textMsgClearButton->setGeometry(QRect(430, 580, 93, 29));
        clientMsgClearButton = new QPushButton(centralwidget);
        clientMsgClearButton->setObjectName(QString::fromUtf8("clientMsgClearButton"));
        clientMsgClearButton->setGeometry(QRect(430, 310, 93, 29));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 360, 69, 20));
        textMsgSendEdit = new QLineEdit(centralwidget);
        textMsgSendEdit->setObjectName(QString::fromUtf8("textMsgSendEdit"));
        textMsgSendEdit->setGeometry(QRect(190, 380, 331, 191));
        textMsgSendEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 110, 121, 97));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(15);
        label_6->setFont(font1);

        verticalLayout_2->addWidget(label_6);

        ipEdit = new QLineEdit(layoutWidget_2);
        ipEdit->setObjectName(QString::fromUtf8("ipEdit"));

        verticalLayout_2->addWidget(ipEdit);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font2;
        font2.setPointSize(10);
        label_7->setFont(font2);

        verticalLayout_2->addWidget(label_7);

        portEdit = new QLineEdit(layoutWidget_2);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));

        verticalLayout_2->addWidget(portEdit);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 240, 121, 411));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 220, 119, 17));
        label_10->setFont(font2);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(280, 70, 137, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(40, 10, 121, 97));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        verticalLayout_3->addWidget(label_8);

        serverAddressEdit = new QLineEdit(widget1);
        serverAddressEdit->setObjectName(QString::fromUtf8("serverAddressEdit"));

        verticalLayout_3->addWidget(serverAddressEdit);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        verticalLayout_3->addWidget(label_9);

        serverPortEdit = new QLineEdit(widget1);
        serverPortEdit->setObjectName(QString::fromUtf8("serverPortEdit"));

        verticalLayout_3->addWidget(serverPortEdit);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(440, 70, 194, 22));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(widget2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_2->addWidget(label_22);

        lineEdit_14 = new QLineEdit(widget2);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        horizontalLayout_2->addWidget(lineEdit_14);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(530, 130, 443, 161));
        horizontalLayout_3 = new QHBoxLayout(widget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_11 = new QLabel(widget3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);

        label_12 = new QLabel(widget3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout->addWidget(label_12);

        label_14 = new QLabel(widget3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout->addWidget(label_14);

        label_15 = new QLabel(widget3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout->addWidget(label_15);

        label_13 = new QLabel(widget3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout->addWidget(label_13);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        deviceSerialNumberEdit = new QLineEdit(widget3);
        deviceSerialNumberEdit->setObjectName(QString::fromUtf8("deviceSerialNumberEdit"));

        verticalLayout_4->addWidget(deviceSerialNumberEdit);

        totalChannelNumberEdit = new QLineEdit(widget3);
        totalChannelNumberEdit->setObjectName(QString::fromUtf8("totalChannelNumberEdit"));

        verticalLayout_4->addWidget(totalChannelNumberEdit);

        sampleChannelNumberEdit = new QLineEdit(widget3);
        sampleChannelNumberEdit->setObjectName(QString::fromUtf8("sampleChannelNumberEdit"));

        verticalLayout_4->addWidget(sampleChannelNumberEdit);

        operateChannelIDEdit = new QLineEdit(widget3);
        operateChannelIDEdit->setObjectName(QString::fromUtf8("operateChannelIDEdit"));

        verticalLayout_4->addWidget(operateChannelIDEdit);

        measureMethodEidt = new QLineEdit(widget3);
        measureMethodEidt->setObjectName(QString::fromUtf8("measureMethodEidt"));

        verticalLayout_4->addWidget(measureMethodEidt);

        slaveSampleTypeEdit = new QLineEdit(widget3);
        slaveSampleTypeEdit->setObjectName(QString::fromUtf8("slaveSampleTypeEdit"));

        verticalLayout_4->addWidget(slaveSampleTypeEdit);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_16 = new QLabel(widget3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_5->addWidget(label_16);

        label_17 = new QLabel(widget3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_5->addWidget(label_17);

        label_18 = new QLabel(widget3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_5->addWidget(label_18);

        label_19 = new QLabel(widget3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_5->addWidget(label_19);

        label_20 = new QLabel(widget3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_5->addWidget(label_20);

        label_21 = new QLabel(widget3);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_5->addWidget(label_21);


        gridLayout_2->addLayout(verticalLayout_5, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        commandEdit = new QLineEdit(widget3);
        commandEdit->setObjectName(QString::fromUtf8("commandEdit"));

        verticalLayout_6->addWidget(commandEdit);

        paramByteSizeEdit = new QLineEdit(widget3);
        paramByteSizeEdit->setObjectName(QString::fromUtf8("paramByteSizeEdit"));

        verticalLayout_6->addWidget(paramByteSizeEdit);

        lineEdit_10 = new QLineEdit(widget3);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        verticalLayout_6->addWidget(lineEdit_10);

        lineEdit_11 = new QLineEdit(widget3);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));

        verticalLayout_6->addWidget(lineEdit_11);

        lineEdit_12 = new QLineEdit(widget3);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));

        verticalLayout_6->addWidget(lineEdit_12);

        lineEdit_13 = new QLineEdit(widget3);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        verticalLayout_6->addWidget(lineEdit_13);


        gridLayout_2->addLayout(verticalLayout_6, 0, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1191, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TCP\346\234\215\345\212\241\345\231\250", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257\346\266\210\346\201\257", nullptr));
        textMsgSendButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        textMsgClearButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        clientMsgClearButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\256\242\346\210\267\347\253\257\345\234\260\345\235\200</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257\347\253\257\345\217\243", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\345\210\227\350\241\250", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\256\242\346\210\267\347\253\257", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207\345\220\215\347\247\260", nullptr));
        lineEdit_14->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\346\200\273\351\200\232\351\201\223\346\225\260", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\351\207\207\346\240\267\351\200\232\351\201\223\346\225\260\351\207\217", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\351\200\232\351\201\223\346\223\215\344\275\234ID", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\346\265\213\351\207\217\346\226\271\345\274\217", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\344\273\216\346\234\272\351\207\207\346\240\267\345\236\213\345\217\267", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\345\221\275\344\273\244", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\345\255\227\350\212\202\346\225\260", nullptr));
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
