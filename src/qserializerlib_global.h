#ifndef QJSONMARSHALERLIB_GLOBAL_H
#define QJSONMARSHALERLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QSERIALIZERLIB_LIBRARY)
#  define QSERIALIZERLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QSERIALIZERLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QJSONMARSHALERLIB_GLOBAL_H