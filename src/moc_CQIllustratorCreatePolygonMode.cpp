/****************************************************************************
** Meta object code from reading C++ file 'CQIllustratorCreatePolygonMode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CQIllustratorCreatePolygonMode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CQIllustratorCreatePolygonMode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CQIllustratorCreatePolygonToolbar_t {
    QByteArrayData data[9];
    char stringdata[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CQIllustratorCreatePolygonToolbar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CQIllustratorCreatePolygonToolbar_t qt_meta_stringdata_CQIllustratorCreatePolygonToolbar = {
    {
QT_MOC_LITERAL(0, 0, 33),
QT_MOC_LITERAL(1, 34, 15),
QT_MOC_LITERAL(2, 50, 0),
QT_MOC_LITERAL(3, 51, 12),
QT_MOC_LITERAL(4, 64, 12),
QT_MOC_LITERAL(5, 77, 10),
QT_MOC_LITERAL(6, 88, 12),
QT_MOC_LITERAL(7, 101, 15),
QT_MOC_LITERAL(8, 117, 15)
    },
    "CQIllustratorCreatePolygonToolbar\0"
    "modeChangedSlot\0\0polyFreeSlot\0"
    "polyRectSlot\0poly45Slot\0addPointSlot\0"
    "removePointSlot\0updatePointSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CQIllustratorCreatePolygonToolbar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08,
       3,    1,   50,    2, 0x08,
       4,    1,   53,    2, 0x08,
       5,    1,   56,    2, 0x08,
       6,    0,   59,    2, 0x08,
       7,    0,   60,    2, 0x08,
       8,    0,   61,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CQIllustratorCreatePolygonToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CQIllustratorCreatePolygonToolbar *_t = static_cast<CQIllustratorCreatePolygonToolbar *>(_o);
        switch (_id) {
        case 0: _t->modeChangedSlot(); break;
        case 1: _t->polyFreeSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->polyRectSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->poly45Slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->addPointSlot(); break;
        case 5: _t->removePointSlot(); break;
        case 6: _t->updatePointSlot(); break;
        default: ;
        }
    }
}

const QMetaObject CQIllustratorCreatePolygonToolbar::staticMetaObject = {
    { &CQIllustratorToolbar::staticMetaObject, qt_meta_stringdata_CQIllustratorCreatePolygonToolbar.data,
      qt_meta_data_CQIllustratorCreatePolygonToolbar,  qt_static_metacall, 0, 0}
};


const QMetaObject *CQIllustratorCreatePolygonToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CQIllustratorCreatePolygonToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CQIllustratorCreatePolygonToolbar.stringdata))
        return static_cast<void*>(const_cast< CQIllustratorCreatePolygonToolbar*>(this));
    return CQIllustratorToolbar::qt_metacast(_clname);
}

int CQIllustratorCreatePolygonToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CQIllustratorToolbar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE