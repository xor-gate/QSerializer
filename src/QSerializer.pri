contains(DEFINES, QS_HAS_XML) {
    QT += xml
}

HEADERS += \
        $$PWD/qserializer.hpp

INCLUDEPATH += $$PWD/

DISTFILES += \
        $$PWD/QSerializer

CONFIG += QSERIALIZER_INCLUDED
DEFINES += QSERIALIZER_INCLUDED
