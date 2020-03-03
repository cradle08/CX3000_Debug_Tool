#include "qhandlestatusmsgthread.h"


QHandleStatusMsgThread::QHandleStatusMsgThread()
{

}

QHandleStatusMsgThread::QHandleStatusMsgThread(QMsgQueue *pstMsgQueue, QSettings *pstConfigInit, Ui::MainWindow *ui, bool bFlag)
{
    m_bStartFlag   = bFlag;
    m_pstConfigIni = pstConfigInit;
    m_pstMsgQueue  = pstMsgQueue;
    m_ui =ui;
    qDebug() << "Status Thread Start:" << m_bStartFlag;
}


QHandleStatusMsgThread::~QHandleStatusMsgThread()
{
     //quit();
}

void QHandleStatusMsgThread::Set_StartFlag(bool bFlag)
{
    m_bStartFlag = bFlag;
}

bool QHandleStatusMsgThread::Get_StartFlag()
{
    return m_bStartFlag;
}

void QHandleStatusMsgThread::run()
{
    while(m_bStartFlag)
    {
        if(!m_pstMsgQueue->stStatusMsgQueue.isEmpty())
        {
            QByteArray *pstMsg = m_pstMsgQueue->stStatusMsgQueue.dequeue();
            Handle_Status_Msg(pstMsg);
            delete pstMsg;
        }
    }
}


QString QHandleStatusMsgThread::Handle_ControlCmd_Status_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
{
    QByteArray *pstControlMsg = pByteMsg;
    QString strParseInfo;

    qDebug() << "QHandleStatusMsgThread, strKey"  << strKey;
    qDebug() << *pstControlMsg;

    if(!strKey.isEmpty()) // mcu response msg
    {
        if(strKey.compare(QString("airValveOpen")) == 0)
        {

        }else if(strKey.compare(QString("airValveClose")) == 0){

        }else if(strKey.compare(QString("liquidValveOpen")) == 0){


        }else if(strKey.compare(QString("liquidValveClose")) == 0){


        }else if(strKey.compare(QString("pumpOpen")) == 0){


        }else if(strKey.compare(QString("pumpClose")) == 0){


        }else if(strKey.compare(QString("mixingMotorOpen")) == 0){


        }else if(strKey.compare(QString("mixingMotorClose")) == 0){


        }else if(strKey.compare(QString("fixMotorOpen")) == 0){


        }else if(strKey.compare(QString("mainMotorIn")) == 0){

        }else if(strKey.compare(QString("mainMotorOut")) == 0){


        }else if(strKey.compare(QString("cangIn")) == 0){


        }else if(strKey.compare(QString("cangOut")) == 0){


        }else if(strKey.compare(QString("ledOpen")) == 0){


        }else if(strKey.compare(QString("ledClose")) == 0){

           //qDebug() << "*************start************";
           //qDebug() << "8:" << QChar(pstControlMsg->at(8));
           //qDebug() << "9:" << pstControlMsg->at(9);
           char nLedIndex = pstControlMsg->at(8);
           char nFlag     = pstControlMsg->at(9);

           //qDebug() << "nLedIndex:" << nLedIndex << "nFlag:" << nFlag;

           strParseInfo.sprintf("灯 %d：", nLedIndex);
           qDebug() << "strParseInfo:" << strParseInfo;
           if(nFlag == EN_STATUS_FLAG_SUCCESS)
           {
               strParseInfo.append("设置成功");
           }else{
               strParseInfo.append("设置失败");
           }
           qDebug() << "strParseInfo:" << strParseInfo;

        }else if(strKey.compare(QString("liquidValveClose")) == 0){


        }else if(strKey.compare(QString("turnMotorReset")) == 0){

        }
    }else{ // mcu lanuch msg

        if(nRecvCmd == 0)
        {
            ;
        }
    }

    qDebug() << strParseInfo;
    return strParseInfo;
}


QString QHandleStatusMsgThread::Handle_TestCmd_Status_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
{
    QByteArray *pstControlMsg = pByteMsg;
    QString strParseInfo;

    if(!strKey.isEmpty()) // mcu response msg
    {
        if(strKey.compare(QString("WBCTest")) == 0)
        {

        }else if(strKey.compare(QString("RBCBCTest")) == 0){

        }else if(strKey.compare(QString("PLTTest")) == 0){


        }else if(strKey.compare(QString("HGBTest")) == 0){


        }else if(strKey.compare(QString("backGroundCRP")) == 0){


        }else if(strKey.compare(QString("backGroundHGB")) == 0){


        }else{

        }
    }else{ // mcu lanuch msg

        if(nRecvCmd == 0)
        {
            ;
        }
    }
    return strParseInfo;
}


