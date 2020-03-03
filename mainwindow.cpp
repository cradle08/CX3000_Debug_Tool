#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QUdpSocket>
#include <QtGlobal>
#include <QMessageBox>
#include <QDebug>
#include <QVariant>
#include <QPushButton>
#include <QDebug>
#include <QHostAddress>
#include <QNetworkInterface>
#include <QList>
#include <QSettings>
#include <QNetworkDatagram>
#include <QTextCodec>
#include <QVariant>
#include <QIcon>
#include <QQueue>
#include <QByteArray>
#include <QChartView>
#include <QValueAxis>

using namespace  QtCharts;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("CX-Debug-Tools");

    //Config Init
     Config_Init();


    // init localip combobox
    QList<QHostAddress> stAdrList;
    stAdrList = QNetworkInterface::allAddresses();
    foreach(QHostAddress stAddr, stAdrList)
    {
        quint32 ipaddr = stAddr.toIPv4Address();
        if(ipaddr == 0) continue;
         ui->comboBox_localIP->addItem(stAddr.toString());
         qDebug() << stAddr.toString();
    }
    // local port
    unsigned short nLocalPort  = 9000;
    QString strTemp = QString::number(nLocalPort);
    ui->lineEdit_localPort->setText(strTemp);

    // init remote ip and port
    QHostAddress stRemoteIP = QHostAddress("192.168.1.10");
    unsigned short nRemotePort = 8000;

    ui->lineEdit_remoteIP->setText(stRemoteIP.toString());
    QString str = QString::number(nRemotePort);
    ui->lineEdit_remotePort->setText(str);

    // status bar info
    m_label_barStatus = new QLabel("CX Tool Started ...");
    m_label_barStatus->setText("CX Tool Start Success ...");
    ui->statusBar->addWidget(m_label_barStatus);

    // disable tabwidget
    Set_TabWight_Enable(false);
    ui->pBtn_selfDefineMsg->setEnabled(false);


    // led combobix
    LED_Combobox_Init();
    DRegister_Combobox_Init();
    // wbc tab menu init
    //CreatCharts();

    // thread(must init after Config_int)
    Thread_init();
}



MainWindow::~MainWindow()
{
    delete ui;
    delete m_label_barStatus;
    delete m_pstConfigIni;
    delete m_pstMsgQueue;
    delete m_pstIfUdp;

    m_pstHandleDataMsgThread->terminate();
    m_pstHandleDataMsgThread->wait();
    delete m_pstHandleDataMsgThread;

    m_pstHandleStatusMsgThread->terminate();
    m_pstHandleStatusMsgThread->wait();
    delete m_pstHandleStatusMsgThread;
}

void MainWindow::Config_Init()
{
    qDebug() <<"Config Init";
    QString strProjectPath = QCoreApplication::applicationDirPath();
    qDebug() << strProjectPath;

    m_pstConfigIni = new QSettings(tr("%1/config.ini").arg(strProjectPath), QSettings::IniFormat);
    //m_pstConfigIni.setIniCodec(QTextCodec::codecForName("UTF-8"));
    m_pstConfigIni->setIniCodec("UTF-8");

    m_pstConfigIni->beginGroup("Control");
    //strMsg = m_pstConfigIni->value(str).toString();
    QStringList strList = m_pstConfigIni->allKeys();
    qDebug() << "-----allKeys----:" << strList;

    strList = m_pstConfigIni->childKeys();
    m_pstConfigIni->endGroup();

}

void MainWindow::Thread_init()
{
    m_pstMsgQueue = new QMsgQueue();
    m_pstIfUdp = new QIfUdp(m_pstMsgQueue);
    m_pstHandleDataMsgThread = new QHandleDataMsgThread(m_pstMsgQueue, m_pstConfigIni, ui, true);
    m_pstHandleStatusMsgThread = new QHandleStatusMsgThread(m_pstMsgQueue, m_pstConfigIni, ui, true);

    m_pstHandleDataMsgThread->start();
    m_pstHandleStatusMsgThread->start();
}

void MainWindow::LED_Combobox_Init()
{
   m_pstConfigIni->beginGroup("LED");
   for(quint16 i = 0; i < 8; i++)
   {
        QString str = m_pstConfigIni->value(tr("LED%1").arg(i)).toString();
        ui->comboBox_ledNum->addItem(str);
   }
   m_pstConfigIni->endGroup();
}

