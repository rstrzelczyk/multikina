/****************************************************************************
** Meta object code from reading C++ file 'newclientaccountform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newclientaccountform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newclientaccountform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NewClientAccountForm_t {
    QByteArrayData data[14];
    char stringdata[406];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_NewClientAccountForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_NewClientAccountForm_t qt_meta_stringdata_NewClientAccountForm = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 24),
QT_MOC_LITERAL(2, 46, 0),
QT_MOC_LITERAL(3, 47, 37),
QT_MOC_LITERAL(4, 85, 46),
QT_MOC_LITERAL(5, 132, 37),
QT_MOC_LITERAL(6, 170, 34),
QT_MOC_LITERAL(7, 205, 4),
QT_MOC_LITERAL(8, 210, 38),
QT_MOC_LITERAL(9, 249, 29),
QT_MOC_LITERAL(10, 279, 32),
QT_MOC_LITERAL(11, 312, 27),
QT_MOC_LITERAL(12, 340, 30),
QT_MOC_LITERAL(13, 371, 33)
    },
    "NewClientAccountForm\0on_pushButton_ok_clicked\0"
    "\0on_pushButton_choose_building_clicked\0"
    "on_pushButton_confitm_student_discount_clicked\0"
    "on_pushButton_senior_discount_clicked\0"
    "on_lineEdit_password_2_textChanged\0"
    "arg1\0on_lineEdit_confirnpassword_textEdited\0"
    "on_lineEdit_email_textChanged\0"
    "on_lineEdit_telephone_textEdited\0"
    "on_lineEdit_name_textEdited\0"
    "on_lineEdit_surname_textEdited\0"
    "on_lineEdit_email_editingFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewClientAccountForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08,
       3,    0,   70,    2, 0x08,
       4,    0,   71,    2, 0x08,
       5,    0,   72,    2, 0x08,
       6,    1,   73,    2, 0x08,
       8,    1,   76,    2, 0x08,
       9,    1,   79,    2, 0x08,
      10,    1,   82,    2, 0x08,
      11,    1,   85,    2, 0x08,
      12,    1,   88,    2, 0x08,
      13,    0,   91,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void NewClientAccountForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewClientAccountForm *_t = static_cast<NewClientAccountForm *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_ok_clicked(); break;
        case 1: _t->on_pushButton_choose_building_clicked(); break;
        case 2: _t->on_pushButton_confitm_student_discount_clicked(); break;
        case 3: _t->on_pushButton_senior_discount_clicked(); break;
        case 4: _t->on_lineEdit_password_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_lineEdit_confirnpassword_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_lineEdit_email_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_lineEdit_telephone_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_lineEdit_name_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_lineEdit_surname_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_lineEdit_email_editingFinished(); break;
        default: ;
        }
    }
}

const QMetaObject NewClientAccountForm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NewClientAccountForm.data,
      qt_meta_data_NewClientAccountForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *NewClientAccountForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewClientAccountForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewClientAccountForm.stringdata))
        return static_cast<void*>(const_cast< NewClientAccountForm*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NewClientAccountForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