QString QHandleStatusMsgThread::Handle_ParamSetCmd_Status_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
{
    QByteArray *pstControlMsg = pByteMsg;
    QString strParseInfo;

    if(!strKey.isEmpty()) // mcu response msg
    {
        if(strKey.compare(QString("setOutInStepAddValue")) == 0)
        {

        }else if(strKey.compare(QString("setPressAddValue")) == 0){

        }else if(strKey.compare(QString("setDRegister")) == 0){


        }else if(strKey.compare(QString("setPumpSpeed")) == 0){


        }else if(strKey.compare(QString("setCurValue")) == 0){


        }else if(strKey.compare(QString("setHGBMode")) == 0){


        }else if(strKey.compare(QString("setCRPMode")) == 0){

        }
    }else{ // mcu lanuch msg

        if(nRecvCmd == 0)
        {
            ;
        }
    }
    return strParseInfo;
}


QString QHandleStatusMsgThread::Handle_ParamGetCmd_Status_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
{
    QByteArray *pstControlMsg = pByteMsg;
    QString strParseInfo;

    if(!strKey.isEmpty()) // mcu response msg
    {
        if(strKey.compare(QString("getPressValue")) == 0)
        {

        }else if(strKey.compare(QString("getPumpSpeed")) == 0){

        }else if(strKey.compare(QString("getOutInStepAddValue")) == 0){


        }else if(strKey.compare(QString("getDRegister")) == 0){


        }else if(strKey.compare(QString("getPressAddValue")) == 0){


        }else if(strKey.compare(QString("getTemp")) == 0){


        }else if(strKey.compare(QString("getXKVoltage")) == 0){


        }else if(strKey.compare(QString("getCurrentVoltage")) == 0){


        }else if(strKey.compare(QString("getSanSheVoltage")) == 0){


        }else if(strKey.compare(QString("getTouSheVoltage")) == 0){

        }else if(strKey.compare(QString("getMicroSwitch")) == 0){


        }else if(strKey.compare(QString("getOC")) == 0){


        }else if(strKey.compare(QString("getElectrol")) == 0){

        }else if(strKey.compare(QString("getBioTestMode")) == 0){

        }else if(strKey.compare(QString("getVersion")) == 0){

        }
    }else{ // mcu lanuch msg

        if(nRecvCmd == 0)
        {
            ;
        }
    }
    return strParseInfo;
}


QString QHandleStatusMsgThread::Handle_CheckAndAgingCmd_Status_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd)
{
    QByteArray *pstControlMsg = pByteMsg;
    QString strParseInfo;

    if(!strKey.isEmpty()) // mcu response msg
    {
        if(strKey.compare(QString("motorOutSelfCheck")) == 0)
        {

        }else if(strKey.compare(QString("motorInSelfCheck")) == 0){

        }else if(strKey.compare(QString("currentSelfCheck")) == 0){


        }else if(strKey.compare(QString("buildPressSelfCheck")) == 0){


        }else if(strKey.compare(QString("airLightSelfCheck")) == 0){


        }else if(strKey.compare(QString("pumpSelfCheck")) == 0){


        }else if(strKey.compare(QString("airValveSelfCheck")) == 0){


        }else if(strKey.compare(QString("liquidValveSelfCheck")) == 0){


        }else if(strKey.compare(QString("mixingMotorSelfCheck")) == 0){


        }else if(strKey.compare(QString("turnMotorSelfCheck")) == 0){

        }
    }else{ // mcu lanuch msg

        if(nRecvCmd == 0)
        {
            ;
        }
    }
    return strParseInfo;
}


