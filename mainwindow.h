#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QtWidgets>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui {class MainWindow;}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void sendCommand(const QString &command);

private slots:
    void updateServo(QString command);

    void updateRGB(QString);

    void on_set_gradient_button_clicked();

    void on_red_value_input_label_textChanged(const QString &arg1);
    void on_green_value_input_label_textChanged(const QString &arg1);
    void on_blue_value_input_label_textChanged(const QString &arg1);

    void on_red_value_input_label_2_textChanged(const QString &arg1);
    void on_green_value_input_label_2_textChanged(const QString &arg1);
    void on_blue_value_input_label_2_textChanged(const QString &arg1);

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
