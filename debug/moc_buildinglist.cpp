/****************************************************************************
** Meta object code from reading C++ file 'buildinglist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../buildinglist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buildinglist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BuildingList_t {
    QByteArrayData data[11];
    char stringdata[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BuildingList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BuildingList_t qt_meta_stringdata_BuildingList = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 14),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 9),
QT_MOC_LITERAL(4, 39, 8),
QT_MOC_LITERAL(5, 48, 21),
QT_MOC_LITERAL(6, 70, 5),
QT_MOC_LITERAL(7, 76, 16),
QT_MOC_LITERAL(8, 93, 17),
QT_MOC_LITERAL(9, 111, 9),
QT_MOC_LITERAL(10, 121, 27)
    },
    "BuildingList\0chosenBuilding\0\0Building*\0"
    "buinding\0on_listWidget_clicked\0index\0"
    "displayBuildings\0QList<Building*>*\0"
    "buildings\0on_listWidget_doubleClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BuildingList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x08,
       7,    1,   40,    2, 0x08,
      10,    1,   43,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QModelIndex,    6,

       0        // eod
};

void BuildingList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BuildingList *_t = static_cast<BuildingList *>(_o);
        switch (_id) {
        case 0: _t->chosenBuilding((*reinterpret_cast< Building*(*)>(_a[1]))); break;
        case 1: _t->on_listWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->displayBuildings((*reinterpret_cast< QList<Building*>*(*)>(_a[1]))); break;
        case 3: _t->on_listWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BuildingList::*_t)(Building * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BuildingList::chosenBuilding)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject BuildingList::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BuildingList.data,
      qt_meta_data_BuildingList,  qt_static_metacall, 0, 0}
};


const QMetaObject *BuildingList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BuildingList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BuildingList.stringdata))
        return static_cast<void*>(const_cast< BuildingList*>(this));
    return QDialog::qt_metacast(_clname);
}

int BuildingList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void BuildingList::chosenBuilding(Building * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