QString QHandleStatusMsgThread::Handle_UpdateCmd_Status_Msg(QByteArray*pByteMsg, QString& strKey, quint32 nRecvCmd)
{
    QByteArray *pstControlMsg = pByteMsg;
    QString strParseInfo;

    if(!strKey.isEmpty()) // mcu response msg
    {
        if(strKey.compare(QString("startUpdate")) == 0)
        {

        }else if(strKey.compare(QString("queryUpdateFlag")) == 0){

        }else if(strKey.compare(QString("setUpdateFlag")) == 0){

        }
    }else{ // mcu lanuch msg

        if(nRecvCmd == 0)
        {
            ;
        }
    }
    return strParseInfo;
}


QString QHandleStatusMsgThread::Handle_OthersCmd_Status_Msg(QByteArray*pByteMsg, QString& strKey, quint32 nRecvCmd)
{
    QByteArray *pstControlMsg = pByteMsg;
    QString strParseInfo;

    if(!strKey.isEmpty()) // mcu response msg
    {
        if(strKey.compare(QString("selfDefineMsg")) == 0)
        {

        }else{

        }
    }else{ // mcu lanuch msg

        if(nRecvCmd == 0)
        {
            ;
        }
    }
    return strParseInfo;
}


/*
 *     base on recv msg cmd get the send msg cmd(details refer protocol doc).
 *     and then use send msg cmd find the key value at config.ini.
 *     use the key value parse the recv msg and disply it at ui.
 */
