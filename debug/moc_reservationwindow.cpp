/****************************************************************************
** Meta object code from reading C++ file 'reservationwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../reservationwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reservationwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ReservationWindow_t {
    QByteArrayData data[7];
    char stringdata[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ReservationWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ReservationWindow_t qt_meta_stringdata_ReservationWindow = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 28),
QT_MOC_LITERAL(2, 47, 0),
QT_MOC_LITERAL(3, 48, 26),
QT_MOC_LITERAL(4, 75, 29),
QT_MOC_LITERAL(5, 105, 38),
QT_MOC_LITERAL(6, 144, 5)
    },
    "ReservationWindow\0on_pushButton_logout_clicked\0"
    "\0on_pushButton_back_clicked\0"
    "on_pushButton_refresh_clicked\0"
    "on_tableView_reservation_doubleClicked\0"
    "index\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReservationWindow[] = {

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
       5,    1,   37,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,

       0        // eod
};

void ReservationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReservationWindow *_t = static_cast<ReservationWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_logout_clicked(); break;
        case 1: _t->on_pushButton_back_clicked(); break;
        case 2: _t->on_pushButton_refresh_clicked(); break;
        case 3: _t->on_tableView_reservation_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ReservationWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ReservationWindow.data,
      qt_meta_data_ReservationWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *ReservationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReservationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReservationWindow.stringdata))
        return static_cast<void*>(const_cast< ReservationWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ReservationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
