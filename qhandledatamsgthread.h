#ifndef QHANDLEDATAMSGTHREAD_H
#define QHANDLEDATAMSGTHREAD_H

#include "qifudp.h"

#include <QThread>
#include <QDebug>

class QHandleDataMsgThread : public QThread
{
public:
    QHandleDataMsgThread();

    QHandleDataMsgThread(QMsgQueue *pstMsgQueue, bool bFlag = true);

    ~QHandleDataMsgThread();

    bool Get_StartFlag();

    void Set_StartFlag();

    void run();

private:
    bool m_bStartFlag;
    QMsgQueue *m_pstMsgQueue;
};

#endif // QHANDLEDATAMSGTHREAD_H