void MainWindow::DRegister_Combobox_Init()
{
   m_pstConfigIni->beginGroup("DREGISTER");
   for(quint16 i = 0; i < 6; i++)
   {
        QString str = m_pstConfigIni->value(tr("DREGISTER%1").arg(i)).toString();
        ui->comboBox_DRegister->addItem(str);
   }
   m_pstConfigIni->endGroup();
}



//
void MainWindow::Send_TestCmd()
{
    //QString str;
    //str = ui->textEdit->toPlainText();
    //QByteArray data = str.toLatin1();
    //clientudp->writeDatagram(data.data(), data.size(), QHostAddress::LocalHost, nUdpPort);
    qDebug()<<m_nNum;
    m_nNum++;
//    socketUdp->writeDatagram(ui->textEdit->toPlainText().toUtf8(), QHostAddress::LocalHost, 7788);

}

/*
void MainWindow::CreatCharts()
{
    QChartView *chartView = new QChartView(ui->tab_WBC);
    QChart *chart = new QChart();
    //chart->setTitle("Blood Cell Data");

    chartView->setChart(chart);

    QRect rect(10, 10, 850, 300);
    chartView->setGeometry(rect);
    //chartView->setGeometry(rect);


    QLineSeries *series = new QLineSeries();
    series->clear();
    chart->addSeries((series));
    for(int i = 0; i < 100; i++)
    {
        series->append(i, 2);

    }


    int nRange = 300, nVol = 5;
    QValueAxis *axisX = new QValueAxis;
    axisX->setRange(0, nRange);
    //axisX->setTitleText("Index");

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, nVol);
    //axisY->setTitleText("Voltage");

    chart->setAxisX(axisX, series);
    chart->setAxisY(axisY, series);


   // qsrand(QTime::currentTime());
    qreal nTemp = 0;
    //qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    for(int i=0; i < nRange; i++)
    {
        //nTemp =  qrand()%5;
        nTemp = qSin(i);
        series->append(i, nTemp);
    }


    delete chartView;
    delete  chart;
    delete  series;
    delete  axisX;
    delete  axisY;

}
*/


//----------------------Ctrol-------------------------------
QString MainWindow::Button_Send_Msg_Handler(QPushButton *pBtn, EN_PROTOCOL_CMD_TYPE enCmdType)
{
    //QPushButton btn = button;
    QString str = pBtn->objectName();
    QString strMsg;

    str = str.mid(str.indexOf("_") + 1);
    switch (enCmdType) {
        case EN_PROTOCOL_CMD_Control:
            {
                m_pstConfigIni->beginGroup("Control");
                strMsg = m_pstConfigIni->value(str).toString();
                m_pstConfigIni->endGroup();
            }
            break;
        case EN_PROTOCOL_CMD_Test:
            {
                m_pstConfigIni->beginGroup("Test");
                strMsg = m_pstConfigIni->value(str).toString();
                m_pstConfigIni->endGroup();
            }
            break;
        case EN_PROTOCOL_CMD_ParamSet:
            {
                m_pstConfigIni->beginGroup("ParamSet");
                strMsg = m_pstConfigIni->value(str).toString();
                m_pstConfigIni->endGroup();
            }
            break;
        case EN_PROTOCOL_CMD_ParamGet:
            {
                m_pstConfigIni->beginGroup("ParamGet");
                strMsg = m_pstConfigIni->value(str).toString();
                m_pstConfigIni->endGroup();
            }
            break;
        case EN_PROTOCOL_CMD_CheckAndAging:
            {
                m_pstConfigIni->beginGroup("CheckAndAging");
                strMsg = m_pstConfigIni->value(str).toString();
                m_pstConfigIni->endGroup();
            }
            break;
        case EN_PROTOCOL_CMD_Update:
            {
                m_pstConfigIni->beginGroup("Update");
                strMsg = m_pstConfigIni->value(str).toString();
                m_pstConfigIni->endGroup();
            }
            break;
        case EN_PROTOCOL_CMD_Others:
            {
                m_pstConfigIni->beginGroup("Others");
                strMsg = m_pstConfigIni->value(str).toString();
                m_pstConfigIni->endGroup();
            }
            break;
        default:
            {
                qDebug() << "Error: Protocol Type is Wrong !";
            }
            break;
    }

    qDebug() << str <<"=" << strMsg;
    QByteArray stByteMsg = QByteArray::fromHex(strMsg.toUtf8());
    m_pstIfUdp->SendMsg(stByteMsg);
    return strMsg;
}


