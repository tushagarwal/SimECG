/****************************************************************************
** Meta object code from reading C++ file 'ecgpresetlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ecgpresetlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ecgpresetlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ECGpresetList_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ECGpresetList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ECGpresetList_t qt_meta_stringdata_ECGpresetList = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ECGpresetList"
QT_MOC_LITERAL(1, 14, 12), // "createPreset"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "ECGpreset*"
QT_MOC_LITERAL(4, 39, 12), // "removePreset"
QT_MOC_LITERAL(5, 52, 9) // "oldPreset"

    },
    "ECGpresetList\0createPreset\0\0ECGpreset*\0"
    "removePreset\0oldPreset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ECGpresetList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 3,    2,
    QMetaType::Int, QMetaType::QString,    5,

       0        // eod
};

void ECGpresetList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ECGpresetList *_t = static_cast<ECGpresetList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->createPreset((*reinterpret_cast< ECGpreset*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->removePreset((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ECGpresetList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ECGpresetList.data,
      qt_meta_data_ECGpresetList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ECGpresetList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ECGpresetList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ECGpresetList.stringdata0))
        return static_cast<void*>(const_cast< ECGpresetList*>(this));
    return QObject::qt_metacast(_clname);
}

int ECGpresetList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
