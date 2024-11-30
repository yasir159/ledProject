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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *red_label;
    QLabel *green_label;
    QLabel *blue_label;
    QLabel *red_value_label;
    QLabel *green_value_label;
    QLabel *blue_value_label;
    QLineEdit *red_value_input_label;
    QLineEdit *green_value_input_label;
    QLineEdit *blue_value_input_label;
    QLabel *green_value_label_2;
    QLabel *blue_label_2;
    QLineEdit *red_value_input_label_2;
    QLabel *blue_value_label_2;
    QLabel *red_label_2;
    QLabel *red_value_label_2;
    QLineEdit *blue_value_input_label_2;
    QLineEdit *green_value_input_label_2;
    QLabel *green_label_2;
    QPushButton *set_gradient_button;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menuLED_Strip_Controller;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setMinimumSize(QSize(390, 230));
        MainWindow->setSizeIncrement(QSize(100, 100));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        red_label = new QLabel(centralwidget);
        red_label->setObjectName("red_label");
        red_label->setGeometry(QRect(20, 40, 37, 12));
        green_label = new QLabel(centralwidget);
        green_label->setObjectName("green_label");
        green_label->setGeometry(QRect(20, 80, 37, 12));
        blue_label = new QLabel(centralwidget);
        blue_label->setObjectName("blue_label");
        blue_label->setGeometry(QRect(20, 120, 37, 12));
        red_value_label = new QLabel(centralwidget);
        red_value_label->setObjectName("red_value_label");
        red_value_label->setGeometry(QRect(140, 40, 31, 16));
        green_value_label = new QLabel(centralwidget);
        green_value_label->setObjectName("green_value_label");
        green_value_label->setGeometry(QRect(140, 80, 31, 16));
        blue_value_label = new QLabel(centralwidget);
        blue_value_label->setObjectName("blue_value_label");
        blue_value_label->setGeometry(QRect(140, 120, 31, 16));
        red_value_input_label = new QLineEdit(centralwidget);
        red_value_input_label->setObjectName("red_value_input_label");
        red_value_input_label->setGeometry(QRect(50, 40, 71, 20));
        green_value_input_label = new QLineEdit(centralwidget);
        green_value_input_label->setObjectName("green_value_input_label");
        green_value_input_label->setGeometry(QRect(50, 80, 71, 20));
        blue_value_input_label = new QLineEdit(centralwidget);
        blue_value_input_label->setObjectName("blue_value_input_label");
        blue_value_input_label->setGeometry(QRect(50, 120, 71, 20));
        green_value_label_2 = new QLabel(centralwidget);
        green_value_label_2->setObjectName("green_value_label_2");
        green_value_label_2->setGeometry(QRect(360, 80, 31, 16));
        blue_label_2 = new QLabel(centralwidget);
        blue_label_2->setObjectName("blue_label_2");
        blue_label_2->setGeometry(QRect(240, 120, 37, 12));
        red_value_input_label_2 = new QLineEdit(centralwidget);
        red_value_input_label_2->setObjectName("red_value_input_label_2");
        red_value_input_label_2->setGeometry(QRect(270, 40, 71, 20));
        blue_value_label_2 = new QLabel(centralwidget);
        blue_value_label_2->setObjectName("blue_value_label_2");
        blue_value_label_2->setGeometry(QRect(360, 120, 31, 16));
        red_label_2 = new QLabel(centralwidget);
        red_label_2->setObjectName("red_label_2");
        red_label_2->setGeometry(QRect(240, 40, 37, 12));
        red_value_label_2 = new QLabel(centralwidget);
        red_value_label_2->setObjectName("red_value_label_2");
        red_value_label_2->setGeometry(QRect(360, 40, 31, 16));
        blue_value_input_label_2 = new QLineEdit(centralwidget);
        blue_value_input_label_2->setObjectName("blue_value_input_label_2");
        blue_value_input_label_2->setGeometry(QRect(270, 120, 71, 20));
        green_value_input_label_2 = new QLineEdit(centralwidget);
        green_value_input_label_2->setObjectName("green_value_input_label_2");
        green_value_input_label_2->setGeometry(QRect(270, 80, 71, 20));
        green_label_2 = new QLabel(centralwidget);
        green_label_2->setObjectName("green_label_2");
        green_label_2->setGeometry(QRect(240, 80, 37, 12));
        set_gradient_button = new QPushButton(centralwidget);
        set_gradient_button->setObjectName("set_gradient_button");
        set_gradient_button->setGeometry(QRect(150, 160, 80, 18));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 10, 51, 16));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 10, 51, 16));
        label_2->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 390, 17));
        menuLED_Strip_Controller = new QMenu(menubar);
        menuLED_Strip_Controller->setObjectName("menuLED_Strip_Controller");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLED_Strip_Controller->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        red_label->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        green_label->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        blue_label->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        red_value_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        green_value_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        blue_value_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        green_value_label_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        blue_label_2->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        blue_value_label_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        red_label_2->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        red_value_label_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        green_label_2->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        set_gradient_button->setText(QCoreApplication::translate("MainWindow", "Set Gradient", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Colour 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Colour 2", nullptr));
        menuLED_Strip_Controller->setTitle(QCoreApplication::translate("MainWindow", "LED Strip Controller", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
