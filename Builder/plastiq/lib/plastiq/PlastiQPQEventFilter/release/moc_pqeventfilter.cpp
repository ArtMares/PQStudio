/****************************************************************************
** Meta object code from reading C++ file 'pqeventfilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../PlastiQExtensions/plastiq/PlastiQPQEventFilter/pqeventfilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqeventfilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PQEventFilter_t {
    QByteArrayData data[8];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PQEventFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PQEventFilter_t qt_meta_stringdata_PQEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PQEventFilter"
QT_MOC_LITERAL(1, 14, 5), // "event"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 3), // "obj"
QT_MOC_LITERAL(4, 25, 7), // "QEvent*"
QT_MOC_LITERAL(5, 33, 1), // "e"
QT_MOC_LITERAL(6, 35, 5), // "bool*"
QT_MOC_LITERAL(7, 41, 7) // "prevent"

    },
    "PQEventFilter\0event\0\0obj\0QEvent*\0e\0"
    "bool*\0prevent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PQEventFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,

       0        // eod
};

void PQEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PQEventFilter *_t = static_cast<PQEventFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->event((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PQEventFilter::*_t)(QObject * , QEvent * , bool * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PQEventFilter::event)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PQEventFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PQEventFilter.data,
      qt_meta_data_PQEventFilter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PQEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PQEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PQEventFilter.stringdata0))
        return static_cast<void*>(const_cast< PQEventFilter*>(this));
    return QObject::qt_metacast(_clname);
}

int PQEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PQEventFilter::event(QObject * _t1, QEvent * _t2, bool * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
