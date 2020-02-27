#ifndef QHANDLESTATUSMSGTHREAD_H
#define QHANDLESTATUSMSGTHREAD_H

#include "qmsgqueue.h"

#include <QDebug>
#include <QThread>


class QHandleStatusMsgThread : public QThread
{
public:
    QHandleStatusMsgThread();
    QHandleStatusMsgThread(QMsgQueue *pstMsgQueue, bool bFlag = true);
    ~QHandleStatusMsgThread();

    void run();

private:
    bool m_bStartFlag;
    QMsgQueue *m_pstMsgQueue;

};

#endif // QHANDLESTATUSMSGTHREAD_H







