/****************************************************************************
** Meta object code from reading C++ file 'assessmentframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../assessmentframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'assessmentframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AssessmentFrame_t {
    QByteArrayData data[7];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssessmentFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssessmentFrame_t qt_meta_stringdata_AssessmentFrame = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AssessmentFrame"
QT_MOC_LITERAL(1, 16, 15), // "questionChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "assessmentRunning"
QT_MOC_LITERAL(4, 51, 15), // "startAssessment"
QT_MOC_LITERAL(5, 67, 12), // "nextQuestion"
QT_MOC_LITERAL(6, 80, 11) // "updateTimer"

    },
    "AssessmentFrame\0questionChanged\0\0"
    "assessmentRunning\0startAssessment\0"
    "nextQuestion\0updateTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssessmentFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   45,    2, 0x0a /* Public */,
       5,    0,   46,    2, 0x0a /* Public */,
       6,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AssessmentFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssessmentFrame *_t = static_cast<AssessmentFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->questionChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->assessmentRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->startAssessment(); break;
        case 3: _t->nextQuestion(); break;
        case 4: _t->updateTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AssessmentFrame::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AssessmentFrame::questionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AssessmentFrame::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AssessmentFrame::assessmentRunning)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject AssessmentFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_AssessmentFrame.data,
      qt_meta_data_AssessmentFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AssessmentFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssessmentFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AssessmentFrame.stringdata0))
        return static_cast<void*>(const_cast< AssessmentFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int AssessmentFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AssessmentFrame::questionChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AssessmentFrame::assessmentRunning(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