void MainWindow::on_comboBox_localIP_currentIndexChanged(const QString &arg1)
{

  qDebug() << "on_comboBox_localIP_currentIndexChanged, arg1:" << arg1;
    QHostAddress stLocalIP = QHostAddress(arg1);
    if(stLocalIP.isNull())
    {
        qDebug() << "localIP Input Error, strLocalIP:" << stLocalIP;
        QMessageBox::warning(this, "Waring", "localIP Input Error");
        return;
    }
    qDebug() << "comboBox_localIP, strLocalIP:" << stLocalIP;

    m_pstIfUdp->Set_LocalIP(stLocalIP);
}

void MainWindow::on_lineEdit_localPort_textChanged(const QString &arg1)
{
    unsigned short nLocalPort = arg1.toUShort();
    qDebug() << "LocalPort:" << nLocalPort;
}

void MainWindow::on_lineEdit_localPort_editingFinished()
{
    unsigned short nLocalPort = ui->lineEdit_localPort->text().toUShort();
    qDebug() << "localPort:" << nLocalPort;
    if(nLocalPort == 0)
    {
        qDebug() << "localPort input error" << endl;
        QMessageBox::warning(this, "Waring", "localPort Input Error");
    }
}

void MainWindow::on_lineEdit_remoteIP_editingFinished()
{

    QString str = ui->lineEdit_remoteIP->text();
    qDebug() << str;
    QHostAddress stRemoteIP = QHostAddress(str);
    if(stRemoteIP.isNull())
    {
        qDebug() <<"remote ip input is error"<< stRemoteIP;
        QMessageBox::warning(this, "Waring", "RemoteIP Input Error");
        return;
    }
    qDebug() <<"Remote IP:"<< stRemoteIP;

}

void MainWindow::on_lineEdit_remotePort_editingFinished()
{

    unsigned short nRemotePort = ui->lineEdit_remotePort->text().toUShort();
    if(nRemotePort == 0)
    {
        qDebug() << "remoteIP:" << nRemotePort;
        QMessageBox::warning(this, "Waring", "RemotePort Input Error ");
        return;
    }
    qDebug() << "RemotePort:" << nRemotePort;

}


void MainWindow::Set_TabWight_Enable(bool bFlag)
{
    quint8 i = 0;
    for(i = EN_TAB_INDEX_DEVICE; i < EN_TAB_INDEX_END; i++)
    {
        ui->tabWidget->setTabEnabled(i, bFlag);
    }
}


void MainWindow::on_pBtn_UDPOpen_clicked()
{
    // localip and port
    QString strLocalIP = ui->comboBox_localIP->currentText();
    QHostAddress stLocalIP(strLocalIP);

    QString strLocalPort = ui->lineEdit_localPort->text();
    unsigned short nLocalPort = strLocalPort.toUShort();

    // remoteip and port
    QString strRemoteIP = ui->lineEdit_remoteIP->text();
    QHostAddress stRemoteIP(strRemoteIP);

    QString strRemotePort = ui->lineEdit_remotePort->text();
    unsigned short nRemotePort = strRemotePort.toUShort();


    m_pstIfUdp->Set_RemoteIP(stRemoteIP);
    m_pstIfUdp->Set_RemotePort(nRemotePort);

    qDebug() << "LocalIP:" << stLocalIP << "LocalPort:" << nLocalPort;
    qDebug() << "RemoteIP:" << stRemoteIP << "RemotePort:" << nRemotePort;

    if(m_pstIfUdp->UdpSocket_Init(stLocalIP, nLocalPort))
    {
        m_label_barStatus->setText("Socket Bind Success");
        ui->pBtn_UDPOpen->setEnabled(false);
        ui->pBtn_UDPClose->setEnabled(true);
        ui->lineEdit_remoteIP->setEnabled(false);
        ui->lineEdit_remotePort->setEnabled(false);
        ui->comboBox_localIP->setEnabled(false);
        ui->lineEdit_localPort->setEnabled(false);
    }else{
        m_label_barStatus->setText("Socket Bind Error");
    }

    // enable tabwiget
    Set_TabWight_Enable(true);
    ui->pBtn_selfDefineMsg->setEnabled(true);
}

void MainWindow::on_pBtn_UDPClose_clicked()
{
    qDebug() << "UDPSocket Close";
    m_pstIfUdp->m_pstSocketUdp->close();
    ui->pBtn_UDPOpen->setEnabled(true);
    ui->pBtn_UDPClose->setEnabled(false);
    ui->lineEdit_remoteIP->setEnabled(true);
    ui->lineEdit_remotePort->setEnabled(true);
    ui->comboBox_localIP->setEnabled(true);
    ui->lineEdit_localPort->setEnabled(true);
    m_label_barStatus->setText("UDP Close");
    //
    Set_TabWight_Enable(false);
    ui->pBtn_selfDefineMsg->setEnabled(false);
}

