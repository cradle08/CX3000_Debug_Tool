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
    //this->setWindowIcon(QIcon(...));

    // init localip combobox
    QList<QHostAddress> addrList;
    addrList = QNetworkInterface::allAddresses();
    foreach(QHostAddress addr, addrList)
    {
        quint32 ipaddr = addr.toIPv4Address();
        if(ipaddr == 0) continue;
         ui->comboBox_localIP->addItem(addr.toString());
         qDebug() << addr.toString();
    }

    // init remote ip and port
    stRemoteIP = QHostAddress("192.168.1.10");
    nRemotePort = 8000;
    nLocalPort  = 9000;
    ui->lineEdit_remoteIP->setText(stRemoteIP.toString());
    QString str = QString::number(nRemotePort);
    ui->lineEdit_remotePort->setText(str);
    // init local port
    str = QString::number(nLocalPort);
    ui->lineEdit_localPort->setText(str);
    // list init
    stList.clear();

    // UDP init
    label_barStatus = new QLabel("Socket Status ...");
    label_barStatus->setText("Socket Status");
    ui->statusBar->addWidget(label_barStatus);
    // UDP Socket
    socketUdp = new QUdpSocket(this);
    connect(socketUdp, SIGNAL(readyRead()), this, SLOT(Recv_Msg_Handler()));
    ui->pBtn_UDPClose->setEnabled(false);
    //Config Init
    Config_Init();
    // led combobix
    LED_Combobox_Init();
    // wbc tab menu init
    CreatCharts();
}



MainWindow::~MainWindow()
{
    delete ui;
    delete socketUdp;
    delete label_barStatus;
    delete configIni;
}

void MainWindow::Config_Init()
{
    qDebug() <<"Config Init";
    QString strProjectPath = QCoreApplication::applicationDirPath();
    qDebug() << strProjectPath;

    configIni = new QSettings(tr("%1/config.ini").arg(strProjectPath), QSettings::IniFormat);
    //configIni.setIniCodec(QTextCodec::codecForName("UTF-8"));
    configIni->setIniCodec("UTF-8");
}


void MainWindow::LED_Combobox_Init()
{
   configIni->beginGroup("LED");
   for(quint16 i = 0; i < 8; i++)
   {
        QString str = configIni->value(tr("LED%1").arg(i)).toString();
        ui->comboBox_ledNum->addItem(str);
   }
   configIni->endGroup();
}
//
void MainWindow::Send_TestCmd()
{
    //QString str;
    //str = ui->textEdit->toPlainText();
    //QByteArray data = str.toLatin1();
    //clientudp->writeDatagram(data.data(), data.size(), QHostAddress::LocalHost, nUdpPort);
    qDebug()<<nNum;
    nNum++;
//    socketUdp->writeDatagram(ui->textEdit->toPlainText().toUtf8(), QHostAddress::LocalHost, 7788);

}

void MainWindow::Recv_Msg_Handler()
{
    QHostAddress stRecvAddr;
    quint16 nRecvPort;
    while(socketUdp->hasPendingDatagrams())
    {
        int nLen = (int)socketUdp->pendingDatagramSize();
        QByteArray *pRecvData = new QByteArray(nLen, 0);
        if(nLen > 0)
        {
            socketUdp->readDatagram(pRecvData->data(), nLen, &stRecvAddr, &nRecvPort);
            qDebug() << "RecvIP:" << stRecvAddr.toString()<<" RecvPort:"<<nRecvPort<<"Data:"<< pRecvData;
            stList.append(pRecvData);
        }
        //QNetworkDatagram datagram = socketUdp->receiveDatagram();

        if(ui->tabWidget->currentIndex() == EN_TAB_INDEX_CTROL)
        {
            if(!stList.isEmpty())
            {
                QByteArray *pData;
                pData = stList.takeFirst();
                qDebug()<<"addr:"<<pData<<", data="<<*pData;
                ui->textEdit_backMsgCtrolMenu->append(pData->toHex());
                delete pData;
            }
        }
    }
}

void MainWindow::CreatCharts()
{
    QChartView *chartView = new QChartView(ui->tab_WBC);
    QChart *chart = new QChart();
    //chart->setTitle("Blood Cell Data");

    chartView->setChart(chart);
/*
    QRect rect;
    rect = ui->tab_WBC->rect();
    qDebug()<<"rect:"<< rect;
    rect = ui->tab_WBC->geometry();
    qDebug() <<"geometry:"<< rect;
    QSize size = ui->tab_WBC->size();
    qDebug() <<"size:"<< size;

    //QRect rect(ui->tab_WBC->x(), ui->tab_WBC->y(), 600, 360);
    qDebug() << ui->tab_WBC->x()<< ui->tab_WBC->x();
 */
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

    /*
    delete chartView;
    delete  chart;
    delete  series;
    delete  axisX;
    delete  axisY;
    */
}


//----------------------Ctrol-------------------------------
QString MainWindow::Button_Send_Msg_Handler(QPushButton *pBtn)
{
    //QPushButton btn = button;
    QString str = pBtn->objectName();

    str = str.mid(str.indexOf("_") + 1);
    configIni->beginGroup("Protocol");
    QString msg = configIni->value(str).toString();
    configIni->endGroup();
    qDebug()<<str <<"=" << msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    socketUdp->writeDatagram(data, stRemoteIP, nRemotePort);
    return msg;
}


void MainWindow::on_comboBox_localIP_currentIndexChanged(const QString &arg1)
{

    stLocalIP = QHostAddress(arg1);
    if(stLocalIP.isNull())
    {
        qDebug() << "localIP Input Error, strLocalIP:" << stLocalIP;
        QMessageBox::warning(this, "Waring", "localIP Input Error");
        return;
    }
    qDebug() << "comboBox_localIP, strLocalIP:" << stLocalIP;

}

void MainWindow::on_lineEdit_localPort_textChanged(const QString &arg1)
{
    nLocalPort = arg1.toUShort();
    qDebug() << arg1 << "";
}

void MainWindow::on_lineEdit_localPort_editingFinished()
{
    nLocalPort = ui->lineEdit_localPort->text().toUShort();
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
    stRemoteIP = QHostAddress(str);
    if(stRemoteIP.isNull())
    {
        qDebug() <<"remote ip input is error"<< stRemoteIP;
        QMessageBox::warning(this, "Waring", "RemoteIP Input Error");
        return;
    }
    qDebug() <<"remote ip:"<< stRemoteIP;
}

void MainWindow::on_lineEdit_remotePort_editingFinished()
{
    nRemotePort = ui->lineEdit_remotePort->text().toUShort();
    if(nRemotePort == 0)
    {
        qDebug() << "remoteIP:" << nRemotePort;
        QMessageBox::warning(this, "Waring", "RemotePort Input Error ");
        return;
    }
    qDebug() << "remoteIP:" << nRemotePort;
}

void MainWindow::on_pBtn_UDPOpen_clicked()
{
    qDebug() <<"Bind: "<< stLocalIP << " "<<nLocalPort;
    if(socketUdp->bind(stLocalIP, nLocalPort))
    {
        label_barStatus->setText("Socket Bind Success");
    }else{
        label_barStatus->setText("Socket Bind Error");
    }

    ui->pBtn_UDPOpen->setEnabled(false);
    ui->pBtn_UDPClose->setEnabled(true);
    ui->lineEdit_remoteIP->setEnabled(false);
    ui->lineEdit_remotePort->setEnabled(false);
    ui->comboBox_localIP->setEnabled(false);
    ui->lineEdit_localPort->setEnabled(false);
   // label_barStatus->setText("UDP Bind");
}


void MainWindow::on_pBtn_UDPClose_clicked()
{
    socketUdp->abort();
    ui->pBtn_UDPOpen->setEnabled(true);
    ui->pBtn_UDPClose->setEnabled(false);
    ui->lineEdit_remoteIP->setEnabled(true);
    ui->lineEdit_remotePort->setEnabled(true);
    ui->comboBox_localIP->setEnabled(true);
    ui->lineEdit_localPort->setEnabled(true);
    label_barStatus->setText("UDP Close");
}

void MainWindow::on_pBtn_liquidValveClose_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_liquidValveOpen_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_airValveOpen_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_airValveClose_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_ledOpen_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    configIni->beginGroup("Protocol");
    QString msg = configIni->value(str).toString();
    configIni->endGroup();

    int index =  ui->comboBox_ledNum->currentIndex();
    qDebug()<<str <<"=" << msg << " index:"<<index;

    QString strTemp = QString::number(index);
    strTemp.insert(0, '0');
    msg.replace(16, 2, strTemp);
    qDebug() <<"msg="<<msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    socketUdp->writeDatagram(data, stRemoteIP, nRemotePort);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);
}

void MainWindow::on_pBtn_ledClose_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    configIni->beginGroup("Protocol");
    QString msg = configIni->value(str).toString();
    configIni->endGroup();

    int index =  ui->comboBox_ledNum->currentIndex();
    qDebug()<<str <<"=" << msg << " index:"<<index;

    QString strTemp = QString::number(index);
    strTemp.insert(0, '0');
    msg.replace(16, 2, strTemp);
    qDebug() <<"msg="<<msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    socketUdp->writeDatagram(data, stRemoteIP, nRemotePort);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);
}

void MainWindow::on_pBtn_mainMotorIn_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_mainMotorOut_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_cangIn_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_cangOut_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_pumpOpen_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_pumpClose_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_WBCTest_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_RBCPLT_Test_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_setHGBMode_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_setCRPMode_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_backGroundCRP_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_CRPTest_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_backGroundHGB_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_HGBTest_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_airValveSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_liquidValveSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_motorOutSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_motorInSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_buildPressSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_airLightSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_pumpSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_currentSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_selfDefineMsg_clicked()
{
    QString msg = ui->textEdit_selfDefineMsg->toPlainText();
    qDebug() << msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    socketUdp->writeDatagram(data, stRemoteIP, nRemotePort);

    QPushButton *pBtn = (QPushButton*)(sender());
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_fixMotorClose_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_fixMotorOpen_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_ledSelect_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_mixingMotorSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_turnMotorSelfCheck_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

//--------------------set menu-------------------------
void MainWindow::on_pBtn_getPressAddValue_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_setPressAddValue_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    configIni->beginGroup("Protocol");
    QString msg = configIni->value(str).toString();
    configIni->endGroup();

    int nVal = ui->spinBox_pressAddValue->value();
    qDebug()<<str <<"=" << msg << " nVal:"<<nVal;

    QString strTemp = QString::asprintf("%04X", nVal);
    msg.replace(16, 4, strTemp);
    qDebug() <<"msg="<<msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    socketUdp->writeDatagram(data, stRemoteIP, nRemotePort);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);
}


void MainWindow::on_pBtn_getOutInStepAddValue_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_setOutInStepAddValue_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    configIni->beginGroup("Protocol");
    QString msg = configIni->value(str).toString();
    configIni->endGroup();

    int nVal = ui->spinBox_outinStepAddValue->value();
    qDebug()<<str <<"=" << msg << " nVal:"<<nVal;

    QString strTemp = QString::asprintf("%04X", nVal);
    msg.replace(16, 4, strTemp);
    qDebug() <<"msg="<<msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    socketUdp->writeDatagram(data, stRemoteIP, nRemotePort);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);
}

void MainWindow::on_pBtn_getPumpSpeed_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_setPumpSpeed_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    configIni->beginGroup("Protocol");
    QString msg = configIni->value(str).toString();
    configIni->endGroup();

    int nVal = ui->spinBox_pumpSpeed->value();
    qDebug()<<str <<"=" << msg << " nVal:"<<nVal;

    QString strTemp = QString::asprintf("%04X", nVal);
    msg.replace(16, 4, strTemp);
    qDebug() <<"msg="<<msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    socketUdp->writeDatagram(data, stRemoteIP, nRemotePort);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);
}

void MainWindow::on_pBtn_getXKVoltage_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getCurrentVoltage_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getMicroSwitch_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getOC_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getTouSheVoltage_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getSanSheVoltage_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getElectrol_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getPressValue_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBt_getTemp_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getVersion_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_getBioTestMode_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_pumpSpeedSet_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    configIni->beginGroup("Protocol");
    QString msg = configIni->value(str).toString();
    configIni->endGroup();
    qDebug()<<str <<"=" << msg;

    unsigned int val =  ui->spinBox_pumpSpeed->text().toUInt();
    qDebug() << val;

    QString strstr;
    strstr.sprintf("%08X", val);
    qDebug() << "val:" << strstr;

    msg.replace(16, 8, strstr);
    qDebug() <<"msg="<<msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    socketUdp->writeDatagram(data, stRemoteIP, nRemotePort);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);
}

void MainWindow::on_pBtn_ledMotorSelect_clicked()
{
    //QPushButton *pBtn = ((QPushButton*)sender());
    //QString str = pBtn->text().append(":");
    //ui->textEdit_backMsgCtrolMenu->append(str);

    QPushButton *pBtn = ((QPushButton*)sender());
    QString str = pBtn->objectName();
    str = str.mid(str.indexOf("_") + 1);
    qDebug() << str;
    configIni->beginGroup("Protocol");
    QString msg = configIni->value(str).toString();
    configIni->endGroup();

    int index =  ui->comboBox_ledNum->currentIndex();
    qDebug()<<str <<"=" << msg << " index:"<<index;

    QString strTemp = QString::number(index);
    strTemp.insert(0, '0');
    msg.replace(16, 2, strTemp);
    qDebug() <<"msg="<<msg;
    QByteArray data = QByteArray::fromHex(msg.toUtf8());
    socketUdp->writeDatagram(data, stRemoteIP, nRemotePort);

    QString strr = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(strr);
}

void MainWindow::on_pBtn_getDRegister_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}

void MainWindow::on_pBtn_setDRegister_clicked()
{
    QPushButton *pBtn = ((QPushButton*)sender());
    QString msg = Button_Send_Msg_Handler(pBtn);
    QString str = pBtn->text().append(":").append(msg);
    ui->textEdit_backMsgCtrolMenu->append(str);
}







