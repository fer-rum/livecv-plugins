#include "hello_plugin.h"
#include "mirror.h"
#include <qqml.h>

void HelloPlugin::registerTypes(const char *uri){
    qmlRegisterType<Mirror>(uri, 1, 0, "Mirror");
}
