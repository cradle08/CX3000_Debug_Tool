/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *gBx_Control;
    QComboBox *comboBox_localIP;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_localPort;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_remotePort;
    QLineEdit *lineEdit_remoteIP;
    QTabWidget *tabWidget;
    QWidget *widget_Ctrol;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_6;
    QTextEdit *textEdit_backMsgCtrolMenu;
    QTextEdit *textEdit_3;
    QTabWidget *tabWidget_Status;
    QWidget *tab_Ctrol;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_11;
    QPushButton *pBtn_ledClose;
    QPushButton *pBtn_ledMotorSelect;
    QComboBox *comboBox_ledNum;
    QPushButton *pBtn_ledOpen;
    QLabel *label_6;
    QPushButton *pBtn_turnMotorReset;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout;
    QPushButton *pBtn_WBCTest;
    QPushButton *pBtn_RBCPLT_Test;
    QPushButton *pBtn_HGBTest;
    QPushButton *pBtn_CRPTest;
    QPushButton *pBtn_setHGBMode;
    QPushButton *pBtn_setCRPMode;
    QPushButton *pBtn_backGroundCRP;
    QPushButton *pBtn_backGroundHGB;
    QPushButton *pBtn_getSanSheVoltage;
    QPushButton *pBtn_getTouSheVoltage;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QPushButton *pBtn_airValveSelfCheck;
    QPushButton *pBtn_liquidValveSelfCheck;
    QPushButton *pBtn_motorOutSelfCheck;
    QPushButton *pBtn_motorInSelfCheck;
    QPushButton *pBtn_buildPressSelfCheck;
    QPushButton *pBtn_airLightSelfCheck;
    QPushButton *pBtn_pumpSelfCheck;
    QPushButton *pBtn_currentSelfCheck;
    QPushButton *pBtn_mixingMotorSelfCheck;
    QPushButton *pBtn_turnMotorSelfCheck;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_10;
    QPushButton *pBtn_mainMotorIn;
    QPushButton *pBtn_mainMotorOut;
    QPushButton *pBtn_fixMotorClose;
    QPushButton *pBtn_liquidValveOpen;
    QPushButton *pBtn_airValveOpen;
    QPushButton *pBtn_airValveClose;
    QPushButton *pBtn_fixMotorOpen;
    QPushButton *pBtn_cangOut;
    QPushButton *pBtn_liquidValveClose;
    QPushButton *pBtn_cangIn;
    QPushButton *pBtn_pumpOpen;
    QPushButton *pBtn_pumpClose;
    QPushButton *pBtn_mixingMotorOpen;
    QPushButton *pBtn_mixingMotorClose;
    QWidget *tab_Pameter;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_5;
    QPushButton *pBtn_getPressValue;
    QPushButton *pBtn_getMicroSwitch;
    QPushButton *pBtn_getElectrol;
    QPushButton *pBtn_getVersion;
    QPushButton *pBtn_getXKVoltage;
    QPushButton *pBtn_getOC;
    QPushButton *pBt_getTemp;
    QPushButton *pBtn_getCurrentVoltage;
    QPushButton *pBtn_getBioTestMode;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QPushButton *pBtn_getPressAddValue;
    QPushButton *pBtn_setPressAddValue;
    QSpinBox *spinBox_pressAddValue;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_9;
    QLabel *label_10;
    QPushButton *pBtn_setDRegister;
    QComboBox *comboBox_DRegister;
    QPushButton *pBtn_getDRegister;
    QLabel *label_7;
    QSpinBox *spinBox_DRegister;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QPushButton *pBtn_getOutInStepAddValue;
    QPushButton *pBtn_setOutInStepAddValue;
    QSpinBox *spinBox_outinStepAddValue;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_7;
    QPushButton *pBtn_setPumpSpeed;
    QPushButton *pBtn_getPumpSpeed;
    QLabel *label_8;
    QSpinBox *spinBox_pumpSpeed;
    QWidget *tab_WBC;
    QWidget *tab_RBCPLT;
    QWidget *tab_bioTest;
    QWidget *tab_mcuUpdate;
    QPushButton *pBtn_UDPOpen;
    QPushButton *pBtn_UDPClose;
    QGroupBox *groupBox_selfMsg;
    QPushButton *pBtn_selfDefineMsg;
    QTextEdit *textEdit_selfDefineMsg;
    QMenuBar *menuBar;
    QMenu *menuTool;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1060, 465);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gBx_Control = new QGroupBox(centralWidget);
        gBx_Control->setObjectName(QString::fromUtf8("gBx_Control"));
        gBx_Control->setGeometry(QRect(0, 10, 181, 101));
        comboBox_localIP = new QComboBox(gBx_Control);
        comboBox_localIP->setObjectName(QString::fromUtf8("comboBox_localIP"));
        comboBox_localIP->setGeometry(QRect(60, 30, 111, 22));
        label = new QLabel(gBx_Control);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 51, 16));
        label_2 = new QLabel(gBx_Control);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 41, 21));
        lineEdit_localPort = new QLineEdit(gBx_Control);
        lineEdit_localPort->setObjectName(QString::fromUtf8("lineEdit_localPort"));
        lineEdit_localPort->setGeometry(QRect(70, 70, 101, 20));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 120, 181, 101));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 51, 16));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 30, 41, 21));
        lineEdit_remotePort = new QLineEdit(groupBox_2);
        lineEdit_remotePort->setObjectName(QString::fromUtf8("lineEdit_remotePort"));
        lineEdit_remotePort->setGeometry(QRect(70, 70, 101, 20));
        lineEdit_remoteIP = new QLineEdit(groupBox_2);
        lineEdit_remoteIP->setObjectName(QString::fromUtf8("lineEdit_remoteIP"));
        lineEdit_remoteIP->setGeometry(QRect(70, 30, 101, 20));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(193, 0, 861, 401));
        widget_Ctrol = new QWidget();
        widget_Ctrol->setObjectName(QString::fromUtf8("widget_Ctrol"));
        groupBox_8 = new QGroupBox(widget_Ctrol);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(510, 10, 341, 371));
        gridLayout_6 = new QGridLayout(groupBox_8);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        textEdit_backMsgCtrolMenu = new QTextEdit(groupBox_8);
        textEdit_backMsgCtrolMenu->setObjectName(QString::fromUtf8("textEdit_backMsgCtrolMenu"));

        gridLayout_6->addWidget(textEdit_backMsgCtrolMenu, 0, 0, 1, 1);

        textEdit_3 = new QTextEdit(widget_Ctrol);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(-230, 452, 311, 29));
        tabWidget_Status = new QTabWidget(widget_Ctrol);
        tabWidget_Status->setObjectName(QString::fromUtf8("tabWidget_Status"));
        tabWidget_Status->setGeometry(QRect(10, 0, 491, 381));
        tab_Ctrol = new QWidget();
        tab_Ctrol->setObjectName(QString::fromUtf8("tab_Ctrol"));
        groupBox_4 = new QGroupBox(tab_Ctrol);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 160, 131, 191));
        gridLayout_11 = new QGridLayout(groupBox_4);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        pBtn_ledClose = new QPushButton(groupBox_4);
        pBtn_ledClose->setObjectName(QString::fromUtf8("pBtn_ledClose"));

        gridLayout_11->addWidget(pBtn_ledClose, 3, 0, 1, 1);

        pBtn_ledMotorSelect = new QPushButton(groupBox_4);
        pBtn_ledMotorSelect->setObjectName(QString::fromUtf8("pBtn_ledMotorSelect"));

        gridLayout_11->addWidget(pBtn_ledMotorSelect, 4, 0, 1, 1);

        comboBox_ledNum = new QComboBox(groupBox_4);
        comboBox_ledNum->setObjectName(QString::fromUtf8("comboBox_ledNum"));
        comboBox_ledNum->setFocusPolicy(Qt::WheelFocus);

        gridLayout_11->addWidget(comboBox_ledNum, 1, 0, 1, 1);

        pBtn_ledOpen = new QPushButton(groupBox_4);
        pBtn_ledOpen->setObjectName(QString::fromUtf8("pBtn_ledOpen"));

        gridLayout_11->addWidget(pBtn_ledOpen, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_11->addWidget(label_6, 0, 0, 1, 1);

        pBtn_turnMotorReset = new QPushButton(groupBox_4);
        pBtn_turnMotorReset->setObjectName(QString::fromUtf8("pBtn_turnMotorReset"));
        pBtn_turnMotorReset->setContextMenuPolicy(Qt::PreventContextMenu);

        gridLayout_11->addWidget(pBtn_turnMotorReset, 5, 0, 1, 1);

        groupBox_7 = new QGroupBox(tab_Ctrol);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(380, 0, 101, 351));
        verticalLayout = new QVBoxLayout(groupBox_7);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pBtn_WBCTest = new QPushButton(groupBox_7);
        pBtn_WBCTest->setObjectName(QString::fromUtf8("pBtn_WBCTest"));

        verticalLayout->addWidget(pBtn_WBCTest);

        pBtn_RBCPLT_Test = new QPushButton(groupBox_7);
        pBtn_RBCPLT_Test->setObjectName(QString::fromUtf8("pBtn_RBCPLT_Test"));

        verticalLayout->addWidget(pBtn_RBCPLT_Test);

        pBtn_HGBTest = new QPushButton(groupBox_7);
        pBtn_HGBTest->setObjectName(QString::fromUtf8("pBtn_HGBTest"));

        verticalLayout->addWidget(pBtn_HGBTest);

        pBtn_CRPTest = new QPushButton(groupBox_7);
        pBtn_CRPTest->setObjectName(QString::fromUtf8("pBtn_CRPTest"));

        verticalLayout->addWidget(pBtn_CRPTest);

        pBtn_setHGBMode = new QPushButton(groupBox_7);
        pBtn_setHGBMode->setObjectName(QString::fromUtf8("pBtn_setHGBMode"));

        verticalLayout->addWidget(pBtn_setHGBMode);

        pBtn_setCRPMode = new QPushButton(groupBox_7);
        pBtn_setCRPMode->setObjectName(QString::fromUtf8("pBtn_setCRPMode"));

        verticalLayout->addWidget(pBtn_setCRPMode);

        pBtn_backGroundCRP = new QPushButton(groupBox_7);
        pBtn_backGroundCRP->setObjectName(QString::fromUtf8("pBtn_backGroundCRP"));

        verticalLayout->addWidget(pBtn_backGroundCRP);

        pBtn_backGroundHGB = new QPushButton(groupBox_7);
        pBtn_backGroundHGB->setObjectName(QString::fromUtf8("pBtn_backGroundHGB"));

        verticalLayout->addWidget(pBtn_backGroundHGB);

        pBtn_getSanSheVoltage = new QPushButton(groupBox_7);
        pBtn_getSanSheVoltage->setObjectName(QString::fromUtf8("pBtn_getSanSheVoltage"));

        verticalLayout->addWidget(pBtn_getSanSheVoltage);

        pBtn_getTouSheVoltage = new QPushButton(groupBox_7);
        pBtn_getTouSheVoltage->setObjectName(QString::fromUtf8("pBtn_getTouSheVoltage"));

        verticalLayout->addWidget(pBtn_getTouSheVoltage);

        groupBox_3 = new QGroupBox(tab_Ctrol);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(140, 160, 231, 191));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pBtn_airValveSelfCheck = new QPushButton(groupBox_3);
        pBtn_airValveSelfCheck->setObjectName(QString::fromUtf8("pBtn_airValveSelfCheck"));

        gridLayout_2->addWidget(pBtn_airValveSelfCheck, 0, 0, 1, 1);

        pBtn_liquidValveSelfCheck = new QPushButton(groupBox_3);
        pBtn_liquidValveSelfCheck->setObjectName(QString::fromUtf8("pBtn_liquidValveSelfCheck"));

        gridLayout_2->addWidget(pBtn_liquidValveSelfCheck, 0, 1, 1, 1);

        pBtn_motorOutSelfCheck = new QPushButton(groupBox_3);
        pBtn_motorOutSelfCheck->setObjectName(QString::fromUtf8("pBtn_motorOutSelfCheck"));

        gridLayout_2->addWidget(pBtn_motorOutSelfCheck, 1, 0, 1, 1);

        pBtn_motorInSelfCheck = new QPushButton(groupBox_3);
        pBtn_motorInSelfCheck->setObjectName(QString::fromUtf8("pBtn_motorInSelfCheck"));

        gridLayout_2->addWidget(pBtn_motorInSelfCheck, 1, 1, 1, 1);

        pBtn_buildPressSelfCheck = new QPushButton(groupBox_3);
        pBtn_buildPressSelfCheck->setObjectName(QString::fromUtf8("pBtn_buildPressSelfCheck"));

        gridLayout_2->addWidget(pBtn_buildPressSelfCheck, 2, 0, 1, 1);

        pBtn_airLightSelfCheck = new QPushButton(groupBox_3);
        pBtn_airLightSelfCheck->setObjectName(QString::fromUtf8("pBtn_airLightSelfCheck"));

        gridLayout_2->addWidget(pBtn_airLightSelfCheck, 2, 1, 1, 1);

        pBtn_pumpSelfCheck = new QPushButton(groupBox_3);
        pBtn_pumpSelfCheck->setObjectName(QString::fromUtf8("pBtn_pumpSelfCheck"));

        gridLayout_2->addWidget(pBtn_pumpSelfCheck, 3, 0, 1, 1);

        pBtn_currentSelfCheck = new QPushButton(groupBox_3);
        pBtn_currentSelfCheck->setObjectName(QString::fromUtf8("pBtn_currentSelfCheck"));

        gridLayout_2->addWidget(pBtn_currentSelfCheck, 3, 1, 1, 1);

        pBtn_mixingMotorSelfCheck = new QPushButton(groupBox_3);
        pBtn_mixingMotorSelfCheck->setObjectName(QString::fromUtf8("pBtn_mixingMotorSelfCheck"));

        gridLayout_2->addWidget(pBtn_mixingMotorSelfCheck, 4, 0, 1, 1);

        pBtn_turnMotorSelfCheck = new QPushButton(groupBox_3);
        pBtn_turnMotorSelfCheck->setObjectName(QString::fromUtf8("pBtn_turnMotorSelfCheck"));

        gridLayout_2->addWidget(pBtn_turnMotorSelfCheck, 4, 1, 1, 1);

        groupBox_6 = new QGroupBox(tab_Ctrol);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 0, 371, 151));
        gridLayout_10 = new QGridLayout(groupBox_6);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        pBtn_mainMotorIn = new QPushButton(groupBox_6);
        pBtn_mainMotorIn->setObjectName(QString::fromUtf8("pBtn_mainMotorIn"));

        gridLayout_10->addWidget(pBtn_mainMotorIn, 2, 0, 1, 1);

        pBtn_mainMotorOut = new QPushButton(groupBox_6);
        pBtn_mainMotorOut->setObjectName(QString::fromUtf8("pBtn_mainMotorOut"));

        gridLayout_10->addWidget(pBtn_mainMotorOut, 2, 1, 1, 1);

        pBtn_fixMotorClose = new QPushButton(groupBox_6);
        pBtn_fixMotorClose->setObjectName(QString::fromUtf8("pBtn_fixMotorClose"));

        gridLayout_10->addWidget(pBtn_fixMotorClose, 4, 0, 1, 1);

        pBtn_liquidValveOpen = new QPushButton(groupBox_6);
        pBtn_liquidValveOpen->setObjectName(QString::fromUtf8("pBtn_liquidValveOpen"));

        gridLayout_10->addWidget(pBtn_liquidValveOpen, 0, 0, 1, 1);

        pBtn_airValveOpen = new QPushButton(groupBox_6);
        pBtn_airValveOpen->setObjectName(QString::fromUtf8("pBtn_airValveOpen"));

        gridLayout_10->addWidget(pBtn_airValveOpen, 0, 2, 1, 1);

        pBtn_airValveClose = new QPushButton(groupBox_6);
        pBtn_airValveClose->setObjectName(QString::fromUtf8("pBtn_airValveClose"));

        gridLayout_10->addWidget(pBtn_airValveClose, 0, 3, 1, 1);

        pBtn_fixMotorOpen = new QPushButton(groupBox_6);
        pBtn_fixMotorOpen->setObjectName(QString::fromUtf8("pBtn_fixMotorOpen"));

        gridLayout_10->addWidget(pBtn_fixMotorOpen, 4, 1, 1, 1);

        pBtn_cangOut = new QPushButton(groupBox_6);
        pBtn_cangOut->setObjectName(QString::fromUtf8("pBtn_cangOut"));

        gridLayout_10->addWidget(pBtn_cangOut, 1, 1, 1, 1);

        pBtn_liquidValveClose = new QPushButton(groupBox_6);
        pBtn_liquidValveClose->setObjectName(QString::fromUtf8("pBtn_liquidValveClose"));

        gridLayout_10->addWidget(pBtn_liquidValveClose, 0, 1, 1, 1);

        pBtn_cangIn = new QPushButton(groupBox_6);
        pBtn_cangIn->setObjectName(QString::fromUtf8("pBtn_cangIn"));

        gridLayout_10->addWidget(pBtn_cangIn, 1, 0, 1, 1);

        pBtn_pumpOpen = new QPushButton(groupBox_6);
        pBtn_pumpOpen->setObjectName(QString::fromUtf8("pBtn_pumpOpen"));

        gridLayout_10->addWidget(pBtn_pumpOpen, 1, 2, 1, 1);

        pBtn_pumpClose = new QPushButton(groupBox_6);
        pBtn_pumpClose->setObjectName(QString::fromUtf8("pBtn_pumpClose"));

        gridLayout_10->addWidget(pBtn_pumpClose, 1, 3, 1, 1);

        pBtn_mixingMotorOpen = new QPushButton(groupBox_6);
        pBtn_mixingMotorOpen->setObjectName(QString::fromUtf8("pBtn_mixingMotorOpen"));

        gridLayout_10->addWidget(pBtn_mixingMotorOpen, 2, 2, 1, 1);

        pBtn_mixingMotorClose = new QPushButton(groupBox_6);
        pBtn_mixingMotorClose->setObjectName(QString::fromUtf8("pBtn_mixingMotorClose"));

        gridLayout_10->addWidget(pBtn_mixingMotorClose, 2, 3, 1, 1);

        tabWidget_Status->addTab(tab_Ctrol, QString());
        tab_Pameter = new QWidget();
        tab_Pameter->setObjectName(QString::fromUtf8("tab_Pameter"));
        groupBox_11 = new QGroupBox(tab_Pameter);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(0, 140, 241, 211));
        gridLayout_5 = new QGridLayout(groupBox_11);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pBtn_getPressValue = new QPushButton(groupBox_11);
        pBtn_getPressValue->setObjectName(QString::fromUtf8("pBtn_getPressValue"));

        gridLayout_5->addWidget(pBtn_getPressValue, 2, 2, 1, 1);

        pBtn_getMicroSwitch = new QPushButton(groupBox_11);
        pBtn_getMicroSwitch->setObjectName(QString::fromUtf8("pBtn_getMicroSwitch"));

        gridLayout_5->addWidget(pBtn_getMicroSwitch, 1, 0, 1, 1);

        pBtn_getElectrol = new QPushButton(groupBox_11);
        pBtn_getElectrol->setObjectName(QString::fromUtf8("pBtn_getElectrol"));

        gridLayout_5->addWidget(pBtn_getElectrol, 2, 0, 1, 1);

        pBtn_getVersion = new QPushButton(groupBox_11);
        pBtn_getVersion->setObjectName(QString::fromUtf8("pBtn_getVersion"));

        gridLayout_5->addWidget(pBtn_getVersion, 3, 2, 1, 1);

        pBtn_getXKVoltage = new QPushButton(groupBox_11);
        pBtn_getXKVoltage->setObjectName(QString::fromUtf8("pBtn_getXKVoltage"));

        gridLayout_5->addWidget(pBtn_getXKVoltage, 0, 0, 1, 1);

        pBtn_getOC = new QPushButton(groupBox_11);
        pBtn_getOC->setObjectName(QString::fromUtf8("pBtn_getOC"));

        gridLayout_5->addWidget(pBtn_getOC, 1, 2, 1, 1);

        pBt_getTemp = new QPushButton(groupBox_11);
        pBt_getTemp->setObjectName(QString::fromUtf8("pBt_getTemp"));

        gridLayout_5->addWidget(pBt_getTemp, 3, 0, 1, 1);

        pBtn_getCurrentVoltage = new QPushButton(groupBox_11);
        pBtn_getCurrentVoltage->setObjectName(QString::fromUtf8("pBtn_getCurrentVoltage"));

        gridLayout_5->addWidget(pBtn_getCurrentVoltage, 0, 2, 1, 1);

        pBtn_getBioTestMode = new QPushButton(groupBox_11);
        pBtn_getBioTestMode->setObjectName(QString::fromUtf8("pBtn_getBioTestMode"));

        gridLayout_5->addWidget(pBtn_getBioTestMode, 4, 0, 1, 1);

        groupBox_9 = new QGroupBox(tab_Pameter);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(0, 0, 111, 131));
        gridLayout_3 = new QGridLayout(groupBox_9);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(groupBox_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        pBtn_getPressAddValue = new QPushButton(groupBox_9);
        pBtn_getPressAddValue->setObjectName(QString::fromUtf8("pBtn_getPressAddValue"));

        gridLayout_3->addWidget(pBtn_getPressAddValue, 0, 0, 1, 1);

        pBtn_setPressAddValue = new QPushButton(groupBox_9);
        pBtn_setPressAddValue->setObjectName(QString::fromUtf8("pBtn_setPressAddValue"));

        gridLayout_3->addWidget(pBtn_setPressAddValue, 3, 0, 1, 1);

        spinBox_pressAddValue = new QSpinBox(groupBox_9);
        spinBox_pressAddValue->setObjectName(QString::fromUtf8("spinBox_pressAddValue"));

        gridLayout_3->addWidget(spinBox_pressAddValue, 2, 0, 1, 1);

        groupBox_14 = new QGroupBox(tab_Pameter);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(250, 140, 111, 211));
        gridLayout_9 = new QGridLayout(groupBox_14);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_10 = new QLabel(groupBox_14);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_9->addWidget(label_10, 0, 0, 1, 1);

        pBtn_setDRegister = new QPushButton(groupBox_14);
        pBtn_setDRegister->setObjectName(QString::fromUtf8("pBtn_setDRegister"));

        gridLayout_9->addWidget(pBtn_setDRegister, 5, 0, 1, 1);

        comboBox_DRegister = new QComboBox(groupBox_14);
        comboBox_DRegister->setObjectName(QString::fromUtf8("comboBox_DRegister"));

        gridLayout_9->addWidget(comboBox_DRegister, 1, 0, 1, 1);

        pBtn_getDRegister = new QPushButton(groupBox_14);
        pBtn_getDRegister->setObjectName(QString::fromUtf8("pBtn_getDRegister"));

        gridLayout_9->addWidget(pBtn_getDRegister, 2, 0, 1, 1);

        label_7 = new QLabel(groupBox_14);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_9->addWidget(label_7, 3, 0, 1, 1);

        spinBox_DRegister = new QSpinBox(groupBox_14);
        spinBox_DRegister->setObjectName(QString::fromUtf8("spinBox_DRegister"));
        spinBox_DRegister->setMaximum(255);
        spinBox_DRegister->setValue(50);

        gridLayout_9->addWidget(spinBox_DRegister, 4, 0, 1, 1);

        groupBox_10 = new QGroupBox(tab_Pameter);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(120, 0, 121, 131));
        gridLayout_4 = new QGridLayout(groupBox_10);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_9 = new QLabel(groupBox_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        pBtn_getOutInStepAddValue = new QPushButton(groupBox_10);
        pBtn_getOutInStepAddValue->setObjectName(QString::fromUtf8("pBtn_getOutInStepAddValue"));

        gridLayout_4->addWidget(pBtn_getOutInStepAddValue, 0, 0, 1, 1);

        pBtn_setOutInStepAddValue = new QPushButton(groupBox_10);
        pBtn_setOutInStepAddValue->setObjectName(QString::fromUtf8("pBtn_setOutInStepAddValue"));

        gridLayout_4->addWidget(pBtn_setOutInStepAddValue, 3, 0, 1, 1);

        spinBox_outinStepAddValue = new QSpinBox(groupBox_10);
        spinBox_outinStepAddValue->setObjectName(QString::fromUtf8("spinBox_outinStepAddValue"));
        spinBox_outinStepAddValue->setMaximum(65535);

        gridLayout_4->addWidget(spinBox_outinStepAddValue, 2, 0, 1, 1);

        groupBox_13 = new QGroupBox(tab_Pameter);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(250, 0, 111, 131));
        gridLayout_7 = new QGridLayout(groupBox_13);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        pBtn_setPumpSpeed = new QPushButton(groupBox_13);
        pBtn_setPumpSpeed->setObjectName(QString::fromUtf8("pBtn_setPumpSpeed"));

        gridLayout_7->addWidget(pBtn_setPumpSpeed, 3, 0, 1, 1);

        pBtn_getPumpSpeed = new QPushButton(groupBox_13);
        pBtn_getPumpSpeed->setObjectName(QString::fromUtf8("pBtn_getPumpSpeed"));

        gridLayout_7->addWidget(pBtn_getPumpSpeed, 0, 0, 1, 1);

        label_8 = new QLabel(groupBox_13);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_7->addWidget(label_8, 1, 0, 1, 1);

        spinBox_pumpSpeed = new QSpinBox(groupBox_13);
        spinBox_pumpSpeed->setObjectName(QString::fromUtf8("spinBox_pumpSpeed"));
        spinBox_pumpSpeed->setMaximum(25000);
        spinBox_pumpSpeed->setValue(12500);

        gridLayout_7->addWidget(spinBox_pumpSpeed, 2, 0, 1, 1);

        tabWidget_Status->addTab(tab_Pameter, QString());
        tabWidget->addTab(widget_Ctrol, QString());
        tab_WBC = new QWidget();
        tab_WBC->setObjectName(QString::fromUtf8("tab_WBC"));
        tabWidget->addTab(tab_WBC, QString());
        tab_RBCPLT = new QWidget();
        tab_RBCPLT->setObjectName(QString::fromUtf8("tab_RBCPLT"));
        tabWidget->addTab(tab_RBCPLT, QString());
        tab_bioTest = new QWidget();
        tab_bioTest->setObjectName(QString::fromUtf8("tab_bioTest"));
        tabWidget->addTab(tab_bioTest, QString());
        tab_mcuUpdate = new QWidget();
        tab_mcuUpdate->setObjectName(QString::fromUtf8("tab_mcuUpdate"));
        tabWidget->addTab(tab_mcuUpdate, QString());
        pBtn_UDPOpen = new QPushButton(centralWidget);
        pBtn_UDPOpen->setObjectName(QString::fromUtf8("pBtn_UDPOpen"));
        pBtn_UDPOpen->setGeometry(QRect(10, 240, 75, 23));
        pBtn_UDPClose = new QPushButton(centralWidget);
        pBtn_UDPClose->setObjectName(QString::fromUtf8("pBtn_UDPClose"));
        pBtn_UDPClose->setGeometry(QRect(100, 240, 75, 23));
        groupBox_selfMsg = new QGroupBox(centralWidget);
        groupBox_selfMsg->setObjectName(QString::fromUtf8("groupBox_selfMsg"));
        groupBox_selfMsg->setGeometry(QRect(10, 280, 171, 121));
        pBtn_selfDefineMsg = new QPushButton(groupBox_selfMsg);
        pBtn_selfDefineMsg->setObjectName(QString::fromUtf8("pBtn_selfDefineMsg"));
        pBtn_selfDefineMsg->setGeometry(QRect(10, 90, 151, 23));
        textEdit_selfDefineMsg = new QTextEdit(groupBox_selfMsg);
        textEdit_selfDefineMsg->setObjectName(QString::fromUtf8("textEdit_selfDefineMsg"));
        textEdit_selfDefineMsg->setGeometry(QRect(10, 20, 151, 61));
        MainWindow->setCentralWidget(centralWidget);
        tabWidget->raise();
        gBx_Control->raise();
        groupBox_2->raise();
        pBtn_UDPOpen->raise();
        pBtn_UDPClose->raise();
        groupBox_selfMsg->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1060, 23));
        menuTool = new QMenu(menuBar);
        menuTool->setObjectName(QString::fromUtf8("menuTool"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(comboBox_localIP, lineEdit_localPort);
        QWidget::setTabOrder(lineEdit_localPort, pBtn_UDPOpen);
        QWidget::setTabOrder(pBtn_UDPOpen, pBtn_UDPClose);
        QWidget::setTabOrder(pBtn_UDPClose, lineEdit_remoteIP);
        QWidget::setTabOrder(lineEdit_remoteIP, lineEdit_remotePort);

        menuBar->addAction(menuTool->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuAbout->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_Status->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gBx_Control->setTitle(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\347\253\257\345\217\243\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260IP\357\274\232", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\350\277\234\347\250\213\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\277\234\347\250\213\347\253\257\345\217\243\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\277\234\347\250\213IP\357\274\232", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236\346\266\210\346\201\257", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "LED\347\201\257\346\216\247\345\210\266", nullptr));
        pBtn_ledClose->setText(QCoreApplication::translate("MainWindow", "\347\201\257\345\205\263", nullptr));
        pBtn_ledMotorSelect->setText(QCoreApplication::translate("MainWindow", "\350\275\254\347\233\230\351\200\211\347\201\257", nullptr));
        pBtn_ledOpen->setText(QCoreApplication::translate("MainWindow", "\347\201\257\345\274\200", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "LED\347\274\226\345\217\267\357\274\232", nullptr));
        pBtn_turnMotorReset->setText(QCoreApplication::translate("MainWindow", "\350\275\254\347\233\230\345\244\215\344\275\215", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        pBtn_WBCTest->setText(QCoreApplication::translate("MainWindow", "WBC\346\265\213\350\257\225", nullptr));
        pBtn_RBCPLT_Test->setText(QCoreApplication::translate("MainWindow", "RBC_PLT\346\265\213\350\257\225", nullptr));
        pBtn_HGBTest->setText(QCoreApplication::translate("MainWindow", "HGB\346\265\213\350\257\225", nullptr));
        pBtn_CRPTest->setText(QCoreApplication::translate("MainWindow", "CRP\346\265\213\350\257\225", nullptr));
        pBtn_setHGBMode->setText(QCoreApplication::translate("MainWindow", "HGB\346\265\213\350\257\225\346\250\241\345\274\217", nullptr));
        pBtn_setCRPMode->setText(QCoreApplication::translate("MainWindow", "CRP\346\250\241\345\274\217\346\250\241\345\274\217", nullptr));
        pBtn_backGroundCRP->setText(QCoreApplication::translate("MainWindow", "CRP\346\234\254\345\272\225\346\265\213\350\257\225", nullptr));
        pBtn_backGroundHGB->setText(QCoreApplication::translate("MainWindow", "HGB\346\234\254\345\272\225\346\265\213\350\257\225", nullptr));
        pBtn_getSanSheVoltage->setText(QCoreApplication::translate("MainWindow", "\346\225\243\345\260\204\347\224\265\345\216\213\345\200\274", nullptr));
        pBtn_getTouSheVoltage->setText(QCoreApplication::translate("MainWindow", "\351\200\217\350\247\206\347\224\265\345\216\213\345\200\274", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207\350\207\252\346\243\200", nullptr));
        pBtn_airValveSelfCheck->setText(QCoreApplication::translate("MainWindow", "\345\273\272\345\216\213\351\230\200\350\207\252\346\243\200", nullptr));
        pBtn_liquidValveSelfCheck->setText(QCoreApplication::translate("MainWindow", "\345\220\270\346\266\262\351\230\200\350\207\252\346\243\200", nullptr));
        pBtn_motorOutSelfCheck->setText(QCoreApplication::translate("MainWindow", "\345\207\272\344\273\223\350\207\252\346\243\200", nullptr));
        pBtn_motorInSelfCheck->setText(QCoreApplication::translate("MainWindow", "\350\277\233\344\273\223\350\207\252\346\243\200", nullptr));
        pBtn_buildPressSelfCheck->setText(QCoreApplication::translate("MainWindow", "\345\273\272\345\216\213\350\207\252\346\243\200", nullptr));
        pBtn_airLightSelfCheck->setText(QCoreApplication::translate("MainWindow", "\345\257\206\351\227\255\346\200\247\350\207\252\346\243\200", nullptr));
        pBtn_pumpSelfCheck->setText(QCoreApplication::translate("MainWindow", "\346\263\265\350\207\252\346\243\200", nullptr));
        pBtn_currentSelfCheck->setText(QCoreApplication::translate("MainWindow", "\346\201\222\346\265\201\346\272\220\350\207\252\346\243\200", nullptr));
        pBtn_mixingMotorSelfCheck->setText(QCoreApplication::translate("MainWindow", "\346\220\205\346\213\214\347\224\265\346\234\272\350\207\252\346\243\200", nullptr));
        pBtn_turnMotorSelfCheck->setText(QCoreApplication::translate("MainWindow", "\350\275\254\347\233\230\347\224\265\346\234\272\350\207\252\346\243\200", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\347\224\265\346\234\272\351\230\200\346\216\247\345\210\266", nullptr));
        pBtn_mainMotorIn->setText(QCoreApplication::translate("MainWindow", "\344\270\273\347\224\265\346\234\272\350\277\233\344\273\223", nullptr));
        pBtn_mainMotorOut->setText(QCoreApplication::translate("MainWindow", "\344\270\273\347\224\265\346\234\272\345\207\272\344\273\223", nullptr));
        pBtn_fixMotorClose->setText(QCoreApplication::translate("MainWindow", "\345\233\272\345\256\232\347\224\265\346\234\272\345\244\271\347\264\247", nullptr));
        pBtn_liquidValveOpen->setText(QCoreApplication::translate("MainWindow", "\345\220\270\346\266\262\351\230\200\345\274\200", nullptr));
        pBtn_airValveOpen->setText(QCoreApplication::translate("MainWindow", "\345\273\272\345\216\213\351\230\200\345\274\200", nullptr));
        pBtn_airValveClose->setText(QCoreApplication::translate("MainWindow", "\345\273\272\345\216\213\351\230\200\345\205\263", nullptr));
        pBtn_fixMotorOpen->setText(QCoreApplication::translate("MainWindow", "\345\233\272\345\256\232\347\224\265\346\234\272\346\235\276\345\274\200", nullptr));
        pBtn_cangOut->setText(QCoreApplication::translate("MainWindow", "\350\256\241\346\225\260\344\273\223\345\207\272\344\273\223", nullptr));
        pBtn_liquidValveClose->setText(QCoreApplication::translate("MainWindow", "\345\220\270\346\266\262\351\230\200\345\205\263", nullptr));
        pBtn_cangIn->setText(QCoreApplication::translate("MainWindow", "\350\256\241\346\225\260\344\273\223\350\277\233\344\273\223", nullptr));
        pBtn_pumpOpen->setText(QCoreApplication::translate("MainWindow", "\346\263\265\345\274\200", nullptr));
        pBtn_pumpClose->setText(QCoreApplication::translate("MainWindow", "\346\263\265\345\205\263", nullptr));
        pBtn_mixingMotorOpen->setText(QCoreApplication::translate("MainWindow", "\346\220\205\346\213\214\347\224\265\346\234\272\345\274\200", nullptr));
        pBtn_mixingMotorClose->setText(QCoreApplication::translate("MainWindow", "\346\220\205\346\213\214\347\224\265\346\234\272\345\205\263", nullptr));
        tabWidget_Status->setTabText(tabWidget_Status->indexOf(tab_Ctrol), QCoreApplication::translate("MainWindow", "   \346\216\247\345\210\266   ", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\350\216\267\345\217\226", nullptr));
        pBtn_getPressValue->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\346\260\224\345\216\213\345\200\274", nullptr));
        pBtn_getMicroSwitch->setText(QCoreApplication::translate("MainWindow", "\345\276\256\345\212\250\345\274\200\345\205\263\347\212\266\346\200\201", nullptr));
        pBtn_getElectrol->setText(QCoreApplication::translate("MainWindow", "\345\256\232\351\207\217\347\224\265\346\236\201\347\212\266\346\200\201\345\222\214\347\224\265\345\216\213", nullptr));
        pBtn_getVersion->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\350\275\257\344\273\266\347\211\210\346\234\254", nullptr));
        pBtn_getXKVoltage->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\345\260\217\345\255\224\347\224\265\345\216\213", nullptr));
        pBtn_getOC->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\345\205\211\350\200\246\347\212\266\346\200\201", nullptr));
        pBt_getTemp->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\346\270\251\345\272\246", nullptr));
        pBtn_getCurrentVoltage->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\346\201\222\346\265\201\346\272\220\347\224\265\345\216\213", nullptr));
        pBtn_getBioTestMode->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\275\223\345\211\215\347\224\237\345\214\226\346\250\241\345\274\217", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "\345\216\213\345\212\233\350\241\245\345\201\277\345\200\274", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\216\213\345\212\233\350\241\245\345\201\277\345\200\274\357\274\232", nullptr));
        pBtn_getPressAddValue->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\345\216\213\345\212\233\350\241\245\345\201\277\345\200\274", nullptr));
        pBtn_setPressAddValue->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\216\213\345\212\233\350\241\245\345\201\277\345\200\274", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\345\255\227\347\224\265\344\275\215\345\231\250\345\200\274", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\347\224\265\344\275\215\345\231\250\347\274\226\345\217\267\357\274\232", nullptr));
        pBtn_setDRegister->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\224\265\344\275\215\345\231\250\345\200\274", nullptr));
        pBtn_getDRegister->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\347\224\265\344\275\215\345\231\250\345\200\274", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\347\224\265\344\275\215\345\231\250\345\200\274\357\274\232", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "\350\277\233\345\207\272\344\273\223\350\241\245\345\201\277", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\207\272\344\273\223\350\241\245\345\201\277\345\200\274\357\274\232", nullptr));
        pBtn_getOutInStepAddValue->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\350\277\233\345\207\272\344\273\223\350\241\245\345\201\277\345\200\274", nullptr));
        pBtn_setOutInStepAddValue->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\277\233\345\207\272\344\273\223\350\241\245\345\201\277\345\200\274", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("MainWindow", "\346\263\265\346\216\247\345\210\266", nullptr));
        pBtn_setPumpSpeed->setText(QCoreApplication::translate("MainWindow", "\346\263\265\351\200\237\350\256\276\347\275\256", nullptr));
        pBtn_getPumpSpeed->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\346\263\265\351\200\237", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\263\265\351\200\237\357\274\232", nullptr));
        tabWidget_Status->setTabText(tabWidget_Status->indexOf(tab_Pameter), QCoreApplication::translate("MainWindow", "   \345\217\202\346\225\260   ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget_Ctrol), QCoreApplication::translate("MainWindow", "\345\244\226\350\256\276\346\216\247\345\210\266\347\225\214\351\235\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_WBC), QCoreApplication::translate("MainWindow", "WBC\347\225\214\351\235\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_RBCPLT), QCoreApplication::translate("MainWindow", "RBC_PLT\347\225\214\351\235\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_bioTest), QCoreApplication::translate("MainWindow", "\347\224\237\345\214\226\347\225\214\351\235\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_mcuUpdate), QCoreApplication::translate("MainWindow", "MCU\345\215\207\347\272\247", nullptr));
        pBtn_UDPOpen->setText(QCoreApplication::translate("MainWindow", "UDP\346\211\223\345\274\200", nullptr));
        pBtn_UDPClose->setText(QCoreApplication::translate("MainWindow", "UDP\345\205\263\351\227\255", nullptr));
        groupBox_selfMsg->setTitle(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\346\266\210\346\201\257(HEX)", nullptr));
        pBtn_selfDefineMsg->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\350\207\252\345\256\232\344\271\211\346\266\210\346\201\257", nullptr));
        menuTool->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
