#include "helloplugin_plugin.h"
#include "helloplugin.h"

#include <qqml.h>

void HelloPluginPlugin::registerTypes(const char *uri)
{
    // @uri ferrum.experimental.hello
    qmlRegisterType<HelloPlugin>(uri, 1, 0, "HelloPlugin");
}

