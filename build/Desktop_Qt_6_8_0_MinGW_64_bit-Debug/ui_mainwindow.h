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
#include <QtWidgets/QTextEdit>
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
    QTextEdit *red_value_input_label;
    QTextEdit *green_value_input_label;
    QTextEdit *blue_value_input_label;
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
        red_slider->setGeometry(QRect(90, 140, 160, 16));
        red_slider->setMaximum(255);
        red_slider->setOrientation(Qt::Orientation::Horizontal);
        green_slider = new QSlider(centralwidget);
        green_slider->setObjectName("green_slider");
        green_slider->setGeometry(QRect(90, 150, 160, 16));
        green_slider->setMaximum(255);
        green_slider->setOrientation(Qt::Orientation::Horizontal);
        blue_slider = new QSlider(centralwidget);
        blue_slider->setObjectName("blue_slider");
        blue_slider->setGeometry(QRect(90, 160, 160, 16));
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
        red_value_input_label = new QTextEdit(centralwidget);
        red_value_input_label->setObjectName("red_value_input_label");
        red_value_input_label->setGeometry(QRect(90, 30, 51, 21));
        green_value_input_label = new QTextEdit(centralwidget);
        green_value_input_label->setObjectName("green_value_input_label");
        green_value_input_label->setGeometry(QRect(90, 70, 51, 21));
        blue_value_input_label = new QTextEdit(centralwidget);
        blue_value_input_label->setObjectName("blue_value_input_label");
        blue_value_input_label->setGeometry(QRect(90, 110, 51, 21));
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
        red_value_input_label->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        green_value_input_label->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        blue_value_input_label->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        menuLED_Strip_Controller->setTitle(QCoreApplication::translate("MainWindow", "LED Strip Controller", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
