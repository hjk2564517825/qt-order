/****************************************************************************
** Meta object code from reading C++ file 'mainscreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainScreen_t {
    QByteArrayData data[17];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainScreen_t qt_meta_stringdata_MainScreen = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainScreen"
QT_MOC_LITERAL(1, 11, 13), // "add_foodclick"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "on_orderBtn_clicked"
QT_MOC_LITERAL(4, 46, 11), // "update_time"
QT_MOC_LITERAL(5, 58, 20), // "on_settleBtn_clicked"
QT_MOC_LITERAL(6, 79, 16), // "get_confirm_menu"
QT_MOC_LITERAL(7, 96, 3), // "now"
QT_MOC_LITERAL(8, 100, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(9, 124, 4), // "arg1"
QT_MOC_LITERAL(10, 129, 19), // "on_serveBtn_clicked"
QT_MOC_LITERAL(11, 149, 8), // "recvjson"
QT_MOC_LITERAL(12, 158, 11), // "QByteArray&"
QT_MOC_LITERAL(13, 170, 5), // "array"
QT_MOC_LITERAL(14, 176, 10), // "recvheader"
QT_MOC_LITERAL(15, 187, 8), // "recvname"
QT_MOC_LITERAL(16, 196, 20) // "on_updateBtn_clicked"

    },
    "MainScreen\0add_foodclick\0\0on_orderBtn_clicked\0"
    "update_time\0on_settleBtn_clicked\0"
    "get_confirm_menu\0now\0on_spinBox_valueChanged\0"
    "arg1\0on_serveBtn_clicked\0recvjson\0"
    "QByteArray&\0array\0recvheader\0recvname\0"
    "on_updateBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainScreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      14,    1,   83,    2, 0x08 /* Private */,
      15,    1,   86,    2, 0x08 /* Private */,
      16,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

void MainScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->add_foodclick(); break;
        case 1: _t->on_orderBtn_clicked(); break;
        case 2: _t->update_time(); break;
        case 3: _t->on_settleBtn_clicked(); break;
        case 4: _t->get_confirm_menu((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_serveBtn_clicked(); break;
        case 7: _t->recvjson((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 8: _t->recvheader((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 9: _t->recvname((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 10: _t->on_updateBtn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainScreen.data,
    qt_meta_data_MainScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainScreen.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
