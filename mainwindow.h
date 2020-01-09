#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QLabel>
#include <QSettings>
#include <QPushButton>

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
    void Button_Send_Msg_Handler(QPushButton *pBtn);
    void QString_Send_Msg_Handler(QString &str);

public:
    void Config_Init();
    void LED_Combobox_Init();

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


private:
    Ui::MainWindow *ui;
    QUdpSocket *socketUdp;
    QLabel *label_barStatus;
    QHostAddress stLocalIP, stRemoteIP;
    unsigned short nLocalPort, nRemotePort;
    QSettings *configIni;
    int nNum;

};

#endif // MAINWINDOW_H
