INCLUDEPATH *= $$PWD

HEADERS *= \
    $$PWD/serial_plugin.h \
    $$PWD/connection.h

SOURCES *= \
    $$PWD/serial_plugin.cpp \
    $$PWD/connection.cpp

QT += serialport
