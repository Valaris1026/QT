/****************************************************************************
** Meta object code from reading C++ file 'chat.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../testTcpClient2/chat.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Chat_t {
    uint offsetsAndSizes[10];
    char stringdata0[5];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Chat_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Chat_t qt_meta_stringdata_Chat = {
    {
        QT_MOC_LITERAL(0, 4),  // "Chat"
        QT_MOC_LITERAL(5, 22),  // "on_clearButton_clicked"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 11),  // "tcpReadData"
        QT_MOC_LITERAL(41, 21)   // "on_sendButton_clicked"
    },
    "Chat",
    "on_clearButton_clicked",
    "",
    "tcpReadData",
    "on_sendButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Chat[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Chat::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Chat.offsetsAndSizes,
    qt_meta_data_Chat,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Chat_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Chat, std::true_type>,
        // method 'on_clearButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tcpReadData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sendButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Chat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Chat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_clearButton_clicked(); break;
        case 1: _t->tcpReadData(); break;
        case 2: _t->on_sendButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Chat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Chat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Chat.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Chat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
