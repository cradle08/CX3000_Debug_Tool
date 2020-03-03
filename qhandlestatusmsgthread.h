#ifndef QHANDLESTATUSMSGTHREAD_H
#define QHANDLESTATUSMSGTHREAD_H

#include "qmsgqueue.h"
#include "ui_mainwindow.h"
#include "qifudp.h"
#include <QDebug>
#include <QThread>
#include <QSettings>
#include <QString>




class QHandleStatusMsgThread : public QThread
{

public:
    enum EN_RECV_MSG_CMD{
        EN_RECV_MSG_CMD_TEST_START_CRP      = 0x88016004,
        EN_RECV_MSG_CMD_TEST_LOG            = 0x88019002,
        EN_RECV_MSG_CMD_CHECK_AGING_LOG     = 0x88049002,
        EN_RECV_MSG_CMD_UPDATE_ERROR_LOG    = 0x88059002,
        EN_RECV_MSG_CMD_UPDATE_REQUEST_DATA = 0x88058002,
        EN_RECV_MSG_CMD_END
    };

    enum EN_STATUS_FLAG{
        EN_STATUS_FLAG_FAIL    = 1,
        EN_STATUS_FLAG_SUCCESS = 0,
        //EN_STATUS_FLAG_END_END
    };

public:
    QHandleStatusMsgThread();

    QHandleStatusMsgThread(QMsgQueue *pstMsgQueue, QSettings *pstConfigInit, Ui::MainWindow *ui, bool bFlag = true);

    ~QHandleStatusMsgThread();

    void Set_StartFlag(bool bFlag);

    bool Get_StartFlag();

private:
    // thread handle status msg
    void run();

    /*
     *     base on recv msg cmd get the send msg cmd(details refer protocol doc).
     *     and then use send msg cmd find the key value at config.ini.
     *     use the key value parse the recv msg and disply it at ui.
     */
    void Handle_Status_Msg(QByteArray *pstByteMsg);

    QString Handle_ControlCmd_Status_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    QString Handle_TestCmd_Status_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    QString Handle_ParamSetCmd_Status_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    QString Handle_ParamGetCmd_Status_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    QString Handle_CheckAndAgingCmd_Status_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    QString Handle_UpdateCmd_Status_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    QString Handle_OthersCmd_Status_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

private:
    bool m_bStartFlag;
    QMsgQueue *m_pstMsgQueue;
    QSettings *m_pstConfigIni;
    Ui::MainWindow *m_ui;

};

#endif // QHANDLESTATUSMSGTHREAD_H







