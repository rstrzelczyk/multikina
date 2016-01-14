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
    QByteArrayData data[12];
    char stringdata[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_NewClientAccountForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_NewClientAccountForm_t qt_meta_stringdata_NewClientAccountForm = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 37),
QT_MOC_LITERAL(2, 59, 0),
QT_MOC_LITERAL(3, 60, 46),
QT_MOC_LITERAL(4, 107, 37),
QT_MOC_LITERAL(5, 145, 24),
QT_MOC_LITERAL(6, 170, 16),
QT_MOC_LITERAL(7, 187, 24),
QT_MOC_LITERAL(8, 212, 24),
QT_MOC_LITERAL(9, 237, 21),
QT_MOC_LITERAL(10, 259, 25),
QT_MOC_LITERAL(11, 285, 18)
    },
    "NewClientAccountForm\0"
    "on_pushButton_senior_discount_clicked\0"
    "\0on_pushButton_confitm_student_discount_clicked\0"
    "on_pushButton_choose_building_clicked\0"
    "on_pushButton_ok_clicked\0setDefaultValues\0"
    "AllObligatoryDataWritten\0"
    "isValidPhoneNumberFormat\0isValidPasswordFormat\0"
    "isPassword2SameAsPassword\0isValidEmailFormat\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewClientAccountForm[] = {

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
       1,    0,   64,    2, 0x08,
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    0,   67,    2, 0x08,
       6,    0,   68,    2, 0x08,
       7,    0,   69,    2, 0x08,
       8,    0,   70,    2, 0x08,
       9,    0,   71,    2, 0x08,
      10,    0,   72,    2, 0x08,
      11,    0,   73,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

       0        // eod
};

void NewClientAccountForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewClientAccountForm *_t = static_cast<NewClientAccountForm *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_senior_discount_clicked(); break;
        case 1: _t->on_pushButton_confitm_student_discount_clicked(); break;
        case 2: _t->on_pushButton_choose_building_clicked(); break;
        case 3: _t->on_pushButton_ok_clicked(); break;
        case 4: _t->setDefaultValues(); break;
        case 5: { bool _r = _t->AllObligatoryDataWritten();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isValidPhoneNumberFormat();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isValidPasswordFormat();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isPassword2SameAsPassword();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isValidEmailFormat();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject NewClientAccountForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewClientAccountForm.data,
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
    return QDialog::qt_metacast(_clname);
}

int NewClientAccountForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
