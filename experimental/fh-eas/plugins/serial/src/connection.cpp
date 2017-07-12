#include "connection.h"

#include <QSerialPort>
#include <QSerialPortInfo>

SerialConnection::SerialConnection(QQuickItem* parent) :
    QQuickItem(parent),
    m_device{},
    m_connected{false},
    m_knownPorts{}
{

    QList<QSerialPortInfo> availablePorts = QSerialPortInfo::availablePorts();
            qDebug() << availablePorts.size() << "Ports available:";

    for(QSerialPortInfo const& port : availablePorts){
        qDebug() << port.portName() << " MANUFACTURER: " << port.manufacturer() << " SN: " << port.serialNumber();
        m_knownPorts.append(port.portName());
    }

}

SerialConnection::~SerialConnection(){
    // TODO close any established connections
}

QString
SerialConnection::device() const {
    return m_device;
}

void
SerialConnection::setDevice(QString const device){
    m_device = device;
    establishConnection();

    emit deviceChanged();
}

bool
SerialConnection::connected() const {
    return m_connected;
}


// --- Actual functionality ---

void
SerialConnection::establishConnection(){

    if(!m_knownPorts.contains(m_device)){
        qDebug() << m_device << " no such port";
        return;
    }

    qDebug() << "Establishing connecttion to " << m_device;
}
