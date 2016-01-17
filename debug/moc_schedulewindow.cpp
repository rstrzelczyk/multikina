/****************************************************************************
** Meta object code from reading C++ file 'schedulewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../schedulewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schedulewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScheduleWindow_t {
    QByteArrayData data[9];
    char stringdata[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ScheduleWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ScheduleWindow_t qt_meta_stringdata_ScheduleWindow = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 28),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 32),
QT_MOC_LITERAL(4, 78, 30),
QT_MOC_LITERAL(5, 109, 30),
QT_MOC_LITERAL(6, 140, 36),
QT_MOC_LITERAL(7, 177, 36),
QT_MOC_LITERAL(8, 214, 33)
    },
    "ScheduleWindow\0on_pushButton_logout_clicked\0"
    "\0on_pushButton_modyfydata_clicked\0"
    "on_pushButton_tomorrow_clicked\0"
    "on_pushButton_otherday_clicked\0"
    "on_pushButton_client_account_clicked\0"
    "on_pushButton_create_account_clicked\0"
    "on_pushButton_give_ticket_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScheduleWindow[] = {

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
       3,    0,   50,    2, 0x08,
       4,    0,   51,    2, 0x08,
       5,    0,   52,    2, 0x08,
       6,    0,   53,    2, 0x08,
       7,    0,   54,    2, 0x08,
       8,    0,   55,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScheduleWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScheduleWindow *_t = static_cast<ScheduleWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_logout_clicked(); break;
        case 1: _t->on_pushButton_modyfydata_clicked(); break;
        case 2: _t->on_pushButton_tomorrow_clicked(); break;
        case 3: _t->on_pushButton_otherday_clicked(); break;
        case 4: _t->on_pushButton_client_account_clicked(); break;
        case 5: _t->on_pushButton_create_account_clicked(); break;
        case 6: _t->on_pushButton_give_ticket_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ScheduleWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ScheduleWindow.data,
      qt_meta_data_ScheduleWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *ScheduleWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScheduleWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScheduleWindow.stringdata))
        return static_cast<void*>(const_cast< ScheduleWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ScheduleWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
