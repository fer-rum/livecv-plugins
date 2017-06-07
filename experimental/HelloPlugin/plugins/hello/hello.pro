PLUGIN_NAME = hello
PLUGIN_PATH = $$PWD

## PLUGIN_NAME and PLUGIN_PATH must be set up prior to including this config file
include($$LIVECV_DEV_PATH/project/plugin.pri)

uri = plugins.hello

DEFINES += Q_LCV

## Dependencies

linkPlugin(live,    live)
linkPlugin(lcvcore, lcvcore)

## Deploying qml is handled by the is_plugin configuration

## Source

include($$PWD/src/hello.pri)
include($$LIVECV_DEV_PATH/3rdparty/opencvconfig.pro)

OTHER_FILES *= \
    qml/*.qml \
    qml/qmldir
