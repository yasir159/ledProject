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

void MainWindow::updateRGB(QString command) {
    if(esp32 -> isWritable()) {
        QString formattedCommand = command + "\n";
        esp32 -> write(command.toStdString().c_str());
    }
    else {
        qDebug() <<"Couldnt write to serial!";
    }
}

void MainWindow::sendCommand(const QString &command)
{
    if (esp32 && esp32->isOpen() && esp32->isWritable()) {
        QString formattedCommand = command; // E nsure the command ends with a newline
        esp32->write(formattedCommand.toUtf8());   // Send the command as UTF-8 encoded data
        qDebug() << formattedCommand;
    } else {
        qDebug() << "Failed to send command: Serial port not writable.";
        QMessageBox::warning(this, "Serial Port Error", "Failed to send command: Serial port is not writable.");
    }
}

void MainWindow::on_red_value_input_label_textChanged(const QString &arg1)
{
    ui -> red_value_label->setText(QString("%1").arg(arg1));

    QString text = ui->red_value_input_label->text();

    if(text == "") {
        ui -> red_value_label -> setText("0");
    }
}

void MainWindow::on_green_value_input_label_textChanged(const QString &arg1)
{
    ui -> green_value_label->setText(QString("%1").arg(arg1));

    QString text = ui->green_value_input_label->text();

    if(text == "") {
        ui -> green_value_label -> setText("0");
    }
}

void MainWindow::on_blue_value_input_label_textChanged(const QString &arg1)
{
    ui -> blue_value_label->setText(QString("%1").arg(arg1));

    QString text = ui->blue_value_input_label->text();

    if(text == "") {
        ui -> blue_value_label -> setText("0");
    }
}

void MainWindow::on_red_value_input_label_2_textChanged(const QString &arg1)
{
    ui -> red_value_label_2->setText(QString("%1").arg(arg1));

    QString text = ui->red_value_input_label_2->text();

    if(text == "") {
        ui -> red_value_label_2 -> setText("0");
    }
}

void MainWindow::on_green_value_input_label_2_textChanged(const QString &arg1)
{
    ui -> green_value_label_2->setText(QString("%1").arg(arg1));

    QString text = ui->green_value_input_label_2->text();

    if(text == "") {
        ui -> green_value_label_2 -> setText("0");
    }
}

void MainWindow::on_blue_value_input_label_2_textChanged(const QString &arg1)
{
    ui -> blue_value_label_2->setText(QString("%1").arg(arg1));

    QString text = ui->blue_value_input_label_2->text();

    if(text == "") {
        ui -> blue_value_label_2 -> setText("0");
    }
}

void MainWindow::on_set_gradient_button_clicked() {
    // Collect input values for the first color
    int r1 = ui->red_value_label->text().toInt();
    int g1 = ui->green_value_label->text().toInt();
    int b1 = ui->blue_value_label->text().toInt();

    // Collect input values for the second color
    int r2 = ui->red_value_label_2->text().toInt();
    int g2 = ui->green_value_label_2->text().toInt();
    int b2 = ui->blue_value_label_2->text().toInt();

    // Validate the input values (0-255 range)
    if ((r1 < 0 || r1 > 255) || (g1 < 0 || g1 > 255) || (b1 < 0 || b1 > 255) ||
        (r2 < 0 || r2 > 255) || (g2 < 0 || g2 > 255) || (b2 < 0 || b2 > 255)) {
        QMessageBox::warning(this, "Invalid Input", "RGB values must be between 0 and 255.");
        return;
    }
        \
        // Send all values in one line
        QString command = QString("%1 %2 %3 %4 %5 %6")
              .arg(r1)
              .arg(g1)
              .arg(b1)
              .arg(r2)
              .arg(g2)
              .arg(b2);
        sendCommand(command);
}
