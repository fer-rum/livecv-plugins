PLUGIN_NAME = serial
PLUGIN_PATH = $$PWD

## PLUGIN_NAME and PLUGIN_PATH must be set up prior to including this config file
include($$LIVECV_DEV_PATH/project/plugin.pri)

uri = fh-eas.serial

DEFINES += Q_LCV

## Dependencies

linkPlugin(live,    live)
linkPlugin(lcvcore, lcvcore)

## Deploying qml is handled by the is_plugin configuration

## Source

include($$PWD/src/serial.pri)
include($$LIVECV_DEV_PATH/project/3rdparty/opencv.pri)

OTHER_FILES *= \
    qml/*.qml \
    qml/qmldir
