/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[46];
    char stringdata0[1210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "Recv_Msg_Handler"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "Send_TestCmd"
QT_MOC_LITERAL(4, 42, 23), // "Button_Send_Msg_Handler"
QT_MOC_LITERAL(5, 66, 12), // "QPushButton*"
QT_MOC_LITERAL(6, 79, 4), // "pBtn"
QT_MOC_LITERAL(7, 84, 11), // "Config_Init"
QT_MOC_LITERAL(8, 96, 33), // "on_lineEdit_localPort_textCha..."
QT_MOC_LITERAL(9, 130, 4), // "arg1"
QT_MOC_LITERAL(10, 135, 39), // "on_comboBox_localIP_currentIn..."
QT_MOC_LITERAL(11, 175, 37), // "on_lineEdit_localPort_editing..."
QT_MOC_LITERAL(12, 213, 36), // "on_lineEdit_remoteIP_editingF..."
QT_MOC_LITERAL(13, 250, 38), // "on_lineEdit_remotePort_editin..."
QT_MOC_LITERAL(14, 289, 23), // "on_pBtn_UDPOpen_clicked"
QT_MOC_LITERAL(15, 313, 24), // "on_pBtn_UDPClose_clicked"
QT_MOC_LITERAL(16, 338, 32), // "on_pBtn_liquidValveClose_clicked"
QT_MOC_LITERAL(17, 371, 31), // "on_pBtn_liquidValveOpen_clicked"
QT_MOC_LITERAL(18, 403, 28), // "on_pBtn_airValveOpen_clicked"
QT_MOC_LITERAL(19, 432, 29), // "on_pBtn_airValveClose_clicked"
QT_MOC_LITERAL(20, 462, 23), // "on_pBtn_ledOpen_clicked"
QT_MOC_LITERAL(21, 486, 24), // "on_pBtn_ledClose_clicked"
QT_MOC_LITERAL(22, 511, 27), // "on_pBtn_mainMotorIn_clicked"
QT_MOC_LITERAL(23, 539, 28), // "on_pBtn_mainMotorOut_clicked"
QT_MOC_LITERAL(24, 568, 22), // "on_pBtn_cangIn_clicked"
QT_MOC_LITERAL(25, 591, 23), // "on_pBtn_cangOut_clicked"
QT_MOC_LITERAL(26, 615, 24), // "on_pBtn_pumpOpen_clicked"
QT_MOC_LITERAL(27, 640, 25), // "on_pBtn_pumpClose_clicked"
QT_MOC_LITERAL(28, 666, 28), // "on_pBtn_pumpSpeedSet_clicked"
QT_MOC_LITERAL(29, 695, 23), // "on_pBtn_WBCTest_clicked"
QT_MOC_LITERAL(30, 719, 27), // "on_pBtn_RBCPLT_Test_clicked"
QT_MOC_LITERAL(31, 747, 26), // "on_pBtn_setHGBMode_clicked"
QT_MOC_LITERAL(32, 774, 26), // "on_pBtn_setCRPMode_clicked"
QT_MOC_LITERAL(33, 801, 29), // "on_pBtn_backGroundCRP_clicked"
QT_MOC_LITERAL(34, 831, 23), // "on_pBtn_CRPTest_clicked"
QT_MOC_LITERAL(35, 855, 29), // "on_pBtn_backGroundHGB_clicked"
QT_MOC_LITERAL(36, 885, 23), // "on_pBtn_HGBTest_clicked"
QT_MOC_LITERAL(37, 909, 33), // "on_pBtn_airValveSelfCheck_cli..."
QT_MOC_LITERAL(38, 943, 36), // "on_pBtn_liquidValveSelfCheck_..."
QT_MOC_LITERAL(39, 980, 33), // "on_pBtn_motorOutSelfCheck_cli..."
QT_MOC_LITERAL(40, 1014, 32), // "on_pBtn_motorInSelfCheck_clicked"
QT_MOC_LITERAL(41, 1047, 35), // "on_pBtn_buildPressSelfCheck_c..."
QT_MOC_LITERAL(42, 1083, 33), // "on_pBtn_airLightSelfCheck_cli..."
QT_MOC_LITERAL(43, 1117, 29), // "on_pBtn_pumpSelfCheck_clicked"
QT_MOC_LITERAL(44, 1147, 32), // "on_pBtn_currentSelfCheck_clicked"
QT_MOC_LITERAL(45, 1180, 29) // "on_pBtn_selfDefineMsg_clicked"

    },
    "MainWindow\0Recv_Msg_Handler\0\0Send_TestCmd\0"
    "Button_Send_Msg_Handler\0QPushButton*\0"
    "pBtn\0Config_Init\0on_lineEdit_localPort_textChanged\0"
    "arg1\0on_comboBox_localIP_currentIndexChanged\0"
    "on_lineEdit_localPort_editingFinished\0"
    "on_lineEdit_remoteIP_editingFinished\0"
    "on_lineEdit_remotePort_editingFinished\0"
    "on_pBtn_UDPOpen_clicked\0"
    "on_pBtn_UDPClose_clicked\0"
    "on_pBtn_liquidValveClose_clicked\0"
    "on_pBtn_liquidValveOpen_clicked\0"
    "on_pBtn_airValveOpen_clicked\0"
    "on_pBtn_airValveClose_clicked\0"
    "on_pBtn_ledOpen_clicked\0"
    "on_pBtn_ledClose_clicked\0"
    "on_pBtn_mainMotorIn_clicked\0"
    "on_pBtn_mainMotorOut_clicked\0"
    "on_pBtn_cangIn_clicked\0on_pBtn_cangOut_clicked\0"
    "on_pBtn_pumpOpen_clicked\0"
    "on_pBtn_pumpClose_clicked\0"
    "on_pBtn_pumpSpeedSet_clicked\0"
    "on_pBtn_WBCTest_clicked\0"
    "on_pBtn_RBCPLT_Test_clicked\0"
    "on_pBtn_setHGBMode_clicked\0"
    "on_pBtn_setCRPMode_clicked\0"
    "on_pBtn_backGroundCRP_clicked\0"
    "on_pBtn_CRPTest_clicked\0"
    "on_pBtn_backGroundHGB_clicked\0"
    "on_pBtn_HGBTest_clicked\0"
    "on_pBtn_airValveSelfCheck_clicked\0"
    "on_pBtn_liquidValveSelfCheck_clicked\0"
    "on_pBtn_motorOutSelfCheck_clicked\0"
    "on_pBtn_motorInSelfCheck_clicked\0"
    "on_pBtn_buildPressSelfCheck_clicked\0"
    "on_pBtn_airLightSelfCheck_clicked\0"
    "on_pBtn_pumpSelfCheck_clicked\0"
    "on_pBtn_currentSelfCheck_clicked\0"
    "on_pBtn_selfDefineMsg_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x0a /* Public */,
       3,    0,  220,    2, 0x0a /* Public */,
       4,    1,  221,    2, 0x0a /* Public */,
       7,    0,  224,    2, 0x0a /* Public */,
       8,    1,  225,    2, 0x08 /* Private */,
      10,    1,  228,    2, 0x08 /* Private */,
      11,    0,  231,    2, 0x08 /* Private */,
      12,    0,  232,    2, 0x08 /* Private */,
      13,    0,  233,    2, 0x08 /* Private */,
      14,    0,  234,    2, 0x08 /* Private */,
      15,    0,  235,    2, 0x08 /* Private */,
      16,    0,  236,    2, 0x08 /* Private */,
      17,    0,  237,    2, 0x08 /* Private */,
      18,    0,  238,    2, 0x08 /* Private */,
      19,    0,  239,    2, 0x08 /* Private */,
      20,    0,  240,    2, 0x08 /* Private */,
      21,    0,  241,    2, 0x08 /* Private */,
      22,    0,  242,    2, 0x08 /* Private */,
      23,    0,  243,    2, 0x08 /* Private */,
      24,    0,  244,    2, 0x08 /* Private */,
      25,    0,  245,    2, 0x08 /* Private */,
      26,    0,  246,    2, 0x08 /* Private */,
      27,    0,  247,    2, 0x08 /* Private */,
      28,    0,  248,    2, 0x08 /* Private */,
      29,    0,  249,    2, 0x08 /* Private */,
      30,    0,  250,    2, 0x08 /* Private */,
      31,    0,  251,    2, 0x08 /* Private */,
      32,    0,  252,    2, 0x08 /* Private */,
      33,    0,  253,    2, 0x08 /* Private */,
      34,    0,  254,    2, 0x08 /* Private */,
      35,    0,  255,    2, 0x08 /* Private */,
      36,    0,  256,    2, 0x08 /* Private */,
      37,    0,  257,    2, 0x08 /* Private */,
      38,    0,  258,    2, 0x08 /* Private */,
      39,    0,  259,    2, 0x08 /* Private */,
      40,    0,  260,    2, 0x08 /* Private */,
      41,    0,  261,    2, 0x08 /* Private */,
      42,    0,  262,    2, 0x08 /* Private */,
      43,    0,  263,    2, 0x08 /* Private */,
      44,    0,  264,    2, 0x08 /* Private */,
      45,    0,  265,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        case 0: _t->Recv_Msg_Handler(); break;
        case 1: _t->Send_TestCmd(); break;
        case 2: _t->Button_Send_Msg_Handler((*reinterpret_cast< QPushButton*(*)>(_a[1]))); break;
        case 3: _t->Config_Init(); break;
        case 4: _t->on_lineEdit_localPort_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_comboBox_localIP_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_lineEdit_localPort_editingFinished(); break;
        case 7: _t->on_lineEdit_remoteIP_editingFinished(); break;
        case 8: _t->on_lineEdit_remotePort_editingFinished(); break;
        case 9: _t->on_pBtn_UDPOpen_clicked(); break;
        case 10: _t->on_pBtn_UDPClose_clicked(); break;
        case 11: _t->on_pBtn_liquidValveClose_clicked(); break;
        case 12: _t->on_pBtn_liquidValveOpen_clicked(); break;
        case 13: _t->on_pBtn_airValveOpen_clicked(); break;
        case 14: _t->on_pBtn_airValveClose_clicked(); break;
        case 15: _t->on_pBtn_ledOpen_clicked(); break;
        case 16: _t->on_pBtn_ledClose_clicked(); break;
        case 17: _t->on_pBtn_mainMotorIn_clicked(); break;
        case 18: _t->on_pBtn_mainMotorOut_clicked(); break;
        case 19: _t->on_pBtn_cangIn_clicked(); break;
        case 20: _t->on_pBtn_cangOut_clicked(); break;
        case 21: _t->on_pBtn_pumpOpen_clicked(); break;
        case 22: _t->on_pBtn_pumpClose_clicked(); break;
        case 23: _t->on_pBtn_pumpSpeedSet_clicked(); break;
        case 24: _t->on_pBtn_WBCTest_clicked(); break;
        case 25: _t->on_pBtn_RBCPLT_Test_clicked(); break;
        case 26: _t->on_pBtn_setHGBMode_clicked(); break;
        case 27: _t->on_pBtn_setCRPMode_clicked(); break;
        case 28: _t->on_pBtn_backGroundCRP_clicked(); break;
        case 29: _t->on_pBtn_CRPTest_clicked(); break;
        case 30: _t->on_pBtn_backGroundHGB_clicked(); break;
        case 31: _t->on_pBtn_HGBTest_clicked(); break;
        case 32: _t->on_pBtn_airValveSelfCheck_clicked(); break;
        case 33: _t->on_pBtn_liquidValveSelfCheck_clicked(); break;
        case 34: _t->on_pBtn_motorOutSelfCheck_clicked(); break;
        case 35: _t->on_pBtn_motorInSelfCheck_clicked(); break;
        case 36: _t->on_pBtn_buildPressSelfCheck_clicked(); break;
        case 37: _t->on_pBtn_airLightSelfCheck_clicked(); break;
        case 38: _t->on_pBtn_pumpSelfCheck_clicked(); break;
        case 39: _t->on_pBtn_currentSelfCheck_clicked(); break;
        case 40: _t->on_pBtn_selfDefineMsg_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPushButton* >(); break;
            }
            break;
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
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
