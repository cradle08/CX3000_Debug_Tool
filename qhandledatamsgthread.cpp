#include "qhandledatamsgthread.h"

#include <QThread>

QHandleDataMsgThread::QHandleDataMsgThread()
{

}

QHandleDataMsgThread::QHandleDataMsgThread(QMsgQueue *pstMsgQueue, QSettings *pstConfigInit, Ui::MainWindow *ui, bool bFlag)
{
    m_bStartFlag = bFlag;
    m_pstMsgQueue = pstMsgQueue;
    m_pstConfigIni = pstConfigInit;
    m_ui = ui;
    qDebug() << "Data Thread Start:" << m_bStartFlag;
}

QHandleDataMsgThread::~QHandleDataMsgThread()
{
   //quit();
}

bool QHandleDataMsgThread::Get_StartFlag()
{
    return m_bStartFlag;
}

void QHandleDataMsgThread::Set_StartFlag(bool bFlag)
{
    m_bStartFlag = bFlag;
}


void QHandleDataMsgThread::run()
{    
    while(m_bStartFlag)
    {
        if(!m_pstMsgQueue->stDataMsgQueue.isEmpty())
        {
            // handle data msg
            QByteArray *pstMsg = m_pstMsgQueue->stStatusMsgQueue.dequeue();
            Handle_Data_Msg(pstMsg);
            delete pstMsg;
        }
    }
}


void QHandleDataMsgThread::Handle_Data_Msg(QByteArray *pstByteMsg)
{
    qDebug() << "Handle Data Msg Thread, Recv Msg: " << *pstByteMsg;

    QByteArray *pstDataMsg = pstByteMsg;
    QString strKey, strInfo;
    quint32 nSendCmd = 0, nRecvCmd = 0;
    char nCmdType = pstDataMsg->at(5);

    // so far, only test cmd return data msg
    switch (nCmdType) {
        case EN_PROTOCOL_CMD_Test:
           {
                nRecvCmd = pstDataMsg->mid(4, 4).toUInt();
                m_pstConfigIni->beginGroup("Test");
                QStringList strList = m_pstConfigIni->allKeys();
                foreach(QString strTempKey, strList)
                {
                    QString strSendMsg = m_pstConfigIni->value(strTempKey).toString();
                    nSendCmd = strSendMsg.mid(4, 4).toUInt();
                    if(nRecvCmd - nSendCmd == 77000000)
                    {
                        strKey = strTempKey;
                        break;
                    }
                }
                m_pstConfigIni->endGroup();
                strInfo = Handle_Test_Data_Msg(pstByteMsg, strKey, nRecvCmd);
                //m_ui->textEdit_backMsgCtrolMenu->append(strInfo);
           }
           break;
        default:
           {
                qDebug("Return Data Msg's Cmd Type Error !");
           }
           break;
    }
}



QString QHandleDataMsgThread::Handle_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
{
    if(strKey.compare("WBCTest") == 0)
    {
        Handle_WBC_Test_Data_Msg(pByteMsg, strKey, nRecvCmd);

    }else if(strKey.compare("RBCTest") == 0){

        //Handle_RBC_Test_Data_Msg(pByteMsg, strKey, nRecvCmd);

    }else if(strKey.compare("PLTTest") == 0){

        Handle_PLT_Test_Data_Msg(pByteMsg, strKey, nRecvCmd);

    }else if(strKey.compare("RBCPLT_Test") == 0){

        Handle_RBC_PLT_Test_Data_Msg(pByteMsg, strKey, nRecvCmd);

    }else if(strKey.compare("HGBTest") == 0){

        Handle_HGB_Test_Data_Msg(pByteMsg, strKey, nRecvCmd);

    }else if(strKey.compare("CRPTest") == 0){

        Handle_CRP_Test_Data_Msg(pByteMsg, strKey, nRecvCmd);

    }else if(strKey.compare("PTTest") == 0){

    }
}


QString QHandleDataMsgThread::Handle_WBC_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
{



}

//QString QHandleDataMsgThread::Handle_RBC_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
//{

//}

QString QHandleDataMsgThread::Handle_PLT_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
{

}

QString QHandleDataMsgThread::Handle_RBC_PLT_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
{


}

QString QHandleDataMsgThread::Handle_CRP_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
{

}

QString QHandleDataMsgThread::Handle_HGB_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
{

}

QString QHandleDataMsgThread::Handle_PT_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
{


}












