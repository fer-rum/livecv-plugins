#include "serial_plugin.h"
#include "connection.h"
#include <qqml.h>

void SerialPlugin::registerTypes(const char *uri){
    qmlRegisterType<SerialConnection>(uri, 1, 0, "SerialConnection");
}
