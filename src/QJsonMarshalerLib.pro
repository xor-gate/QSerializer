#-------------------------------------------------
#
# Project created by QtCreator 2020-03-29T14:32:33
#
#-------------------------------------------------

QT       -= core

TARGET = QJsonMarshalerLib
TEMPLATE = lib

DEFINES += QJSONMARSHALERLIB_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        keepersfactory.cpp \
        metakeepers.cpp \
        qjsonmarshaler.cpp

HEADERS += \
        keepersfactory.h \
        metakeepers.h \
        propertykeeper.h \
        qjsonmarshaler.h \
        qjsonmarshalerlib_global.h \
        simplekeepers.h

unix: {

    CONFIG (debug, debug|release) {
        TARGET = QJsonMarshalerLibd
    } else {
        TARGET = QJsonMarshalerLib
    }
} else {
    TARGET = $$qtLibraryTarget(QJsonMarshaler)
}

VERSION = 0.1.3

CONFIG += debug_and_release
build_all

CONFIG(debug, debug|release){
DESTDIR = debug
} else {
DESTDIR = release
}

