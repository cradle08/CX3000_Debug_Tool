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
    QByteArrayData data[69];
    char stringdata0[1919];
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
QT_MOC_LITERAL(45, 1180, 29), // "on_pBtn_selfDefineMsg_clicked"
QT_MOC_LITERAL(46, 1210, 29), // "on_pBtn_fixMotorClose_clicked"
QT_MOC_LITERAL(47, 1240, 28), // "on_pBtn_fixMotorOpen_clicked"
QT_MOC_LITERAL(48, 1269, 25), // "on_pBtn_ledSelect_clicked"
QT_MOC_LITERAL(49, 1295, 36), // "on_pBtn_mixingMotorSelfCheck_..."
QT_MOC_LITERAL(50, 1332, 34), // "on_pBtn_turnMotorSelfCheck_cl..."
QT_MOC_LITERAL(51, 1367, 32), // "on_pBtn_getPressAddValue_clicked"
QT_MOC_LITERAL(52, 1400, 36), // "on_pBtn_getOutInStepAddValue_..."
QT_MOC_LITERAL(53, 1437, 32), // "on_pBtn_setAddPressValue_clicked"
QT_MOC_LITERAL(54, 1470, 36), // "on_pBtn_setOutInStepAddValue_..."
QT_MOC_LITERAL(55, 1507, 28), // "on_pBtn_getPumpSpeed_clicked"
QT_MOC_LITERAL(56, 1536, 28), // "on_pBtn_setPumpSpeed_clicked"
QT_MOC_LITERAL(57, 1565, 28), // "on_pBtn_getXKVoltage_clicked"
QT_MOC_LITERAL(58, 1594, 33), // "on_pBtn_getCurrentVoltage_cli..."
QT_MOC_LITERAL(59, 1628, 30), // "on_pBtn_getMicroSwitch_clicked"
QT_MOC_LITERAL(60, 1659, 21), // "on_pBtn_getOC_clicked"
QT_MOC_LITERAL(61, 1681, 32), // "on_pBtn_getTouSheVoltage_clicked"
QT_MOC_LITERAL(62, 1714, 32), // "on_pBtn_getSanSheVoltage_clicked"
QT_MOC_LITERAL(63, 1747, 27), // "on_pBtn_getElectrol_clicked"
QT_MOC_LITERAL(64, 1775, 29), // "on_pBtn_getPressValue_clicked"
QT_MOC_LITERAL(65, 1805, 22), // "on_pBt_getTemp_clicked"
QT_MOC_LITERAL(66, 1828, 26), // "on_pBtn_getVersion_clicked"
QT_MOC_LITERAL(67, 1855, 30), // "on_pBtn_getBioTestMode_clicked"
QT_MOC_LITERAL(68, 1886, 32) // "on_pBtn_setPressAddValue_clicked"

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
    "on_pBtn_selfDefineMsg_clicked\0"
    "on_pBtn_fixMotorClose_clicked\0"
    "on_pBtn_fixMotorOpen_clicked\0"
    "on_pBtn_ledSelect_clicked\0"
    "on_pBtn_mixingMotorSelfCheck_clicked\0"
    "on_pBtn_turnMotorSelfCheck_clicked\0"
    "on_pBtn_getPressAddValue_clicked\0"
    "on_pBtn_getOutInStepAddValue_clicked\0"
    "on_pBtn_setAddPressValue_clicked\0"
    "on_pBtn_setOutInStepAddValue_clicked\0"
    "on_pBtn_getPumpSpeed_clicked\0"
    "on_pBtn_setPumpSpeed_clicked\0"
    "on_pBtn_getXKVoltage_clicked\0"
    "on_pBtn_getCurrentVoltage_clicked\0"
    "on_pBtn_getMicroSwitch_clicked\0"
    "on_pBtn_getOC_clicked\0"
    "on_pBtn_getTouSheVoltage_clicked\0"
    "on_pBtn_getSanSheVoltage_clicked\0"
    "on_pBtn_getElectrol_clicked\0"
    "on_pBtn_getPressValue_clicked\0"
    "on_pBt_getTemp_clicked\0"
    "on_pBtn_getVersion_clicked\0"
    "on_pBtn_getBioTestMode_clicked\0"
    "on_pBtn_setPressAddValue_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      64,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  334,    2, 0x0a /* Public */,
       3,    0,  335,    2, 0x0a /* Public */,
       4,    1,  336,    2, 0x0a /* Public */,
       7,    0,  339,    2, 0x0a /* Public */,
       8,    1,  340,    2, 0x08 /* Private */,
      10,    1,  343,    2, 0x08 /* Private */,
      11,    0,  346,    2, 0x08 /* Private */,
      12,    0,  347,    2, 0x08 /* Private */,
      13,    0,  348,    2, 0x08 /* Private */,
      14,    0,  349,    2, 0x08 /* Private */,
      15,    0,  350,    2, 0x08 /* Private */,
      16,    0,  351,    2, 0x08 /* Private */,
      17,    0,  352,    2, 0x08 /* Private */,
      18,    0,  353,    2, 0x08 /* Private */,
      19,    0,  354,    2, 0x08 /* Private */,
      20,    0,  355,    2, 0x08 /* Private */,
      21,    0,  356,    2, 0x08 /* Private */,
      22,    0,  357,    2, 0x08 /* Private */,
      23,    0,  358,    2, 0x08 /* Private */,
      24,    0,  359,    2, 0x08 /* Private */,
      25,    0,  360,    2, 0x08 /* Private */,
      26,    0,  361,    2, 0x08 /* Private */,
      27,    0,  362,    2, 0x08 /* Private */,
      28,    0,  363,    2, 0x08 /* Private */,
      29,    0,  364,    2, 0x08 /* Private */,
      30,    0,  365,    2, 0x08 /* Private */,
      31,    0,  366,    2, 0x08 /* Private */,
      32,    0,  367,    2, 0x08 /* Private */,
      33,    0,  368,    2, 0x08 /* Private */,
      34,    0,  369,    2, 0x08 /* Private */,
      35,    0,  370,    2, 0x08 /* Private */,
      36,    0,  371,    2, 0x08 /* Private */,
      37,    0,  372,    2, 0x08 /* Private */,
      38,    0,  373,    2, 0x08 /* Private */,
      39,    0,  374,    2, 0x08 /* Private */,
      40,    0,  375,    2, 0x08 /* Private */,
      41,    0,  376,    2, 0x08 /* Private */,
      42,    0,  377,    2, 0x08 /* Private */,
      43,    0,  378,    2, 0x08 /* Private */,
      44,    0,  379,    2, 0x08 /* Private */,
      45,    0,  380,    2, 0x08 /* Private */,
      46,    0,  381,    2, 0x08 /* Private */,
      47,    0,  382,    2, 0x08 /* Private */,
      48,    0,  383,    2, 0x08 /* Private */,
      49,    0,  384,    2, 0x08 /* Private */,
      50,    0,  385,    2, 0x08 /* Private */,
      51,    0,  386,    2, 0x08 /* Private */,
      52,    0,  387,    2, 0x08 /* Private */,
      53,    0,  388,    2, 0x08 /* Private */,
      54,    0,  389,    2, 0x08 /* Private */,
      55,    0,  390,    2, 0x08 /* Private */,
      56,    0,  391,    2, 0x08 /* Private */,
      57,    0,  392,    2, 0x08 /* Private */,
      58,    0,  393,    2, 0x08 /* Private */,
      59,    0,  394,    2, 0x08 /* Private */,
      60,    0,  395,    2, 0x08 /* Private */,
      61,    0,  396,    2, 0x08 /* Private */,
      62,    0,  397,    2, 0x08 /* Private */,
      63,    0,  398,    2, 0x08 /* Private */,
      64,    0,  399,    2, 0x08 /* Private */,
      65,    0,  400,    2, 0x08 /* Private */,
      66,    0,  401,    2, 0x08 /* Private */,
      67,    0,  402,    2, 0x08 /* Private */,
      68,    0,  403,    2, 0x08 /* Private */,

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
        case 41: _t->on_pBtn_fixMotorClose_clicked(); break;
        case 42: _t->on_pBtn_fixMotorOpen_clicked(); break;
        case 43: _t->on_pBtn_ledSelect_clicked(); break;
        case 44: _t->on_pBtn_mixingMotorSelfCheck_clicked(); break;
        case 45: _t->on_pBtn_turnMotorSelfCheck_clicked(); break;
        case 46: _t->on_pBtn_getPressAddValue_clicked(); break;
        case 47: _t->on_pBtn_getOutInStepAddValue_clicked(); break;
        case 48: _t->on_pBtn_setAddPressValue_clicked(); break;
        case 49: _t->on_pBtn_setOutInStepAddValue_clicked(); break;
        case 50: _t->on_pBtn_getPumpSpeed_clicked(); break;
        case 51: _t->on_pBtn_setPumpSpeed_clicked(); break;
        case 52: _t->on_pBtn_getXKVoltage_clicked(); break;
        case 53: _t->on_pBtn_getCurrentVoltage_clicked(); break;
        case 54: _t->on_pBtn_getMicroSwitch_clicked(); break;
        case 55: _t->on_pBtn_getOC_clicked(); break;
        case 56: _t->on_pBtn_getTouSheVoltage_clicked(); break;
        case 57: _t->on_pBtn_getSanSheVoltage_clicked(); break;
        case 58: _t->on_pBtn_getElectrol_clicked(); break;
        case 59: _t->on_pBtn_getPressValue_clicked(); break;
        case 60: _t->on_pBt_getTemp_clicked(); break;
        case 61: _t->on_pBtn_getVersion_clicked(); break;
        case 62: _t->on_pBtn_getBioTestMode_clicked(); break;
        case 63: _t->on_pBtn_setPressAddValue_clicked(); break;
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
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
