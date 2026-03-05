/****************************************************************************
** Meta object code from reading C++ file 'classes.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../classes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'classes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6ParentE_t {};
} // unnamed namespace

template <> constexpr inline auto Parent::qt_create_metaobjectdata<qt_meta_tag_ZN6ParentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Parent",
        "age",
        "QJsonValue",
        "name",
        "male",
        "boembats"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'age'
        QtMocHelpers::PropertyData<QJsonValue>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'name'
        QtMocHelpers::PropertyData<QJsonValue>(3, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'male'
        QtMocHelpers::PropertyData<QJsonValue>(4, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'boembats'
        QtMocHelpers::PropertyData<QJsonValue>(5, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Parent, qt_meta_tag_ZN6ParentE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Parent::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSerializer>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6ParentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6ParentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6ParentE_t>.metaTypes,
    nullptr
} };

void Parent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<Parent *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_age(); break;
        case 1: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_name(); break;
        case 2: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_male(); break;
        case 3: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_boembats(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_json_age(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 1: _t->set_json_name(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 2: _t->set_json_male(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 3: _t->set_json_boembats(*reinterpret_cast<QJsonValue*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN7StudentE_t {};
} // unnamed namespace

template <> constexpr inline auto Student::qt_create_metaobjectdata<qt_meta_tag_ZN7StudentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Student",
        "age",
        "QJsonValue",
        "name",
        "links",
        "parents"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'age'
        QtMocHelpers::PropertyData<QJsonValue>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'name'
        QtMocHelpers::PropertyData<QJsonValue>(3, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'links'
        QtMocHelpers::PropertyData<QJsonValue>(4, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'parents'
        QtMocHelpers::PropertyData<QJsonValue>(5, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Student, qt_meta_tag_ZN7StudentE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Student::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSerializer>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7StudentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7StudentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7StudentE_t>.metaTypes,
    nullptr
} };

void Student::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<Student *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_age(); break;
        case 1: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_name(); break;
        case 2: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_links(); break;
        case 3: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_parents(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_json_age(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 1: _t->set_json_name(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 2: _t->set_json_links(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 3: _t->set_json_parents(*reinterpret_cast<QJsonValue*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN12DictionariesE_t {};
} // unnamed namespace

template <> constexpr inline auto Dictionaries::qt_create_metaobjectdata<qt_meta_tag_ZN12DictionariesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Dictionaries",
        "qt_hash",
        "QJsonValue",
        "qt_map",
        "qt_map_objects",
        "std_map",
        "std_map_objects"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'qt_hash'
        QtMocHelpers::PropertyData<QJsonValue>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'qt_map'
        QtMocHelpers::PropertyData<QJsonValue>(3, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'qt_map_objects'
        QtMocHelpers::PropertyData<QJsonValue>(4, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'std_map'
        QtMocHelpers::PropertyData<QJsonValue>(5, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'std_map_objects'
        QtMocHelpers::PropertyData<QJsonValue>(6, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Dictionaries, qt_meta_tag_ZN12DictionariesE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Dictionaries::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSerializer>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12DictionariesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12DictionariesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12DictionariesE_t>.metaTypes,
    nullptr
} };

void Dictionaries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<Dictionaries *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_qt_hash(); break;
        case 1: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_qt_map(); break;
        case 2: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_qt_map_objects(); break;
        case 3: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_std_map(); break;
        case 4: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_std_map_objects(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_json_qt_hash(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 1: _t->set_json_qt_map(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 2: _t->set_json_qt_map_objects(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 3: _t->set_json_std_map(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 4: _t->set_json_std_map_objects(*reinterpret_cast<QJsonValue*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN5FieldE_t {};
} // unnamed namespace

template <> constexpr inline auto Field::qt_create_metaobjectdata<qt_meta_tag_ZN5FieldE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Field",
        "digit",
        "QJsonValue",
        "string",
        "flag",
        "d_digit"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'digit'
        QtMocHelpers::PropertyData<QJsonValue>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'string'
        QtMocHelpers::PropertyData<QJsonValue>(3, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'flag'
        QtMocHelpers::PropertyData<QJsonValue>(4, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'd_digit'
        QtMocHelpers::PropertyData<QJsonValue>(5, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Field, qt_meta_tag_ZN5FieldE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Field::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSerializer>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5FieldE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5FieldE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5FieldE_t>.metaTypes,
    nullptr
} };

void Field::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<Field *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_digit(); break;
        case 1: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_string(); break;
        case 2: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_flag(); break;
        case 3: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_d_digit(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_json_digit(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 1: _t->set_json_string(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 2: _t->set_json_flag(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 3: _t->set_json_d_digit(*reinterpret_cast<QJsonValue*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN10CollectionE_t {};
} // unnamed namespace

template <> constexpr inline auto Collection::qt_create_metaobjectdata<qt_meta_tag_ZN10CollectionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Collection",
        "vector",
        "QJsonValue",
        "list",
        "stack"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'vector'
        QtMocHelpers::PropertyData<QJsonValue>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'list'
        QtMocHelpers::PropertyData<QJsonValue>(3, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'stack'
        QtMocHelpers::PropertyData<QJsonValue>(4, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Collection, qt_meta_tag_ZN10CollectionE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Collection::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSerializer>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10CollectionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10CollectionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10CollectionE_t>.metaTypes,
    nullptr
} };

void Collection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<Collection *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_vector(); break;
        case 1: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_list(); break;
        case 2: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_stack(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_json_vector(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 1: _t->set_json_list(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 2: _t->set_json_stack(*reinterpret_cast<QJsonValue*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN12CustomObjectE_t {};
} // unnamed namespace

template <> constexpr inline auto CustomObject::qt_create_metaobjectdata<qt_meta_tag_ZN12CustomObjectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CustomObject",
        "digit",
        "QJsonValue",
        "string"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'digit'
        QtMocHelpers::PropertyData<QJsonValue>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'string'
        QtMocHelpers::PropertyData<QJsonValue>(3, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CustomObject, qt_meta_tag_ZN12CustomObjectE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CustomObject::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSerializer>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CustomObjectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CustomObjectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12CustomObjectE_t>.metaTypes,
    nullptr
} };

void CustomObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<CustomObject *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_digit(); break;
        case 1: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_string(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_json_digit(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 1: _t->set_json_string(*reinterpret_cast<QJsonValue*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN19CollectionOfObjectsE_t {};
} // unnamed namespace

template <> constexpr inline auto CollectionOfObjects::qt_create_metaobjectdata<qt_meta_tag_ZN19CollectionOfObjectsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CollectionOfObjects",
        "objects",
        "QJsonValue"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'objects'
        QtMocHelpers::PropertyData<QJsonValue>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CollectionOfObjects, qt_meta_tag_ZN19CollectionOfObjectsE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CollectionOfObjects::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSerializer>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19CollectionOfObjectsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19CollectionOfObjectsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19CollectionOfObjectsE_t>.metaTypes,
    nullptr
} };

void CollectionOfObjects::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<CollectionOfObjects *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_objects(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_json_objects(*reinterpret_cast<QJsonValue*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN7GeneralE_t {};
} // unnamed namespace

template <> constexpr inline auto General::qt_create_metaobjectdata<qt_meta_tag_ZN7GeneralE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "General",
        "field",
        "QJsonValue",
        "collection",
        "object",
        "collectionObjects",
        "dictionaries"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'field'
        QtMocHelpers::PropertyData<QJsonValue>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'collection'
        QtMocHelpers::PropertyData<QJsonValue>(3, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'object'
        QtMocHelpers::PropertyData<QJsonValue>(4, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'collectionObjects'
        QtMocHelpers::PropertyData<QJsonValue>(5, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'dictionaries'
        QtMocHelpers::PropertyData<QJsonValue>(6, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<General, qt_meta_tag_ZN7GeneralE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject General::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSerializer>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7GeneralE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7GeneralE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7GeneralE_t>.metaTypes,
    nullptr
} };

void General::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<General *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_field(); break;
        case 1: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_collection(); break;
        case 2: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_object(); break;
        case 3: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_collectionObjects(); break;
        case 4: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_dictionaries(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_json_field(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 1: _t->set_json_collection(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 2: _t->set_json_object(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 3: _t->set_json_collectionObjects(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 4: _t->set_json_dictionaries(*reinterpret_cast<QJsonValue*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN13TestXmlObjectE_t {};
} // unnamed namespace

template <> constexpr inline auto TestXmlObject::qt_create_metaobjectdata<qt_meta_tag_ZN13TestXmlObjectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TestXmlObject",
        "digit",
        "QJsonValue",
        "string"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'digit'
        QtMocHelpers::PropertyData<QJsonValue>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'string'
        QtMocHelpers::PropertyData<QJsonValue>(3, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TestXmlObject, qt_meta_tag_ZN13TestXmlObjectE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TestXmlObject::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSerializer>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13TestXmlObjectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13TestXmlObjectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13TestXmlObjectE_t>.metaTypes,
    nullptr
} };

void TestXmlObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<TestXmlObject *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_digit(); break;
        case 1: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_string(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_json_digit(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 1: _t->set_json_string(*reinterpret_cast<QJsonValue*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN7TestXmlE_t {};
} // unnamed namespace

template <> constexpr inline auto TestXml::qt_create_metaobjectdata<qt_meta_tag_ZN7TestXmlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TestXml",
        "field",
        "QJsonValue",
        "collection",
        "object"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'field'
        QtMocHelpers::PropertyData<QJsonValue>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'collection'
        QtMocHelpers::PropertyData<QJsonValue>(3, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'object'
        QtMocHelpers::PropertyData<QJsonValue>(4, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TestXml, qt_meta_tag_ZN7TestXmlE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TestXml::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSerializer>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7TestXmlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7TestXmlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7TestXmlE_t>.metaTypes,
    nullptr
} };

void TestXml::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<TestXml *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_field(); break;
        case 1: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_collection(); break;
        case 2: *reinterpret_cast<QJsonValue*>(_v) = _t->get_json_object(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_json_field(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 1: _t->set_json_collection(*reinterpret_cast<QJsonValue*>(_v)); break;
        case 2: _t->set_json_object(*reinterpret_cast<QJsonValue*>(_v)); break;
        default: break;
        }
    }
}
QT_WARNING_POP
