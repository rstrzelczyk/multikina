/****************************************************************************
** Meta object code from reading C++ file 'orderinformation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../orderinformation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'orderinformation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OrderInformation_t {
    QByteArrayData data[6];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_OrderInformation_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_OrderInformation_t qt_meta_stringdata_OrderInformation = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 26),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 26),
QT_MOC_LITERAL(4, 72, 26),
QT_MOC_LITERAL(5, 99, 28)
    },
    "OrderInformation\0on_pushButton_cash_clicked\0"
    "\0on_pushButton_card_clicked\0"
    "on_pushButton_back_clicked\0"
    "on_pushButton_logout_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrderInformation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08,
       3,    0,   35,    2, 0x08,
       4,    0,   36,    2, 0x08,
       5,    0,   37,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OrderInformation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OrderInformation *_t = static_cast<OrderInformation *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_cash_clicked(); break;
        case 1: _t->on_pushButton_card_clicked(); break;
        case 2: _t->on_pushButton_back_clicked(); break;
        case 3: _t->on_pushButton_logout_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OrderInformation::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OrderInformation.data,
      qt_meta_data_OrderInformation,  qt_static_metacall, 0, 0}
};


const QMetaObject *OrderInformation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrderInformation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrderInformation.stringdata))
        return static_cast<void*>(const_cast< OrderInformation*>(this));
    return QDialog::qt_metacast(_clname);
}

int OrderInformation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
