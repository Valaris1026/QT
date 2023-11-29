/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbxName;
    QComboBox *cbxBrate;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QCustomPlot *customPlot;
    QScrollBar *verticalScrollBar;
    QScrollBar *horizontalScrollBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(650, 450);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setIconSize(QSize(32, 32));
        MainWindow->setTabShape(QTabWidget::Triangular);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cbxName = new QComboBox(centralWidget);
        cbxName->addItem(QString());
        cbxName->addItem(QString());
        cbxName->addItem(QString());
        cbxName->addItem(QString());
        cbxName->addItem(QString());
        cbxName->addItem(QString());
        cbxName->addItem(QString());
        cbxName->addItem(QString());
        cbxName->addItem(QString());
        cbxName->addItem(QString());
        cbxName->setObjectName(QString::fromUtf8("cbxName"));

        horizontalLayout->addWidget(cbxName);

        cbxBrate = new QComboBox(centralWidget);
        cbxBrate->addItem(QString());
        cbxBrate->addItem(QString());
        cbxBrate->addItem(QString());
        cbxBrate->addItem(QString());
        cbxBrate->setObjectName(QString::fromUtf8("cbxBrate"));

        horizontalLayout->addWidget(cbxBrate);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy);

        gridLayout->addWidget(customPlot, 0, 0, 1, 1);

        verticalScrollBar = new QScrollBar(centralWidget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalScrollBar->sizePolicy().hasHeightForWidth());
        verticalScrollBar->setSizePolicy(sizePolicy1);
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalScrollBar, 0, 1, 1, 1);

        horizontalScrollBar = new QScrollBar(centralWidget);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalScrollBar->sizePolicy().hasHeightForWidth());
        horizontalScrollBar->setSizePolicy(sizePolicy2);
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SerialPort Data View", nullptr));
        cbxName->setItemText(0, QApplication::translate("MainWindow", "COM1", nullptr));
        cbxName->setItemText(1, QApplication::translate("MainWindow", "COM2", nullptr));
        cbxName->setItemText(2, QApplication::translate("MainWindow", "COM3", nullptr));
        cbxName->setItemText(3, QApplication::translate("MainWindow", "COM4", nullptr));
        cbxName->setItemText(4, QApplication::translate("MainWindow", "COM5", nullptr));
        cbxName->setItemText(5, QApplication::translate("MainWindow", "COM6", nullptr));
        cbxName->setItemText(6, QApplication::translate("MainWindow", "COM7", nullptr));
        cbxName->setItemText(7, QApplication::translate("MainWindow", "COM8", nullptr));
        cbxName->setItemText(8, QApplication::translate("MainWindow", "COM9", nullptr));
        cbxName->setItemText(9, QApplication::translate("MainWindow", "COM10", nullptr));

        cbxBrate->setItemText(0, QApplication::translate("MainWindow", "9600", nullptr));
        cbxBrate->setItemText(1, QApplication::translate("MainWindow", "19200", nullptr));
        cbxBrate->setItemText(2, QApplication::translate("MainWindow", "38400", nullptr));
        cbxBrate->setItemText(3, QApplication::translate("MainWindow", "115200", nullptr));

        pushButton->setText(QApplication::translate("MainWindow", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