void QHandleStatusMsgThread::Handle_Status_Msg(QByteArray *pstByteMsg)
{
    qDebug() << "Handle Status Msg Thread, Recv Msg: " << *pstByteMsg;

    QByteArray *pstStatusMsg = pstByteMsg;
    char nCmdType = pstStatusMsg->at(5);

    QString strKey, strInfo;
    quint32 nRecvCmd = 0, nSendCmd = 0;

    nRecvCmd = pstStatusMsg->mid(4, 4).toHex().toUInt();
    qDebug() << "Recv Cmd Init:" << nRecvCmd;

    switch (nCmdType)
    {
        case EN_PROTOCOL_CMD_Control:
            {
                m_pstConfigIni->beginGroup("Control");
                QStringList strList = m_pstConfigIni->allKeys();
                foreach(QString strTempKey, strList)
                {
                    QString strSendMsg = m_pstConfigIni->value(strTempKey).toString();
                    nSendCmd = strSendMsg.mid(8, 8).toUInt();
                    //qDebug() <<"Send Cmd Int:" << nSendCmd;

                    if((nRecvCmd - nSendCmd) == 77000000) // details refer the protocol doc
                    {
                        qDebug() <<"Send Cmd Int:" << nSendCmd;
                        strKey = strTempKey;
                        break;
                    }
                }
                m_pstConfigIni->endGroup();
                //m_ui->textEdit_backMsgCtrolMenu->append(strKey); // show recv msg context at ui
                //qDebug() << "1: " << strKey;
                strInfo = Handle_ControlCmd_Status_Msg(pstByteMsg, strKey, nRecvCmd); // base on the key parse the info at recv msg, each msg have different and corresponding info.
                //qDebug() <<"2: " << strInfo;
                m_ui->textEdit_backMsgCtrolMenu->append(strInfo);
            }
            break;
        case EN_PROTOCOL_CMD_Test:
            {
                m_pstConfigIni->beginGroup("Test");
                QStringList strList = m_pstConfigIni->allKeys();
                foreach(QString strTempKey, strList)
                {
                    QString strSendMsg = m_pstConfigIni->value(strTempKey).toString();
                    nSendCmd = strSendMsg.mid(8, 8).toUInt();
                    //qDebug() <<"Send Cmd Int:" << nSendCmd;

                    if((nRecvCmd - nSendCmd) == 77000000)
                    {
                        qDebug() <<"Send Cmd Int:" << nSendCmd;
                        strKey = strTempKey;
                        break;
                    }
                }
                m_pstConfigIni->endGroup();
                Handle_TestCmd_Status_Msg(pstByteMsg, strKey, nRecvCmd);
                m_ui->textEdit_backMsgCtrolMenu->append(strInfo);
            }
            break;
        case EN_PROTOCOL_CMD_ParamSet:
            {
                m_pstConfigIni->beginGroup("ParamSet");
                QStringList strList = m_pstConfigIni->allKeys();
                foreach(QString strTempKey, strList)
                {
                    QString strSendMsg = m_pstConfigIni->value(strTempKey).toString();
                    nSendCmd = strSendMsg.mid(8, 8).toUInt();
                    qDebug() <<"Send Cmd Int:" << nSendCmd;

                    if((nRecvCmd - nSendCmd) == 77000000)
                    {
                        qDebug() <<"Send Cmd Int:" << nSendCmd;
                        strKey = strTempKey;
                        break;
                    }
                }
                m_pstConfigIni->endGroup();
                Handle_ParamSetCmd_Status_Msg(pstByteMsg, strKey, nRecvCmd);
                m_ui->textEdit_backMsgCtrolMenu->append(strInfo);
            }
            break;
        case EN_PROTOCOL_CMD_ParamGet:
            {
                m_pstConfigIni->beginGroup("ParamGet");
                QStringList strList = m_pstConfigIni->allKeys();
                foreach(QString strTempKey, strList)
                {
                    QString strSendMsg = m_pstConfigIni->value(strTempKey).toString();
                    nSendCmd = strSendMsg.mid(8, 8).toUInt();
                    qDebug() <<"Send Cmd Int:" << nSendCmd;

                    if((nRecvCmd - nSendCmd) == 77000000)
                    {
                        qDebug() <<"Send Cmd Int:" << nSendCmd;
                        strKey = strTempKey;
                        break;
                    }
                }
                m_pstConfigIni->endGroup();
                Handle_ParamSetCmd_Status_Msg(pstByteMsg, strKey, nRecvCmd);
                m_ui->textEdit_backMsgCtrolMenu->append(strInfo);
            }
            break;
        case EN_PROTOCOL_CMD_CheckAndAging:
            {
                m_pstConfigIni->beginGroup("CheckAndAging");
                QStringList strList = m_pstConfigIni->allKeys();
                foreach(QString strTempKey, strList)
                {
                    QString strSendMsg = m_pstConfigIni->value(strTempKey).toString();
                    nSendCmd = strSendMsg.mid(8, 8).toUInt();
                    qDebug() <<"Send Cmd Int:" << nSendCmd;

                    if((nRecvCmd - nSendCmd) == 77000000)
                    {
                        qDebug() <<"Send Cmd Int:" << nSendCmd;
                        strKey = strTempKey;
                        break;
                    }
                }
                m_pstConfigIni->endGroup();
                Handle_CheckAndAgingCmd_Status_Msg(pstByteMsg, strKey, nRecvCmd);
                m_ui->textEdit_backMsgCtrolMenu->append(strInfo);
            }
            break;
        case EN_PROTOCOL_CMD_Update:
            {
                m_pstConfigIni->beginGroup("Update");
                QStringList strList = m_pstConfigIni->allKeys();
                foreach(QString strTempKey, strList)
                {
                    QString strSendMsg = m_pstConfigIni->value(strTempKey).toString();
                    nSendCmd = strSendMsg.mid(8, 8).toUInt();
                    qDebug() <<"Send Cmd Int:" << nSendCmd;

                    if((nRecvCmd - nSendCmd) == 77000000)
                    {
                        qDebug() <<"Send Cmd Int:" << nSendCmd;
                        strKey = strTempKey;
                        break;
                    }
                }
                m_pstConfigIni->endGroup();
                Handle_UpdateCmd_Status_Msg(pstByteMsg, strKey, nRecvCmd);
                m_ui->textEdit_backMsgCtrolMenu->append(strInfo);
            }
            break;
        case EN_PROTOCOL_CMD_Others:
            {
                m_pstConfigIni->beginGroup("Others");
                QStringList strList = m_pstConfigIni->allKeys();
                foreach(QString strTempKey, strList)
                {
                    QString strSendMsg = m_pstConfigIni->value(strTempKey).toString();
                    nSendCmd = strSendMsg.mid(8, 8).toUInt();
                    qDebug() <<"Send Cmd Int:" << nSendCmd;

                    if((nRecvCmd - nSendCmd) == 77000000)
                    {
                        qDebug() <<"Send Cmd Int:" << nSendCmd;
                        strKey = strTempKey;
                        break;
                    }
                }
                m_pstConfigIni->endGroup();
                Handle_OthersCmd_Status_Msg(pstByteMsg, strKey, nRecvCmd);
                m_ui->textEdit_backMsgCtrolMenu->append(strInfo);
            }
            break;
        default:
            {
                qDebug() << "Error: Protocol Type is Wrong !";
            }
            break;
    }
}











