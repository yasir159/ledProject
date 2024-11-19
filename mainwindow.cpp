#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Setup qserialport
    esp32 = new QSerialPort;
    esp32_is_available = false;
    esp32_port_name = "";

    // //view ports on your system (done, don't need anymore)
    // qDebug() << "Number of Ports: " << QSerialPortInfo::availablePorts().length();
    // foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
    //     qDebug() << "Has vendor ID: " << serialPortInfo.hasVendorIdentifier();
    //     if (serialPortInfo.hasVendorIdentifier()) {
    //         qDebug() << "Vendor ID: " << serialPortInfo.vendorIdentifier();
    //     }
    //     qDebug() << "Has product ID: " << serialPortInfo.hasProductIdentifier();
    //     if (serialPortInfo.hasProductIdentifier()) {
    //         qDebug() << "Product ID: " << serialPortInfo.productIdentifier();
    //     }
    // }

    //check which port esp32 is on
    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        if(serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()) {
            if(serialPortInfo.vendorIdentifier() == esp32_vendorID) {
                if(serialPortInfo.productIdentifier() == esp32_productID) {
                    esp32_port_name = serialPortInfo.portName();
                    esp32_is_available = true;
                    qDebug() << "Port Available!";
                }
            }
        }
    }

    //setup port if availaible
    if(esp32_is_available) {
        esp32 -> setPortName(esp32_port_name);
        esp32 -> open(QSerialPort::WriteOnly);
        esp32 -> setBaudRate(QSerialPort::Baud115200);
        esp32 -> setDataBits(QSerialPort::Data8);
        esp32 -> setParity(QSerialPort::NoParity);
        esp32 -> setStopBits(QSerialPort::OneStop);
        esp32 -> setFlowControl(QSerialPort::NoFlowControl);
    }
    else {
        QMessageBox::warning(this, "Port error!", "Couldn't find esp32");
    }
}

//destructor
MainWindow::~MainWindow()
{
    if(esp32 -> isOpen()) {
        qDebug() << "Closing port";
        esp32 -> close();
    }
    delete ui;
}

void MainWindow::updateServo(QString command) {
    if(esp32 -> isWritable()) {
        qDebug() << command.toStdString().c_str();
        esp32 -> write(command.toStdString().c_str());
    }
    else {
        qDebug() << "Could not write to serial";
    }
}

void MainWindow::on_red_slider_valueChanged(int value)
{
    ui -> red_value_label->setText(QString("%1").arg(value));

    MainWindow::updateRGB(QString("r%1").arg(value));
    qDebug() << value;
}

void MainWindow::on_green_slider_valueChanged(int value)
{
    ui -> green_value_label->setText(QString("%1").arg(value));

    MainWindow::updateRGB(QString("g%1").arg(value));
    qDebug() << value;
}

void MainWindow::on_blue_slider_valueChanged(int value)
{
    ui -> blue_value_label->setText(QString("%1").arg(value));

    MainWindow::updateRGB(QString("b%1").arg(value));
    qDebug() << value;
}

void MainWindow::updateRGB(QString command) {
    if(esp32 -> isWritable()) {
        esp32 -> write(command.toStdString().c_str());
    }
    else {
        qDebug() <<"Couldnt write to serial!";
    }
}

