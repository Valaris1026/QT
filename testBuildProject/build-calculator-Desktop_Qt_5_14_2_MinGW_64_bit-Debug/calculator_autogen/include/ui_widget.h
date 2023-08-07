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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *leftBrackets;
    QPushButton *rightBrackets;
    QPushButton *backButton;
    QPushButton *clearButton;
    QPushButton *posiNegeButton;
    QPushButton *percentageButton;
    QPushButton *divideButton;
    QPushButton *sevenButton;
    QPushButton *eightButton;
    QPushButton *nineButton;
    QPushButton *multiplyButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *subtractButton;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *plusButton;
    QPushButton *zeroButton;
    QPushButton *pointButton;
    QPushButton *equalButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(200, 350);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(11, 12, 181, 51));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 70, 180, 272));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        leftBrackets = new QPushButton(widget);
        leftBrackets->setObjectName(QString::fromUtf8("leftBrackets"));
        leftBrackets->setMinimumSize(QSize(40, 40));
        leftBrackets->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(leftBrackets, 0, 1, 1, 1);

        rightBrackets = new QPushButton(widget);
        rightBrackets->setObjectName(QString::fromUtf8("rightBrackets"));
        rightBrackets->setMinimumSize(QSize(40, 40));
        rightBrackets->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(rightBrackets, 0, 2, 1, 1);

        backButton = new QPushButton(widget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setMinimumSize(QSize(40, 40));
        backButton->setMaximumSize(QSize(40, 40));
        backButton->setIconSize(QSize(50, 50));

        gridLayout->addWidget(backButton, 0, 3, 1, 1);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setMinimumSize(QSize(40, 40));
        clearButton->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        clearButton->setFont(font);

        gridLayout->addWidget(clearButton, 1, 0, 1, 1);

        posiNegeButton = new QPushButton(widget);
        posiNegeButton->setObjectName(QString::fromUtf8("posiNegeButton"));
        posiNegeButton->setMinimumSize(QSize(40, 40));
        posiNegeButton->setMaximumSize(QSize(40, 40));
        posiNegeButton->setFont(font);

        gridLayout->addWidget(posiNegeButton, 1, 1, 1, 1);

        percentageButton = new QPushButton(widget);
        percentageButton->setObjectName(QString::fromUtf8("percentageButton"));
        percentageButton->setMinimumSize(QSize(40, 40));
        percentageButton->setMaximumSize(QSize(40, 40));
        percentageButton->setFont(font);

        gridLayout->addWidget(percentageButton, 1, 2, 1, 1);

        divideButton = new QPushButton(widget);
        divideButton->setObjectName(QString::fromUtf8("divideButton"));
        divideButton->setMinimumSize(QSize(40, 40));
        divideButton->setMaximumSize(QSize(40, 40));
        divideButton->setFont(font);

        gridLayout->addWidget(divideButton, 1, 3, 1, 1);

        sevenButton = new QPushButton(widget);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sevenButton->setMinimumSize(QSize(40, 40));
        sevenButton->setMaximumSize(QSize(40, 40));
        sevenButton->setFont(font);

        gridLayout->addWidget(sevenButton, 2, 0, 1, 1);

        eightButton = new QPushButton(widget);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setMinimumSize(QSize(40, 40));
        eightButton->setMaximumSize(QSize(40, 40));
        eightButton->setFont(font);

        gridLayout->addWidget(eightButton, 2, 1, 1, 1);

        nineButton = new QPushButton(widget);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setMinimumSize(QSize(40, 40));
        nineButton->setMaximumSize(QSize(40, 40));
        nineButton->setFont(font);

        gridLayout->addWidget(nineButton, 2, 2, 1, 1);

        multiplyButton = new QPushButton(widget);
        multiplyButton->setObjectName(QString::fromUtf8("multiplyButton"));
        multiplyButton->setMinimumSize(QSize(40, 40));
        multiplyButton->setMaximumSize(QSize(40, 40));
        multiplyButton->setFont(font);

        gridLayout->addWidget(multiplyButton, 2, 3, 1, 1);

        fourButton = new QPushButton(widget);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setMinimumSize(QSize(40, 40));
        fourButton->setMaximumSize(QSize(40, 40));
        fourButton->setFont(font);

        gridLayout->addWidget(fourButton, 3, 0, 1, 1);

        fiveButton = new QPushButton(widget);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        fiveButton->setMinimumSize(QSize(40, 40));
        fiveButton->setMaximumSize(QSize(40, 40));
        fiveButton->setFont(font);

        gridLayout->addWidget(fiveButton, 3, 1, 1, 1);

        sixButton = new QPushButton(widget);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setMinimumSize(QSize(40, 40));
        sixButton->setMaximumSize(QSize(40, 40));
        sixButton->setFont(font);

        gridLayout->addWidget(sixButton, 3, 2, 1, 1);

        subtractButton = new QPushButton(widget);
        subtractButton->setObjectName(QString::fromUtf8("subtractButton"));
        subtractButton->setMinimumSize(QSize(40, 40));
        subtractButton->setMaximumSize(QSize(40, 40));
        subtractButton->setFont(font);

        gridLayout->addWidget(subtractButton, 3, 3, 1, 1);

        oneButton = new QPushButton(widget);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setMinimumSize(QSize(40, 40));
        oneButton->setMaximumSize(QSize(40, 40));
        oneButton->setFont(font);

        gridLayout->addWidget(oneButton, 4, 0, 1, 1);

        twoButton = new QPushButton(widget);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setMinimumSize(QSize(40, 40));
        twoButton->setMaximumSize(QSize(40, 40));
        twoButton->setFont(font);

        gridLayout->addWidget(twoButton, 4, 1, 1, 1);

        threeButton = new QPushButton(widget);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setMinimumSize(QSize(40, 40));
        threeButton->setMaximumSize(QSize(40, 40));
        threeButton->setFont(font);

        gridLayout->addWidget(threeButton, 4, 2, 1, 1);

        plusButton = new QPushButton(widget);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        plusButton->setMinimumSize(QSize(40, 40));
        plusButton->setMaximumSize(QSize(40, 40));
        plusButton->setFont(font);

        gridLayout->addWidget(plusButton, 4, 3, 1, 1);

        zeroButton = new QPushButton(widget);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setMinimumSize(QSize(80, 40));
        zeroButton->setMaximumSize(QSize(40, 40));
        zeroButton->setFont(font);

        gridLayout->addWidget(zeroButton, 5, 0, 1, 2);

        pointButton = new QPushButton(widget);
        pointButton->setObjectName(QString::fromUtf8("pointButton"));
        pointButton->setMinimumSize(QSize(40, 40));
        pointButton->setMaximumSize(QSize(40, 40));
        pointButton->setFont(font);

        gridLayout->addWidget(pointButton, 5, 2, 1, 1);

        equalButton = new QPushButton(widget);
        equalButton->setObjectName(QString::fromUtf8("equalButton"));
        equalButton->setMinimumSize(QSize(40, 40));
        equalButton->setMaximumSize(QSize(40, 40));
        equalButton->setFont(font);

        gridLayout->addWidget(equalButton, 5, 3, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QString());
        leftBrackets->setText(QCoreApplication::translate("Widget", "(", nullptr));
        rightBrackets->setText(QCoreApplication::translate("Widget", ")", nullptr));
        backButton->setText(QString());
        clearButton->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        posiNegeButton->setText(QCoreApplication::translate("Widget", "\302\261", nullptr));
        percentageButton->setText(QCoreApplication::translate("Widget", "%", nullptr));
        divideButton->setText(QCoreApplication::translate("Widget", "\303\267", nullptr));
        sevenButton->setText(QCoreApplication::translate("Widget", "7", nullptr));
        eightButton->setText(QCoreApplication::translate("Widget", "8", nullptr));
        nineButton->setText(QCoreApplication::translate("Widget", "9", nullptr));
        multiplyButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "4", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        sixButton->setText(QCoreApplication::translate("Widget", "6", nullptr));
        subtractButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        twoButton->setText(QCoreApplication::translate("Widget", "2", nullptr));
        threeButton->setText(QCoreApplication::translate("Widget", "3", nullptr));
        plusButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        zeroButton->setText(QCoreApplication::translate("Widget", "0", nullptr));
        pointButton->setText(QCoreApplication::translate("Widget", ".", nullptr));
        equalButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
