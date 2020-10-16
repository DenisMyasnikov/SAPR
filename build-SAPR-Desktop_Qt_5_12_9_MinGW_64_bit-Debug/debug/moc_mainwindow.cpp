/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SAPR/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 32), // "on_btnAcceptNumberOfRods_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 32), // "on_btnChangeNumberOfRods_clicked"
QT_MOC_LITERAL(4, 78, 28), // "on_leLenngth_editingFinished"
QT_MOC_LITERAL(5, 107, 14), // "getRodFromList"
QT_MOC_LITERAL(6, 122, 20), // "QList<Rod>::iterator"
QT_MOC_LITERAL(7, 143, 1), // "i"
QT_MOC_LITERAL(8, 145, 27), // "on_sbPropOfRod_valueChanged"
QT_MOC_LITERAL(9, 173, 4), // "arg1"
QT_MOC_LITERAL(10, 178, 25), // "on_leArea_editingFinished"
QT_MOC_LITERAL(11, 204, 19), // "changeEnableRodProp"
QT_MOC_LITERAL(12, 224, 2), // "en"
QT_MOC_LITERAL(13, 227, 28), // "on_leModuleE_editingFinished"
QT_MOC_LITERAL(14, 256, 32) // "on_leModuleSigma_editingFinished"

    },
    "MainWindow\0on_btnAcceptNumberOfRods_clicked\0"
    "\0on_btnChangeNumberOfRods_clicked\0"
    "on_leLenngth_editingFinished\0"
    "getRodFromList\0QList<Rod>::iterator\0"
    "i\0on_sbPropOfRod_valueChanged\0arg1\0"
    "on_leArea_editingFinished\0changeEnableRodProp\0"
    "en\0on_leModuleE_editingFinished\0"
    "on_leModuleSigma_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,
      13,    0,   72,    2, 0x08 /* Private */,
      14,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnAcceptNumberOfRods_clicked(); break;
        case 1: _t->on_btnChangeNumberOfRods_clicked(); break;
        case 2: _t->on_leLenngth_editingFinished(); break;
        case 3: { QList<Rod>::iterator _r = _t->getRodFromList((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<Rod>::iterator*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->on_sbPropOfRod_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_leArea_editingFinished(); break;
        case 6: _t->changeEnableRodProp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_leModuleE_editingFinished(); break;
        case 8: _t->on_leModuleSigma_editingFinished(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