void MainWindow::on_pBtn_liquidValveClose_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_liquidValveOpen_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_airValveOpen_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_airValveClose_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_ledOpen_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());

    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    m_pstConfigIni->beginGroup("Control");
    QString msg = m_pstConfigIni->value(str).toString();
    m_pstConfigIni->endGroup();

    int index =  ui->comboBox_ledNum->currentIndex();
    qDebug()<<str <<"=" << msg << " index:"<<index;

    QString strTemp = QString::number(index);
    strTemp.insert(0, '0');
    msg.replace(16, 2, strTemp);
    qDebug() <<"msg="<<msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    m_pstIfUdp->SendMsg(data);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);

}

void MainWindow::on_pBtn_ledClose_clicked()
{

    QPushButton *pBtn = ((QPushButton*)sender());

    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    m_pstConfigIni->beginGroup("Control");
    QString msg = m_pstConfigIni->value(str).toString();
    m_pstConfigIni->endGroup();

    int index = ui->comboBox_ledNum->currentIndex();
    qDebug()<<str <<"=" << msg << " index:"<<index;

    QString strTemp = QString::number(index);
    strTemp.insert(0, '0');
    msg.replace(16, 2, strTemp);
    qDebug() <<"msg="<<msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    m_pstIfUdp->SendMsg(data);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);

}

void MainWindow::on_pBtn_mainMotorIn_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_mainMotorOut_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_cangIn_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_cangOut_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_pumpOpen_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_pumpClose_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_WBCTest_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Test);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_RBCPLT_Test_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Test);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_setHGBMode_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamSet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_setCRPMode_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamSet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_backGroundCRP_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Test);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_CRPTest_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Test);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_backGroundHGB_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Test);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_HGBTest_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Test);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_airValveSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_CheckAndAging);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_liquidValveSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_CheckAndAging);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_motorOutSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_CheckAndAging);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_motorInSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_CheckAndAging);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_buildPressSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_CheckAndAging);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_airLightSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_CheckAndAging);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_pumpSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_CheckAndAging);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_currentSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_CheckAndAging);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_selfDefineMsg_clicked()
{
    // get msg
    QPushButton *pBtn = ((QPushButton*)sender());
    QString strContext = ui->textEdit_selfDefineMsg->toPlainText();
    qDebug() << strContext;
    QString strHead = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Others);
    QString strMsg = strHead.append(strContext);
    // send msg
    QByteArray stByteMsg = QByteArray::fromHex(strMsg.toUtf8());
    m_pstIfUdp->SendMsg(stByteMsg);
    // display sended msg at ui menu
    QString str = pBtn->text().append(":").append(strMsg);
    ui->textEdit_backMsgCtrolMenu->append(str); 
}

void MainWindow::on_pBtn_fixMotorClose_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_fixMotorOpen_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

/*
void MainWindow::on_pBtn_ledSelect_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}
*/

void MainWindow::on_pBtn_mixingMotorSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_CheckAndAging);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_turnMotorSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_CheckAndAging);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

//--------------------set menu-------------------------
void MainWindow::on_pBtn_getPressAddValue_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_setPressAddValue_clicked()
{

    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    m_pstConfigIni->beginGroup("ParamSet");
    QString msg = m_pstConfigIni->value(str).toString();
    m_pstConfigIni->endGroup();

    int nVal = ui->spinBox_pressAddValue->value();
    qDebug()<<str <<"=" << msg << " nVal:"<<nVal;

    QString strTemp = QString::asprintf("%04X", nVal);
    msg.replace(16, 4, strTemp);
    qDebug() <<"msg="<<msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    m_pstIfUdp->SendMsg(data);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);

}


void MainWindow::on_pBtn_getOutInStepAddValue_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_setOutInStepAddValue_clicked()
{

    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    m_pstConfigIni->beginGroup("ParamSet");
    QString msg = m_pstConfigIni->value(str).toString();
    m_pstConfigIni->endGroup();

    int nVal = ui->spinBox_outinStepAddValue->value();
    qDebug()<<str <<"=" << msg << " nVal:"<<nVal;

    QString strTemp = QString::asprintf("%04X", nVal);
    msg.replace(16, 4, strTemp);
    qDebug() <<"msg="<<msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    m_pstIfUdp->SendMsg(data);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);

}

void MainWindow::on_pBtn_getPumpSpeed_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}


