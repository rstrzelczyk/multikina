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
    QByteArrayData data[11];
    char stringdata[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CinemaBuildingRepertoirSchedule_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CinemaBuildingRepertoirSchedule_t qt_meta_stringdata_CinemaBuildingRepertoirSchedule = {
    {
QT_MOC_LITERAL(0, 0, 31),
QT_MOC_LITERAL(1, 32, 33),
QT_MOC_LITERAL(2, 66, 0),
QT_MOC_LITERAL(3, 67, 36),
QT_MOC_LITERAL(4, 104, 36),
QT_MOC_LITERAL(5, 141, 30),
QT_MOC_LITERAL(6, 172, 30),
QT_MOC_LITERAL(7, 203, 32),
QT_MOC_LITERAL(8, 236, 28),
QT_MOC_LITERAL(9, 265, 35),
QT_MOC_LITERAL(10, 301, 5)
    },
    "CinemaBuildingRepertoirSchedule\0"
    "on_pushButton_give_ticket_clicked\0\0"
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
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08,
       3,    0,   55,    2, 0x08,
       4,    0,   56,    2, 0x08,
       5,    0,   57,    2, 0x08,
       6,    0,   58,    2, 0x08,
       7,    0,   59,    2, 0x08,
       8,    0,   60,    2, 0x08,
       9,    1,   61,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,

       0        // eod
};

void CinemaBuildingRepertoirSchedule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CinemaBuildingRepertoirSchedule *_t = static_cast<CinemaBuildingRepertoirSchedule *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_give_ticket_clicked(); break;
        case 1: _t->on_pushButton_create_account_clicked(); break;
        case 2: _t->on_pushButton_client_account_clicked(); break;
        case 3: _t->on_pushButton_tomorrow_clicked(); break;
        case 4: _t->on_pushButton_otherday_clicked(); break;
        case 5: _t->on_pushButton_modyfydata_clicked(); break;
        case 6: _t->on_pushButton_logout_clicked(); break;
        case 7: _t->on_tableView_schedule_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
