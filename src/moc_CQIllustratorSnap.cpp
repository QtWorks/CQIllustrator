/****************************************************************************
** Meta object code from reading C++ file 'CQIllustratorSnap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CQIllustratorSnap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CQIllustratorSnap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CQIllustratorSnapDock_t {
    QByteArrayData data[7];
    char stringdata[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CQIllustratorSnapDock_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CQIllustratorSnapDock_t qt_meta_stringdata_CQIllustratorSnapDock = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 11),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 10),
QT_MOC_LITERAL(4, 46, 6),
QT_MOC_LITERAL(5, 53, 10),
QT_MOC_LITERAL(6, 64, 6)
    },
    "CQIllustratorSnapDock\0enabledSlot\0\0"
    "xPitchSlot\0xpitch\0yPitchSlot\0ypitch\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CQIllustratorSnapDock[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08,
       3,    1,   30,    2, 0x08,
       5,    1,   33,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    6,

       0        // eod
};

void CQIllustratorSnapDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CQIllustratorSnapDock *_t = static_cast<CQIllustratorSnapDock *>(_o);
        switch (_id) {
        case 0: _t->enabledSlot(); break;
        case 1: _t->xPitchSlot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->yPitchSlot((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CQIllustratorSnapDock::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CQIllustratorSnapDock.data,
      qt_meta_data_CQIllustratorSnapDock,  qt_static_metacall, 0, 0}
};


const QMetaObject *CQIllustratorSnapDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CQIllustratorSnapDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CQIllustratorSnapDock.stringdata))
        return static_cast<void*>(const_cast< CQIllustratorSnapDock*>(this));
    return QWidget::qt_metacast(_clname);
}

int CQIllustratorSnapDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
