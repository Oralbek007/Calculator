/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *delete_2;
    QPushButton *pm;
    QPushButton *persent;
    QPushButton *over;
    QPushButton *mult;
    QPushButton *eight;
    QPushButton *seven;
    QPushButton *nine;
    QPushButton *six;
    QPushButton *four;
    QPushButton *five;
    QPushButton *minus;
    QPushButton *one;
    QPushButton *three;
    QPushButton *plus;
    QPushButton *two;
    QPushButton *equal;
    QPushButton *point;
    QPushButton *zero;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(248, 385);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 20, 241, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"border: 1px solid gray;\n"
"background-color: white;\n"
"}\n"
""));
        delete_2 = new QPushButton(centralwidget);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(0, 80, 61, 61));
        delete_2->setMaximumSize(QSize(61, 61));
        delete_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(215, 215, 215);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"background-color:qlineargradient:(x1: 0, y1, 0, x2: 0, y2: 1,\n"
"   									stop: 0  #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pm = new QPushButton(centralwidget);
        pm->setObjectName("pm");
        pm->setGeometry(QRect(60, 80, 61, 61));
        pm->setMaximumSize(QSize(61, 61));
        pm->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(215, 215, 215);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"background-color:qlineargradient:(x1: 0, y1, 0, x2: 0, y2: 1,\n"
"   									stop: 0  #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        persent = new QPushButton(centralwidget);
        persent->setObjectName("persent");
        persent->setGeometry(QRect(120, 80, 61, 61));
        persent->setMaximumSize(QSize(61, 61));
        persent->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(215, 215, 215);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"background-color:qlineargradient:(x1: 0, y1, 0, x2: 0, y2: 1,\n"
"   									stop: 0  #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        over = new QPushButton(centralwidget);
        over->setObjectName("over");
        over->setGeometry(QRect(180, 80, 61, 61));
        over->setMaximumSize(QSize(61, 61));
        over->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"background-color:qlineargradient:(x1: 0, y1, 0, x2: 0, y2: 1,\n"
"   									stop: 0  #FF7832, stop: 1 #FF9739);\n"
"}"));
        mult = new QPushButton(centralwidget);
        mult->setObjectName("mult");
        mult->setGeometry(QRect(180, 140, 61, 61));
        mult->setMaximumSize(QSize(61, 61));
        mult->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"background-color:qlineargradient:(x1: 0, y1, 0, x2: 0, y2: 1,\n"
"   									stop: 0  #FF7832, stop: 1 #FF9739);\n"
"}"));
        eight = new QPushButton(centralwidget);
        eight->setObjectName("eight");
        eight->setGeometry(QRect(60, 140, 61, 61));
        eight->setMaximumSize(QSize(61, 61));
        eight->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								  stop: 0  #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        seven = new QPushButton(centralwidget);
        seven->setObjectName("seven");
        seven->setGeometry(QRect(0, 140, 61, 61));
        seven->setMaximumSize(QSize(61, 61));
        seven->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:pressed{\n"
"font-size: 15px;\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								  stop: 0  #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        nine = new QPushButton(centralwidget);
        nine->setObjectName("nine");
        nine->setGeometry(QRect(120, 140, 61, 61));
        nine->setMaximumSize(QSize(61, 61));
        nine->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								  stop: 0  #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        six = new QPushButton(centralwidget);
        six->setObjectName("six");
        six->setGeometry(QRect(120, 200, 61, 61));
        six->setMaximumSize(QSize(61, 61));
        six->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								  stop: 0  #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        four = new QPushButton(centralwidget);
        four->setObjectName("four");
        four->setGeometry(QRect(0, 200, 61, 61));
        four->setMaximumSize(QSize(61, 61));
        four->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								  stop: 0  #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        five = new QPushButton(centralwidget);
        five->setObjectName("five");
        five->setGeometry(QRect(60, 200, 61, 61));
        five->setMaximumSize(QSize(61, 61));
        five->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								  stop: 0  #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        minus = new QPushButton(centralwidget);
        minus->setObjectName("minus");
        minus->setGeometry(QRect(180, 200, 61, 61));
        minus->setMaximumSize(QSize(61, 61));
        minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"background-color:qlineargradient:(x1: 0, y1, 0, x2: 0, y2: 1,\n"
"   									stop: 0  #FF7832, stop: 1 #FF9739);\n"
"}"));
        one = new QPushButton(centralwidget);
        one->setObjectName("one");
        one->setGeometry(QRect(0, 260, 61, 61));
        one->setMaximumSize(QSize(61, 61));
        one->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								  stop: 0  #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        three = new QPushButton(centralwidget);
        three->setObjectName("three");
        three->setGeometry(QRect(120, 260, 61, 61));
        three->setMaximumSize(QSize(61, 61));
        three->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								  stop: 0  #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");
        plus->setGeometry(QRect(180, 260, 61, 61));
        plus->setMaximumSize(QSize(61, 61));
        plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"background-color:qlineargradient:(x1: 0, y1, 0, x2: 0, y2: 1,\n"
"   									stop: 0  #FF7832, stop: 1 #FF9739);\n"
"}"));
        two = new QPushButton(centralwidget);
        two->setObjectName("two");
        two->setGeometry(QRect(60, 260, 61, 61));
        two->setMaximumSize(QSize(61, 61));
        two->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								  stop: 0  #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        equal = new QPushButton(centralwidget);
        equal->setObjectName("equal");
        equal->setGeometry(QRect(180, 320, 61, 61));
        equal->setMaximumSize(QSize(61, 61));
        equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"background-color:qlineargradient:(x1: 0, y1, 0, x2: 0, y2: 1,\n"
"   									stop: 0  #FF7832, stop: 1 #FF9739);\n"
"}"));
        point = new QPushButton(centralwidget);
        point->setObjectName("point");
        point->setGeometry(QRect(120, 320, 61, 61));
        point->setMaximumSize(QSize(61, 61));
        point->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(215, 215, 215);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"background-color:qlineargradient:(x1: 0, y1, 0, x2: 0, y2: 1,\n"
"   									stop: 0  #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        zero = new QPushButton(centralwidget);
        zero->setObjectName("zero");
        zero->setGeometry(QRect(0, 320, 121, 61));
        zero->setMaximumSize(QSize(655, 61));
        zero->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								  stop: 0  #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        delete_2->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pm->setText(QCoreApplication::translate("MainWindow", "inverse", nullptr));
        persent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        over->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
