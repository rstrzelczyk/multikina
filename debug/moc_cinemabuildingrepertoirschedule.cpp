/****************************************************************************
** Meta object code from reading C++ file 'cinemabuildingrepertoirschedule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cinemabuildingrepertoirschedule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cinemabuildingrepertoirschedule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CinemaBuildingRepertoirSchedule_t {
    QByteArrayData data[13];
    char stringdata[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CinemaBuildingRepertoirSchedule_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CinemaBuildingRepertoirSchedule_t qt_meta_stringdata_CinemaBuildingRepertoirSchedule = {
    {
QT_MOC_LITERAL(0, 0, 31),
QT_MOC_LITERAL(1, 32, 11),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 7),
QT_MOC_LITERAL(4, 53, 33),
QT_MOC_LITERAL(5, 87, 36),
QT_MOC_LITERAL(6, 124, 36),
QT_MOC_LITERAL(7, 161, 30),
QT_MOC_LITERAL(8, 192, 30),
QT_MOC_LITERAL(9, 223, 32),
QT_MOC_LITERAL(10, 256, 28),
QT_MOC_LITERAL(11, 285, 35),
QT_MOC_LITERAL(12, 321, 5)
    },
    "CinemaBuildingRepertoirSchedule\0"
    "refreshTime\0\0log_out\0"
    "on_pushButton_give_ticket_clicked\0"
    "on_pushButton_create_account_clicked\0"
    "on_pushButton_client_account_clicked\0"
    "on_pushButton_tomorrow_clicked\0"
    "on_pushButton_otherday_clicked\0"
    "on_pushButton_modyfydata_clicked\0"
    "on_pushButton_logout_clicked\0"
    "on_tableView_schedule_doubleClicked\0"
    "index\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CinemaBuildingRepertoirSchedule[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a,
       3,    0,   65,    2, 0x0a,
       4,    0,   66,    2, 0x08,
       5,    0,   67,    2, 0x08,
       6,    0,   68,    2, 0x08,
       7,    0,   69,    2, 0x08,
       8,    0,   70,    2, 0x08,
       9,    0,   71,    2, 0x08,
      10,    0,   72,    2, 0x08,
      11,    1,   73,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   12,

       0        // eod
};

void CinemaBuildingRepertoirSchedule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CinemaBuildingRepertoirSchedule *_t = static_cast<CinemaBuildingRepertoirSchedule *>(_o);
        switch (_id) {
        case 0: _t->refreshTime(); break;
        case 1: _t->log_out(); break;
        case 2: _t->on_pushButton_give_ticket_clicked(); break;
        case 3: _t->on_pushButton_create_account_clicked(); break;
        case 4: _t->on_pushButton_client_account_clicked(); break;
        case 5: _t->on_pushButton_tomorrow_clicked(); break;
        case 6: _t->on_pushButton_otherday_clicked(); break;
        case 7: _t->on_pushButton_modyfydata_clicked(); break;
        case 8: _t->on_pushButton_logout_clicked(); break;
        case 9: _t->on_tableView_schedule_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CinemaBuildingRepertoirSchedule::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CinemaBuildingRepertoirSchedule.data,
      qt_meta_data_CinemaBuildingRepertoirSchedule,  qt_static_metacall, 0, 0}
};


const QMetaObject *CinemaBuildingRepertoirSchedule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CinemaBuildingRepertoirSchedule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CinemaBuildingRepertoirSchedule.stringdata))
        return static_cast<void*>(const_cast< CinemaBuildingRepertoirSchedule*>(this));
    return QDialog::qt_metacast(_clname);
}

int CinemaBuildingRepertoirSchedule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE