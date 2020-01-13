#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QLabel>
#include <QSettings>
#include <QPushButton>
#include <QByteArray>
#include <queue>
#include <QtCharts>

namespace Ui {
class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:

public slots:
    void Recv_Msg_Handler();
    void Send_TestCmd();
    QString Button_Send_Msg_Handler(QPushButton *pBtn);

public:
    enum {
        EN_TAB_INDEX_CTROL   = 0,
        EN_TAB_INDEX_WBC     = 1,
        EN_TAB_INDEX_RBC_PLT = 2,
        EN_TAB_INDEX_BIO     = 3,
        EN_TAB_INDEX_UPDATE  = 4,
    };
    void LED_Combobox_Init();
    void Config_Init();
    void CreatCharts();


private slots:
    void on_lineEdit_localPort_textChanged(const QString &arg1);

    void on_comboBox_localIP_currentIndexChanged(const QString &arg1);

    void on_lineEdit_localPort_editingFinished();

    void on_lineEdit_remoteIP_editingFinished();

    void on_lineEdit_remotePort_editingFinished();

    void on_pBtn_UDPOpen_clicked();

    void on_pBtn_UDPClose_clicked();

    void on_pBtn_liquidValveClose_clicked();

    void on_pBtn_liquidValveOpen_clicked();

    void on_pBtn_airValveOpen_clicked();

    void on_pBtn_airValveClose_clicked();

    void on_pBtn_ledOpen_clicked();

    void on_pBtn_ledClose_clicked();

    void on_pBtn_mainMotorIn_clicked();

    void on_pBtn_mainMotorOut_clicked();

    void on_pBtn_cangIn_clicked();

    void on_pBtn_cangOut_clicked();

    void on_pBtn_pumpOpen_clicked();

    void on_pBtn_pumpClose_clicked();

    void on_pBtn_pumpSpeedSet_clicked();

    void on_pBtn_WBCTest_clicked();

    void on_pBtn_RBCPLT_Test_clicked();

    void on_pBtn_setHGBMode_clicked();

    void on_pBtn_setCRPMode_clicked();

    void on_pBtn_backGroundCRP_clicked();

    void on_pBtn_CRPTest_clicked();

    void on_pBtn_backGroundHGB_clicked();

    void on_pBtn_HGBTest_clicked();

    void on_pBtn_airValveSelfCheck_clicked();

    void on_pBtn_liquidValveSelfCheck_clicked();

    void on_pBtn_motorOutSelfCheck_clicked();

    void on_pBtn_motorInSelfCheck_clicked();

    void on_pBtn_buildPressSelfCheck_clicked();

    void on_pBtn_airLightSelfCheck_clicked();

    void on_pBtn_pumpSelfCheck_clicked();

    void on_pBtn_currentSelfCheck_clicked();

    void on_pBtn_selfDefineMsg_clicked();

    void on_pBtn_fixMotorClose_clicked();

    void on_pBtn_fixMotorOpen_clicked();

    void on_pBtn_ledSelect_clicked();

    void on_pBtn_mixingMotorSelfCheck_clicked();

    void on_pBtn_turnMotorSelfCheck_clicked();

    void on_pBtn_getPressAddValue_clicked();

    void on_pBtn_getOutInStepAddValue_clicked();

    void on_pBtn_setOutInStepAddValue_clicked();

    void on_pBtn_getPumpSpeed_clicked();

    void on_pBtn_setPumpSpeed_clicked();

    void on_pBtn_getXKVoltage_clicked();

    void on_pBtn_getCurrentVoltage_clicked();

    void on_pBtn_getMicroSwitch_clicked();

    void on_pBtn_getOC_clicked();

    void on_pBtn_getTouSheVoltage_clicked();

    void on_pBtn_getSanSheVoltage_clicked();

    void on_pBtn_getElectrol_clicked();

    void on_pBtn_getPressValue_clicked();

    void on_pBt_getTemp_clicked();

    void on_pBtn_getVersion_clicked();

    void on_pBtn_getBioTestMode_clicked();

    void on_pBtn_setPressAddValue_clicked();

    void on_pBtn_ledMotorSelect_clicked();

    void on_pBtn_getDRegister_clicked();

    void on_pBtn_setDRegister_clicked();

private:
    Ui::MainWindow *ui;
    QUdpSocket *socketUdp;
    QLabel *label_barStatus;
    QHostAddress stLocalIP, stRemoteIP;
    unsigned short nLocalPort, nRemotePort;
    QSettings *configIni;
    //QQueue<int> stQueue;
    // QQueue<int> queue;
    //Queue<int> DataBuffer;
     QList<QByteArray*> stList;
    int nNum;

};

#endif // MAINWINDOW_H
