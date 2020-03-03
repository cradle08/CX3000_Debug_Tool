#ifndef QHANDLEDATAMSGTHREAD_H
#define QHANDLEDATAMSGTHREAD_H

#include "qifudp.h"
#include "ui_mainwindow.h"
#include <QThread>
#include <QDebug>
#include <QSettings>
#include <QString>
#include <QChart>
#include <QChartView>

class QHandleDataMsgThread : public QThread
{

public:
    QHandleDataMsgThread();

    QHandleDataMsgThread(QMsgQueue *pstMsgQueue,  QSettings *pstConfigInit, Ui::MainWindow *ui, bool bFlag = true);

    ~QHandleDataMsgThread();

    bool Get_StartFlag();

    void Set_StartFlag(bool bFlag);

    void run();

    void Handle_Data_Msg(QByteArray *pstByteMsg);

    QString Handle_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    QString Handle_WBC_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    //QString QHandleDataMsgThread::Handle_RBC_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    QString Handle_PLT_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    QString Handle_RBC_PLT_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    QString Handle_CRP_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    QString Handle_HGB_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);

    QString Handle_PT_Test_Data_Msg(QByteArray *pByteMsg, QString& strKey, quint32 nRecvCmd);


private:
    bool m_bStartFlag;
    QMsgQueue *m_pstMsgQueue;
    QSettings *m_pstConfigIni;
    Ui::MainWindow *m_ui;
};

#endif // QHANDLEDATAMSGTHREAD_H



