#include "qhandlestatusmsgthread.h"

QHandleStatusMsgThread::QHandleStatusMsgThread()
{

}

QHandleStatusMsgThread::QHandleStatusMsgThread(QMsgQueue *pstMsgQueue, bool bFlag)
{
    m_bStartFlag = bFlag;
    m_pstMsgQueue = pstMsgQueue;
    qDebug() << "Status Thread Start:" << m_bStartFlag;
}



QHandleStatusMsgThread::~QHandleStatusMsgThread()
{
     //quit();
}

void QHandleStatusMsgThread::run()
{
    qDebug() << "QHandleStatusMsgThread";
    msleep(500);

    while(m_bStartFlag)
    {
        if(!m_pstMsgQueue->stStatusMsgQueue.isEmpty())
        {
            QByteArray *pStatus = m_pstMsgQueue->stStatusMsgQueue.dequeue();
            /*
             if(pStatus == )
             {

             }else if(pStatus ==){

             }else if(pStatus ==){

             }else{

             }
             */
            delete pStatus;
        }
    }
}




