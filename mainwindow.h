#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui {class MainWindow;}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateServo(QString command);

    void on_red_slider_valueChanged(int value);
    void on_green_slider_valueChanged(int value);
    void on_blue_slider_valueChanged(int value);

    void updateRGB(QString);

private:
    Ui::MainWindow *ui;
    QString servoSetting;
    QSerialPort *esp32;
    static const quint16 esp32_vendorID = 4292;
    static const quint16 esp32_productID = 60000;
    QString esp32_port_name;
    bool esp32_is_available;

};
#endif // MAINWINDOW_H
