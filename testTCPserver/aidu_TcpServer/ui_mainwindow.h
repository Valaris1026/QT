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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *connectManageWidget;
    QWidget *server;
    QWidget *widget;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLineEdit *serverPortEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *serverlabel;
    QComboBox *comboBox_2;
    QWidget *device;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_22;
    QLineEdit *lineEdit_14;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_23;
    QLabel *label_24;
    QVBoxLayout *verticalLayout_7;
    QLCDNumber *batteryPercentNum;
    QLCDNumber *wifiStrengthNum;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QLineEdit *ipEdit;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_7;
    QLineEdit *portEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
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
    QWidget *page_2;
    QWidget *widget1;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_4;
    QPushButton *clientMsgClearButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QTextBrowser *textBrowser;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QPushButton *textMsgSendButton;
    QPushButton *textMsgClearButton;
    QTextBrowser *textBrowser_2;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1255, 652);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        connectManageWidget = new QTabWidget(centralwidget);
        connectManageWidget->setObjectName(QString::fromUtf8("connectManageWidget"));
        connectManageWidget->setGeometry(QRect(9, 9, 161, 591));
        server = new QWidget();
        server->setObjectName(QString::fromUtf8("server"));
        widget = new QWidget(server);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 136, 88));
        gridLayout_8 = new QGridLayout(widget);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setPointSize(10);
        label_9->setFont(font);

        verticalLayout_3->addWidget(label_9);

        serverPortEdit = new QLineEdit(widget);
        serverPortEdit->setObjectName(QString::fromUtf8("serverPortEdit"));

        verticalLayout_3->addWidget(serverPortEdit);


        gridLayout_8->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        serverlabel = new QLabel(widget);
        serverlabel->setObjectName(QString::fromUtf8("serverlabel"));
        serverlabel->setFont(font);

        verticalLayout_2->addWidget(serverlabel);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        verticalLayout_2->addWidget(comboBox_2);


        gridLayout_8->addLayout(verticalLayout_2, 0, 0, 1, 1);

        connectManageWidget->addTab(server, QString());
        device = new QWidget();
        device->setObjectName(QString::fromUtf8("device"));
        gridLayout_3 = new QGridLayout(device);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableWidget = new QTableWidget(device);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_3->addWidget(tableWidget, 0, 0, 1, 1);

        connectManageWidget->addTab(device, QString());
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(710, 10, 446, 289));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_7 = new QGridLayout(page);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_22 = new QLabel(page);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_2->addWidget(label_22);

        lineEdit_14 = new QLineEdit(page);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        horizontalLayout_2->addWidget(lineEdit_14);


        gridLayout_7->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_23 = new QLabel(page);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_8->addWidget(label_23);

        label_24 = new QLabel(page);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_8->addWidget(label_24);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        batteryPercentNum = new QLCDNumber(page);
        batteryPercentNum->setObjectName(QString::fromUtf8("batteryPercentNum"));

        verticalLayout_7->addWidget(batteryPercentNum);

        wifiStrengthNum = new QLCDNumber(page);
        wifiStrengthNum->setObjectName(QString::fromUtf8("wifiStrengthNum"));

        verticalLayout_7->addWidget(wifiStrengthNum);


        horizontalLayout_4->addLayout(verticalLayout_7);


        gridLayout_7->addLayout(horizontalLayout_4, 0, 1, 2, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(15);
        label_6->setFont(font1);

        verticalLayout_9->addWidget(label_6);

        ipEdit = new QLineEdit(page);
        ipEdit->setObjectName(QString::fromUtf8("ipEdit"));

        verticalLayout_9->addWidget(ipEdit);


        gridLayout_7->addLayout(verticalLayout_9, 1, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout_10->addWidget(label_7);

        portEdit = new QLineEdit(page);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));

        verticalLayout_10->addWidget(portEdit);


        gridLayout_7->addLayout(verticalLayout_10, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(page);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout_7->addLayout(horizontalLayout, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);

        label_12 = new QLabel(page);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout->addWidget(label_12);

        label_14 = new QLabel(page);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout->addWidget(label_14);

        label_15 = new QLabel(page);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout->addWidget(label_15);

        label_13 = new QLabel(page);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout->addWidget(label_13);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        deviceSerialNumberEdit = new QLineEdit(page);
        deviceSerialNumberEdit->setObjectName(QString::fromUtf8("deviceSerialNumberEdit"));

        verticalLayout_4->addWidget(deviceSerialNumberEdit);

        totalChannelNumberEdit = new QLineEdit(page);
        totalChannelNumberEdit->setObjectName(QString::fromUtf8("totalChannelNumberEdit"));

        verticalLayout_4->addWidget(totalChannelNumberEdit);

        sampleChannelNumberEdit = new QLineEdit(page);
        sampleChannelNumberEdit->setObjectName(QString::fromUtf8("sampleChannelNumberEdit"));

        verticalLayout_4->addWidget(sampleChannelNumberEdit);

        operateChannelIDEdit = new QLineEdit(page);
        operateChannelIDEdit->setObjectName(QString::fromUtf8("operateChannelIDEdit"));

        verticalLayout_4->addWidget(operateChannelIDEdit);

        measureMethodEidt = new QLineEdit(page);
        measureMethodEidt->setObjectName(QString::fromUtf8("measureMethodEidt"));

        verticalLayout_4->addWidget(measureMethodEidt);

        slaveSampleTypeEdit = new QLineEdit(page);
        slaveSampleTypeEdit->setObjectName(QString::fromUtf8("slaveSampleTypeEdit"));

        verticalLayout_4->addWidget(slaveSampleTypeEdit);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_16 = new QLabel(page);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_5->addWidget(label_16);

        label_17 = new QLabel(page);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_5->addWidget(label_17);

        label_18 = new QLabel(page);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_5->addWidget(label_18);

        label_19 = new QLabel(page);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_5->addWidget(label_19);

        label_20 = new QLabel(page);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_5->addWidget(label_20);

        label_21 = new QLabel(page);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_5->addWidget(label_21);


        gridLayout_2->addLayout(verticalLayout_5, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        commandEdit = new QLineEdit(page);
        commandEdit->setObjectName(QString::fromUtf8("commandEdit"));

        verticalLayout_6->addWidget(commandEdit);

        paramByteSizeEdit = new QLineEdit(page);
        paramByteSizeEdit->setObjectName(QString::fromUtf8("paramByteSizeEdit"));

        verticalLayout_6->addWidget(paramByteSizeEdit);

        lineEdit_10 = new QLineEdit(page);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        verticalLayout_6->addWidget(lineEdit_10);

        lineEdit_11 = new QLineEdit(page);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));

        verticalLayout_6->addWidget(lineEdit_11);

        lineEdit_12 = new QLineEdit(page);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));

        verticalLayout_6->addWidget(lineEdit_12);

        lineEdit_13 = new QLineEdit(page);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        verticalLayout_6->addWidget(lineEdit_13);


        gridLayout_2->addLayout(verticalLayout_6, 0, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);


        gridLayout_7->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(182, 9, 521, 591));
        gridLayout_6 = new QGridLayout(widget1);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        clientMsgClearButton = new QPushButton(widget1);
        clientMsgClearButton->setObjectName(QString::fromUtf8("clientMsgClearButton"));

        gridLayout_4->addWidget(clientMsgClearButton, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 1, 1, 1);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(widget1);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_4->addWidget(textBrowser, 1, 0, 1, 3);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        textMsgSendButton = new QPushButton(widget1);
        textMsgSendButton->setObjectName(QString::fromUtf8("textMsgSendButton"));

        gridLayout_5->addWidget(textMsgSendButton, 2, 0, 1, 1);

        textMsgClearButton = new QPushButton(widget1);
        textMsgClearButton->setObjectName(QString::fromUtf8("textMsgClearButton"));

        gridLayout_5->addWidget(textMsgClearButton, 2, 2, 1, 1);

        textBrowser_2 = new QTextBrowser(widget1);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        gridLayout_5->addWidget(textBrowser_2, 1, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 2, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1255, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        label_9->setBuddy(serverPortEdit);
        label_22->setBuddy(lineEdit_14);
        label_6->setBuddy(ipEdit);
        label_7->setBuddy(portEdit);
        label_2->setBuddy(deviceSerialNumberEdit);
        label_11->setBuddy(totalChannelNumberEdit);
        label_12->setBuddy(sampleChannelNumberEdit);
        label_14->setBuddy(operateChannelIDEdit);
        label_15->setBuddy(measureMethodEidt);
        label_13->setBuddy(slaveSampleTypeEdit);
        label_16->setBuddy(commandEdit);
        label_17->setBuddy(paramByteSizeEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        connectManageWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243", nullptr));
        serverlabel->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        connectManageWidget->setTabText(connectManageWidget->indexOf(server), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        connectManageWidget->setTabText(connectManageWidget->indexOf(device), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207\345\220\215\347\247\260", nullptr));
        lineEdit_14->setText(QString());
        label_23->setText(QCoreApplication::translate("MainWindow", "\347\224\265\351\207\217", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\345\274\272\345\272\246", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\256\242\346\210\267\347\253\257\345\234\260\345\235\200</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257\347\253\257\345\217\243", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\256\242\346\210\267\347\253\257", nullptr));
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
        clientMsgClearButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257\346\266\210\346\201\257", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        textMsgSendButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        textMsgClearButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
