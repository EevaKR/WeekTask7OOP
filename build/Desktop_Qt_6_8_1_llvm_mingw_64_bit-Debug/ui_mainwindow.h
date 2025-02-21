/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QLabel *TextLabel;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *N1;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *add;
    QPushButton *N4;
    QPushButton *N7;
    QPushButton *N0;
    QPushButton *N5;
    QPushButton *N8;
    QPushButton *clear;
    QPushButton *N6;
    QPushButton *N9;
    QPushButton *enter;
    QPushButton *sub;
    QPushButton *mul;
    QPushButton *div;
    QPushButton *enter_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(60, 90, 113, 26));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(240, 90, 113, 26));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(440, 90, 113, 26));
        TextLabel = new QLabel(centralwidget);
        TextLabel->setObjectName("TextLabel");
        TextLabel->setGeometry(QRect(70, 50, 63, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 60, 63, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 50, 63, 20));
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(60, 180, 93, 29));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(220, 180, 93, 29));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(380, 180, 93, 29));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(530, 180, 93, 29));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(50, 240, 93, 29));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(60, 310, 93, 29));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(60, 380, 93, 29));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(210, 240, 93, 29));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(210, 310, 93, 29));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(210, 380, 93, 29));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(380, 230, 93, 29));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(380, 310, 93, 29));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(380, 380, 93, 29));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(520, 230, 93, 29));
        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setGeometry(QRect(520, 310, 93, 29));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(520, 380, 93, 29));
        enter_2 = new QPushButton(centralwidget);
        enter_2->setObjectName("enter_2");
        enter_2->setGeometry(QRect(60, 460, 93, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        TextLabel->setText(QCoreApplication::translate("MainWindow", "Number1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        enter_2->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
