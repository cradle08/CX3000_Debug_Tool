/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
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
    QWidget *widget;
    QGroupBox *groupBox_5;
    QPushButton *pBtn_mainMotorIn;
    QPushButton *pBtn_mainMotorOut;
    QPushButton *pBtn_cangIn;
    QPushButton *pBtn_cangOut;
    QGroupBox *groupBox_4;
    QLabel *label_6;
    QComboBox *comboBox_ledNum;
    QPushButton *pBtn_ledOpen;
    QPushButton *pBtn_ledClose;
    QGroupBox *groupBox_6;
    QPushButton *pBtn_liquidValveOpen;
    QPushButton *pBtn_airValveOpen;
    QPushButton *pBtn_liquidValveClose;
    QPushButton *pBtn_airValveClose;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pBtn_pumpOpen;
    QPushButton *pBtn_pumpClose;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QPushButton *pBtn_pumpSpeedSet;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout;
    QPushButton *pBtn_WBCTest;
    QPushButton *pBtn_RBCPLT_Test;
    QPushButton *pBtn_setHGBMode;
    QPushButton *pBtn_setCRPMode;
    QPushButton *pBtn_backGroundCRP;
    QPushButton *pBtn_CRPTest;
    QPushButton *pBtn_backGroundHGB;
    QPushButton *pBtn_HGBTest;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QPushButton *pBtn_airLightSelfCheck;
    QPushButton *pBtn_currentSelfCheck;
    QPushButton *pBtn_airValveSelfCheck;
    QPushButton *pBtn_motorInSelfCheck;
    QPushButton *pBtn_liquidValveSelfCheck;
    QPushButton *pBtn_pumpSelfCheck;
    QPushButton *pBtn_motorOutSelfCheck;
    QPushButton *pBtn_buildPressSelfCheck;
    QWidget *widget_2;
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
        MainWindow->resize(816, 460);
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
        tabWidget->setGeometry(QRect(200, 0, 611, 401));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        groupBox_5 = new QGroupBox(widget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 130, 338, 55));
        pBtn_mainMotorIn = new QPushButton(groupBox_5);
        pBtn_mainMotorIn->setObjectName(QString::fromUtf8("pBtn_mainMotorIn"));
        pBtn_mainMotorIn->setGeometry(QRect(10, 22, 71, 23));
        pBtn_mainMotorOut = new QPushButton(groupBox_5);
        pBtn_mainMotorOut->setObjectName(QString::fromUtf8("pBtn_mainMotorOut"));
        pBtn_mainMotorOut->setGeometry(QRect(91, 22, 75, 23));
        pBtn_cangIn = new QPushButton(groupBox_5);
        pBtn_cangIn->setObjectName(QString::fromUtf8("pBtn_cangIn"));
        pBtn_cangIn->setGeometry(QRect(176, 22, 71, 23));
        pBtn_cangOut = new QPushButton(groupBox_5);
        pBtn_cangOut->setObjectName(QString::fromUtf8("pBtn_cangOut"));
        pBtn_cangOut->setGeometry(QRect(257, 22, 71, 23));
        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 69, 341, 55));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 20, 54, 21));
        comboBox_ledNum = new QComboBox(groupBox_4);
        comboBox_ledNum->setObjectName(QString::fromUtf8("comboBox_ledNum"));
        comboBox_ledNum->setGeometry(QRect(60, 23, 101, 20));
        pBtn_ledOpen = new QPushButton(groupBox_4);
        pBtn_ledOpen->setObjectName(QString::fromUtf8("pBtn_ledOpen"));
        pBtn_ledOpen->setGeometry(QRect(170, 22, 75, 23));
        pBtn_ledClose = new QPushButton(groupBox_4);
        pBtn_ledClose->setObjectName(QString::fromUtf8("pBtn_ledClose"));
        pBtn_ledClose->setGeometry(QRect(250, 22, 75, 23));
        groupBox_6 = new QGroupBox(widget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 8, 338, 55));
        pBtn_liquidValveOpen = new QPushButton(groupBox_6);
        pBtn_liquidValveOpen->setObjectName(QString::fromUtf8("pBtn_liquidValveOpen"));
        pBtn_liquidValveOpen->setGeometry(QRect(10, 22, 75, 23));
        pBtn_airValveOpen = new QPushButton(groupBox_6);
        pBtn_airValveOpen->setObjectName(QString::fromUtf8("pBtn_airValveOpen"));
        pBtn_airValveOpen->setGeometry(QRect(172, 22, 75, 23));
        pBtn_liquidValveClose = new QPushButton(groupBox_6);
        pBtn_liquidValveClose->setObjectName(QString::fromUtf8("pBtn_liquidValveClose"));
        pBtn_liquidValveClose->setGeometry(QRect(91, 22, 75, 23));
        pBtn_airValveClose = new QPushButton(groupBox_6);
        pBtn_airValveClose->setObjectName(QString::fromUtf8("pBtn_airValveClose"));
        pBtn_airValveClose->setGeometry(QRect(253, 22, 75, 23));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 190, 121, 171));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pBtn_pumpOpen = new QPushButton(groupBox);
        pBtn_pumpOpen->setObjectName(QString::fromUtf8("pBtn_pumpOpen"));

        verticalLayout->addWidget(pBtn_pumpOpen);

        pBtn_pumpClose = new QPushButton(groupBox);
        pBtn_pumpClose->setObjectName(QString::fromUtf8("pBtn_pumpClose"));

        verticalLayout->addWidget(pBtn_pumpClose);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        pBtn_pumpSpeedSet = new QPushButton(groupBox);
        pBtn_pumpSpeedSet->setObjectName(QString::fromUtf8("pBtn_pumpSpeedSet"));

        verticalLayout->addWidget(pBtn_pumpSpeedSet);

        groupBox_7 = new QGroupBox(widget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(140, 190, 211, 171));
        gridLayout = new QGridLayout(groupBox_7);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pBtn_WBCTest = new QPushButton(groupBox_7);
        pBtn_WBCTest->setObjectName(QString::fromUtf8("pBtn_WBCTest"));

        gridLayout->addWidget(pBtn_WBCTest, 0, 0, 1, 1);

        pBtn_RBCPLT_Test = new QPushButton(groupBox_7);
        pBtn_RBCPLT_Test->setObjectName(QString::fromUtf8("pBtn_RBCPLT_Test"));

        gridLayout->addWidget(pBtn_RBCPLT_Test, 0, 1, 1, 1);

        pBtn_setHGBMode = new QPushButton(groupBox_7);
        pBtn_setHGBMode->setObjectName(QString::fromUtf8("pBtn_setHGBMode"));

        gridLayout->addWidget(pBtn_setHGBMode, 1, 0, 1, 1);

        pBtn_setCRPMode = new QPushButton(groupBox_7);
        pBtn_setCRPMode->setObjectName(QString::fromUtf8("pBtn_setCRPMode"));

        gridLayout->addWidget(pBtn_setCRPMode, 1, 1, 1, 1);

        pBtn_backGroundCRP = new QPushButton(groupBox_7);
        pBtn_backGroundCRP->setObjectName(QString::fromUtf8("pBtn_backGroundCRP"));

        gridLayout->addWidget(pBtn_backGroundCRP, 2, 0, 1, 1);

        pBtn_CRPTest = new QPushButton(groupBox_7);
        pBtn_CRPTest->setObjectName(QString::fromUtf8("pBtn_CRPTest"));

        gridLayout->addWidget(pBtn_CRPTest, 2, 1, 1, 1);

        pBtn_backGroundHGB = new QPushButton(groupBox_7);
        pBtn_backGroundHGB->setObjectName(QString::fromUtf8("pBtn_backGroundHGB"));

        gridLayout->addWidget(pBtn_backGroundHGB, 3, 0, 1, 1);

        pBtn_HGBTest = new QPushButton(groupBox_7);
        pBtn_HGBTest->setObjectName(QString::fromUtf8("pBtn_HGBTest"));

        gridLayout->addWidget(pBtn_HGBTest, 3, 1, 1, 1);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(370, 10, 231, 171));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pBtn_airLightSelfCheck = new QPushButton(groupBox_3);
        pBtn_airLightSelfCheck->setObjectName(QString::fromUtf8("pBtn_airLightSelfCheck"));

        gridLayout_2->addWidget(pBtn_airLightSelfCheck, 2, 1, 1, 1);

        pBtn_currentSelfCheck = new QPushButton(groupBox_3);
        pBtn_currentSelfCheck->setObjectName(QString::fromUtf8("pBtn_currentSelfCheck"));

        gridLayout_2->addWidget(pBtn_currentSelfCheck, 3, 1, 1, 1);

        pBtn_airValveSelfCheck = new QPushButton(groupBox_3);
        pBtn_airValveSelfCheck->setObjectName(QString::fromUtf8("pBtn_airValveSelfCheck"));

        gridLayout_2->addWidget(pBtn_airValveSelfCheck, 0, 0, 1, 1);

        pBtn_motorInSelfCheck = new QPushButton(groupBox_3);
        pBtn_motorInSelfCheck->setObjectName(QString::fromUtf8("pBtn_motorInSelfCheck"));

        gridLayout_2->addWidget(pBtn_motorInSelfCheck, 1, 1, 1, 1);

        pBtn_liquidValveSelfCheck = new QPushButton(groupBox_3);
        pBtn_liquidValveSelfCheck->setObjectName(QString::fromUtf8("pBtn_liquidValveSelfCheck"));

        gridLayout_2->addWidget(pBtn_liquidValveSelfCheck, 0, 1, 1, 1);

        pBtn_pumpSelfCheck = new QPushButton(groupBox_3);
        pBtn_pumpSelfCheck->setObjectName(QString::fromUtf8("pBtn_pumpSelfCheck"));

        gridLayout_2->addWidget(pBtn_pumpSelfCheck, 3, 0, 1, 1);

        pBtn_motorOutSelfCheck = new QPushButton(groupBox_3);
        pBtn_motorOutSelfCheck->setObjectName(QString::fromUtf8("pBtn_motorOutSelfCheck"));

        gridLayout_2->addWidget(pBtn_motorOutSelfCheck, 1, 0, 1, 1);

        pBtn_buildPressSelfCheck = new QPushButton(groupBox_3);
        pBtn_buildPressSelfCheck->setObjectName(QString::fromUtf8("pBtn_buildPressSelfCheck"));

        gridLayout_2->addWidget(pBtn_buildPressSelfCheck, 2, 0, 1, 1);

        tabWidget->addTab(widget, QString());
        widget_2 = new QWidget();
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        tabWidget->addTab(widget_2, QString());
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
        menuBar->setGeometry(QRect(0, 0, 816, 23));
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


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        gBx_Control->setTitle(QApplication::translate("MainWindow", "\346\234\254\345\234\260\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\234\254\345\234\260\347\253\257\345\217\243\357\274\232", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\234\254\345\234\260IP\357\274\232", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\350\277\234\347\250\213\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\350\277\234\347\250\213\347\253\257\345\217\243\357\274\232", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\350\277\234\347\250\213IP\357\274\232", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\350\277\233\345\207\272\344\273\223\346\216\247\345\210\266", nullptr));
        pBtn_mainMotorIn->setText(QApplication::translate("MainWindow", "\344\270\273\347\224\265\346\234\272\350\277\233\344\273\223", nullptr));
        pBtn_mainMotorOut->setText(QApplication::translate("MainWindow", "\344\270\273\347\224\265\346\234\272\345\207\272\344\273\223", nullptr));
        pBtn_cangIn->setText(QApplication::translate("MainWindow", "\350\256\241\346\225\260\344\273\223\350\277\233\344\273\223", nullptr));
        pBtn_cangOut->setText(QApplication::translate("MainWindow", "\350\256\241\346\225\260\344\273\223\345\207\272\344\273\223", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "LED\347\201\257\346\216\247\345\210\266", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "LED\347\274\226\345\217\267\357\274\232", nullptr));
        pBtn_ledOpen->setText(QApplication::translate("MainWindow", "\347\201\257\345\274\200", nullptr));
        pBtn_ledClose->setText(QApplication::translate("MainWindow", "\347\201\257\345\205\263", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\351\230\200\346\216\247\345\210\266", nullptr));
        pBtn_liquidValveOpen->setText(QApplication::translate("MainWindow", "\345\220\270\346\266\262\351\230\200\345\274\200", nullptr));
        pBtn_airValveOpen->setText(QApplication::translate("MainWindow", "\345\273\272\345\216\213\351\230\200\345\274\200", nullptr));
        pBtn_liquidValveClose->setText(QApplication::translate("MainWindow", "\345\220\270\346\266\262\351\230\200\345\205\263", nullptr));
        pBtn_airValveClose->setText(QApplication::translate("MainWindow", "\345\273\272\345\216\213\351\230\200\345\205\263", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\263\265\346\216\247\345\210\266", nullptr));
        pBtn_pumpOpen->setText(QApplication::translate("MainWindow", "\346\263\265\345\274\200", nullptr));
        pBtn_pumpClose->setText(QApplication::translate("MainWindow", "\346\263\265\345\205\263", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\346\263\265\351\200\237\357\274\232", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "1500", nullptr));
        pBtn_pumpSpeedSet->setText(QApplication::translate("MainWindow", "\346\263\265\351\200\237\350\256\276\347\275\256", nullptr));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        pBtn_WBCTest->setText(QApplication::translate("MainWindow", "WBC\346\265\213\350\257\225", nullptr));
        pBtn_RBCPLT_Test->setText(QApplication::translate("MainWindow", "RBC_PLT\346\265\213\350\257\225", nullptr));
        pBtn_setHGBMode->setText(QApplication::translate("MainWindow", "HGB\346\265\213\350\257\225\346\250\241\345\274\217", nullptr));
        pBtn_setCRPMode->setText(QApplication::translate("MainWindow", "CRP\346\250\241\345\274\217\346\250\241\345\274\217", nullptr));
        pBtn_backGroundCRP->setText(QApplication::translate("MainWindow", "CRP\346\234\254\345\272\225\346\265\213\350\257\225", nullptr));
        pBtn_CRPTest->setText(QApplication::translate("MainWindow", "CRP\346\265\213\350\257\225", nullptr));
        pBtn_backGroundHGB->setText(QApplication::translate("MainWindow", "HGB\346\234\254\345\272\225\346\265\213\350\257\225", nullptr));
        pBtn_HGBTest->setText(QApplication::translate("MainWindow", "HGB\346\265\213\350\257\225", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\350\207\252\346\243\200\345\217\212\350\200\201\345\214\226", nullptr));
        pBtn_airLightSelfCheck->setText(QApplication::translate("MainWindow", "\345\257\206\351\227\255\346\200\247\350\207\252\346\243\200", nullptr));
        pBtn_currentSelfCheck->setText(QApplication::translate("MainWindow", "\346\201\222\346\265\201\346\272\220\350\207\252\346\243\200", nullptr));
        pBtn_airValveSelfCheck->setText(QApplication::translate("MainWindow", "\345\273\272\345\216\213\351\230\200\350\207\252\346\243\200", nullptr));
        pBtn_motorInSelfCheck->setText(QApplication::translate("MainWindow", "\350\277\233\344\273\223\350\207\252\346\243\200", nullptr));
        pBtn_liquidValveSelfCheck->setText(QApplication::translate("MainWindow", "\345\220\270\346\266\262\351\230\200\350\207\252\346\243\200", nullptr));
        pBtn_pumpSelfCheck->setText(QApplication::translate("MainWindow", "\346\263\265\350\207\252\346\243\200", nullptr));
        pBtn_motorOutSelfCheck->setText(QApplication::translate("MainWindow", "\345\207\272\344\273\223\350\207\252\346\243\200", nullptr));
        pBtn_buildPressSelfCheck->setText(QApplication::translate("MainWindow", "\345\273\272\345\216\213\350\207\252\346\243\200", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", "\345\244\226\350\256\276\346\216\247\345\210\266\347\225\214\351\235\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget_2), QApplication::translate("MainWindow", "\347\212\266\346\200\201\345\217\212\345\217\202\346\225\260\347\225\214\351\235\242", nullptr));
        pBtn_UDPOpen->setText(QApplication::translate("MainWindow", "UDP\346\211\223\345\274\200", nullptr));
        pBtn_UDPClose->setText(QApplication::translate("MainWindow", "UDP\345\205\263\351\227\255", nullptr));
        groupBox_selfMsg->setTitle(QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\346\266\210\346\201\257(HEX)", nullptr));
        pBtn_selfDefineMsg->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\350\207\252\345\256\232\344\271\211\346\266\210\346\201\257", nullptr));
        menuTool->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