void MainWindow::on_pBtn_setPumpSpeed_clicked()
{

    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    m_pstConfigIni->beginGroup("ParamSet");
    QString msg = m_pstConfigIni->value(str).toString();
    m_pstConfigIni->endGroup();

    int nVal = ui->spinBox_pumpSpeed->value();
    qDebug()<<str <<"=" << msg << " nVal:"<<nVal;

    QString strTemp = QString::asprintf("%04X", nVal);
    msg.replace(16, 4, strTemp);
    qDebug() <<"msg="<<msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    m_pstIfUdp->SendMsg(data);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);

}


void MainWindow::on_pBtn_getXKVoltage_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getCurrentVoltage_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getMicroSwitch_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getOC_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getTouSheVoltage_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getSanSheVoltage_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getElectrol_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getPressValue_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBt_getTemp_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getVersion_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getBioTestMode_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_ParamGet);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

/*
void MainWindow::on_pBtn_setPumpSpeed_clicked()
{

    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    m_pstConfigIni->beginGroup("ParamSet");
    QString msg = m_pstConfigIni->value(str).toString();
    m_pstConfigIni->endGroup();
    qDebug()<<str <<"=" << msg;

    unsigned int val =  ui->spinBox_pumpSpeed->text().toUInt();
    qDebug() << val;

    QString strstr;
    strstr.sprintf("%08X", val);
    qDebug() << "val:" << strstr;

    msg.replace(16, 8, strstr);
    qDebug() <<"msg="<<msg;
    QByteArray stMsg = QByteArray::fromHex(msg.toUtf8());
    m_pstIfUdp->IfUdp_SendMsg(stMsg);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);
}
*/

void MainWindow::on_pBtn_ledMotorSelect_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());

    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    m_pstConfigIni->beginGroup("Control");
    QString msg = m_pstConfigIni->value(str).toString();
    m_pstConfigIni->endGroup();

    int index =  ui->comboBox_ledNum->currentIndex();
    qDebug()<<str <<"=" << msg << " index:"<<index;

    // repace **
    QString strTemp = QString::number(index);
    strTemp.insert(0, '0');
    msg.replace(16, 2, strTemp);
    qDebug() <<"msg="<<msg;

    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    m_pstIfUdp->SendMsg(data);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);
}


void MainWindow::on_pBtn_getDRegister_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    //qDebug() << str;
    m_pstConfigIni->beginGroup("ParamGet");
    QString msg = m_pstConfigIni->value(str).toString();
    m_pstConfigIni->endGroup();

    int index =  ui->comboBox_DRegister->currentIndex();
    qDebug()<<str <<"=" << msg << " index:"<<index;

    QString strTemp = QString::number(index);
    strTemp.insert(0, '0');
    msg.replace(16, 2, strTemp);
    qDebug() << "msg="<< msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    m_pstIfUdp->SendMsg(data);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);
}


void MainWindow::on_pBtn_setDRegister_clicked()
{

    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    m_pstConfigIni->beginGroup("ParamSet");
    QString msg = m_pstConfigIni->value(str).toString();
    m_pstConfigIni->endGroup();

    int index =  ui->comboBox_DRegister->currentIndex();
    qDebug()<<str <<"=" << msg << " index:"<<index;

    QString strTemp = QString::number(index);
    strTemp.insert(0, '0');
    msg.replace(16, 2, strTemp);
    qDebug() <<"msg="<<msg;

    strTemp.clear();
    strTemp.sprintf("%02X",  ui->spinBox_DRegister->value());
    msg.replace(18, 2, strTemp);
    qDebug() <<"msg="<<msg;

    QByteArray stMsg = QByteArray::fromHex(msg.toUtf8());
    m_pstIfUdp->SendMsg(stMsg);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);

}


void MainWindow::on_pBtn_turnMotorOpen_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}



void MainWindow::on_pBtn_turnMotorClose_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}


void MainWindow::on_pBtn_mixingMotorOpen_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_mixingMotorClose_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_turnMotorReset_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn, EN_PROTOCOL_CMD_Control);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}


QIfUdp* MainWindow::Get_IfUdp()
{
    return m_pstIfUdp;
}

QMsgQueue* MainWindow::Get_MsgQueue()
{
    return m_pstMsgQueue;
}

QHandleDataMsgThread*  MainWindow::Get_HandleDataMsgThread()
{
    return m_pstHandleDataMsgThread;
}

QHandleStatusMsgThread*  MainWindow::Get_HandleStatusMsgThread()
{
    return m_pstHandleStatusMsgThread;
}

