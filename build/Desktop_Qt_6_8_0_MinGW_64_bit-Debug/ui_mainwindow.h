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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
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
    QSlider *red_slider;
    QSlider *green_slider;
    QSlider *blue_slider;
    QLabel *red_value_label;
    QLabel *green_value_label;
    QLabel *blue_value_label;
    QMenuBar *menubar;
    QMenu *menuLED_Strip_Controller;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        red_label = new QLabel(centralwidget);
        red_label->setObjectName("red_label");
        red_label->setGeometry(QRect(50, 30, 37, 12));
        green_label = new QLabel(centralwidget);
        green_label->setObjectName("green_label");
        green_label->setGeometry(QRect(50, 70, 37, 12));
        blue_label = new QLabel(centralwidget);
        blue_label->setObjectName("blue_label");
        blue_label->setGeometry(QRect(50, 110, 37, 12));
        red_slider = new QSlider(centralwidget);
        red_slider->setObjectName("red_slider");
        red_slider->setGeometry(QRect(100, 30, 160, 16));
        red_slider->setMaximum(255);
        red_slider->setOrientation(Qt::Orientation::Horizontal);
        green_slider = new QSlider(centralwidget);
        green_slider->setObjectName("green_slider");
        green_slider->setGeometry(QRect(100, 70, 160, 16));
        green_slider->setMaximum(255);
        green_slider->setOrientation(Qt::Orientation::Horizontal);
        blue_slider = new QSlider(centralwidget);
        blue_slider->setObjectName("blue_slider");
        blue_slider->setGeometry(QRect(100, 110, 160, 16));
        blue_slider->setMaximum(255);
        blue_slider->setOrientation(Qt::Orientation::Horizontal);
        red_value_label = new QLabel(centralwidget);
        red_value_label->setObjectName("red_value_label");
        red_value_label->setGeometry(QRect(270, 30, 37, 12));
        green_value_label = new QLabel(centralwidget);
        green_value_label->setObjectName("green_value_label");
        green_value_label->setGeometry(QRect(270, 70, 37, 12));
        blue_value_label = new QLabel(centralwidget);
        blue_value_label->setObjectName("blue_value_label");
        blue_value_label->setGeometry(QRect(270, 110, 37, 12));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
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
        menuLED_Strip_Controller->setTitle(QCoreApplication::translate("MainWindow", "LED Strip Controller", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
