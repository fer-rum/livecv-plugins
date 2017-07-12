#ifndef HELLO_PLUGIN_H
#define HELLO_PLUGIN_H

#include <QQmlExtensionPlugin>

class SerialPlugin : public QQmlExtensionPlugin {

    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif // HELLO_PLUGIN_H
