/****************************************************************************
** Meta object code from reading C++ file 'walletview.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "walletview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletView_t {
    QByteArrayData data[33];
    char stringdata0[434];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletView_t qt_meta_stringdata_WalletView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WalletView"
QT_MOC_LITERAL(1, 11, 21), // "showNormalIfMinimized"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "message"
QT_MOC_LITERAL(4, 42, 5), // "title"
QT_MOC_LITERAL(5, 48, 5), // "style"
QT_MOC_LITERAL(6, 54, 23), // "encryptionStatusChanged"
QT_MOC_LITERAL(7, 78, 6), // "status"
QT_MOC_LITERAL(8, 85, 19), // "incomingTransaction"
QT_MOC_LITERAL(9, 105, 4), // "date"
QT_MOC_LITERAL(10, 110, 4), // "unit"
QT_MOC_LITERAL(11, 115, 6), // "amount"
QT_MOC_LITERAL(12, 122, 4), // "type"
QT_MOC_LITERAL(13, 127, 7), // "address"
QT_MOC_LITERAL(14, 135, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(15, 152, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(16, 168, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(17, 189, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(18, 207, 4), // "addr"
QT_MOC_LITERAL(19, 212, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(20, 231, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(21, 252, 21), // "processNewTransaction"
QT_MOC_LITERAL(22, 274, 6), // "parent"
QT_MOC_LITERAL(23, 281, 5), // "start"
QT_MOC_LITERAL(24, 287, 13), // "encryptWallet"
QT_MOC_LITERAL(25, 301, 12), // "backupWallet"
QT_MOC_LITERAL(26, 314, 16), // "changePassphrase"
QT_MOC_LITERAL(27, 331, 12), // "unlockWallet"
QT_MOC_LITERAL(28, 344, 20), // "usedSendingAddresses"
QT_MOC_LITERAL(29, 365, 22), // "usedReceivingAddresses"
QT_MOC_LITERAL(30, 388, 22), // "updateEncryptionStatus"
QT_MOC_LITERAL(31, 411, 12), // "showProgress"
QT_MOC_LITERAL(32, 424, 9) // "nProgress"

    },
    "WalletView\0showNormalIfMinimized\0\0"
    "message\0title\0style\0encryptionStatusChanged\0"
    "status\0incomingTransaction\0date\0unit\0"
    "amount\0type\0address\0gotoOverviewPage\0"
    "gotoHistoryPage\0gotoReceiveCoinsPage\0"
    "gotoSendCoinsPage\0addr\0gotoSignMessageTab\0"
    "gotoVerifyMessageTab\0processNewTransaction\0"
    "parent\0start\0encryptWallet\0backupWallet\0"
    "changePassphrase\0unlockWallet\0"
    "usedSendingAddresses\0usedReceivingAddresses\0"
    "updateEncryptionStatus\0showProgress\0"
    "nProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    3,  125,    2, 0x06 /* Public */,
       6,    1,  132,    2, 0x06 /* Public */,
       8,    5,  135,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  146,    2, 0x0a /* Public */,
      15,    0,  147,    2, 0x0a /* Public */,
      16,    0,  148,    2, 0x0a /* Public */,
      17,    1,  149,    2, 0x0a /* Public */,
      17,    0,  152,    2, 0x2a /* Public | MethodCloned */,
      19,    1,  153,    2, 0x0a /* Public */,
      19,    0,  156,    2, 0x2a /* Public | MethodCloned */,
      20,    1,  157,    2, 0x0a /* Public */,
      20,    0,  160,    2, 0x2a /* Public | MethodCloned */,
      21,    3,  161,    2, 0x0a /* Public */,
      24,    1,  168,    2, 0x0a /* Public */,
      25,    0,  171,    2, 0x0a /* Public */,
      26,    0,  172,    2, 0x0a /* Public */,
      27,    0,  173,    2, 0x0a /* Public */,
      28,    0,  174,    2, 0x0a /* Public */,
      29,    0,  175,    2, 0x0a /* Public */,
      30,    0,  176,    2, 0x0a /* Public */,
      31,    2,  177,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    4,    3,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::LongLong, QMetaType::QString, QMetaType::QString,    9,   10,   11,   12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   22,   23,    2,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,   32,

       0        // eod
};

void WalletView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletView *_t = static_cast<WalletView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showNormalIfMinimized(); break;
        case 1: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 2: _t->encryptionStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 4: _t->gotoOverviewPage(); break;
        case 5: _t->gotoHistoryPage(); break;
        case 6: _t->gotoReceiveCoinsPage(); break;
        case 7: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->gotoSendCoinsPage(); break;
        case 9: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->gotoSignMessageTab(); break;
        case 11: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->gotoVerifyMessageTab(); break;
        case 13: _t->processNewTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->backupWallet(); break;
        case 16: _t->changePassphrase(); break;
        case 17: _t->unlockWallet(); break;
        case 18: _t->usedSendingAddresses(); break;
        case 19: _t->usedReceivingAddresses(); break;
        case 20: _t->updateEncryptionStatus(); break;
        case 21: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WalletView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::showNormalIfMinimized)) {
                *result = 0;
            }
        }
        {
            typedef void (WalletView::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::message)) {
                *result = 1;
            }
        }
        {
            typedef void (WalletView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::encryptionStatusChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (WalletView::*_t)(const QString & , int , qint64 , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::incomingTransaction)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject WalletView::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_WalletView.data,
      qt_meta_data_WalletView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletView.stringdata0))
        return static_cast<void*>(const_cast< WalletView*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int WalletView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void WalletView::showNormalIfMinimized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WalletView::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletView::encryptionStatusChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletView::incomingTransaction(const QString & _t1, int _t2, qint64 _t3, const QString & _t4, const QString & _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
