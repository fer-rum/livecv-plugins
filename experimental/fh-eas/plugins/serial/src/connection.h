#ifndef MIRROR_H
#define MIRROR_H

#include <QQuickItem>

#include <QQuickItem>

class SerialConnection :
        public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(SerialConnection);

    Q_PROPERTY(QString device READ device WRITE setDevice NOTIFY deviceChanged)
    Q_PROPERTY(bool connected READ connected NOTIFY connectedChanged)

private:

    QString m_device;
    bool m_connected;

    QStringList m_knownPorts;


    // --- Connection state handling ---
    void establishConnection();

public:

    SerialConnection(QQuickItem* parent = nullptr);
    ~SerialConnection();

    QString device() const;
    void setDevice(QString const device);

    bool connected() const;


signals:
    void deviceChanged();
    void connectedChanged();

};

#endif // MIRROR_H
