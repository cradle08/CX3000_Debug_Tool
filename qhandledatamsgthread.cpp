#include "qhandledatamsgthread.h"

#include <QThread>

QHandleDataMsgThread::QHandleDataMsgThread()
{

}

QHandleDataMsgThread::QHandleDataMsgThread(QMsgQueue *pstMsgQueue, bool bFlag)
{
    m_bStartFlag = bFlag;
    m_pstMsgQueue = pstMsgQueue;
    qDebug() << "Data Thread Start:" << m_bStartFlag;
}

QHandleDataMsgThread::~QHandleDataMsgThread()
{
   //quit();
}


void QHandleDataMsgThread::run()
{
    qDebug() << "QHandleDataMsgThread";
    msleep(500);

    while(m_bStartFlag)
    {
        if(!m_pstMsgQueue->stDataMsgQueue.isEmpty())
        {
            // handle data msg
            QByteArray *pData = m_pstMsgQueue->stDataMsgQueue.dequeue();
            // todo
            /*
            if(pData == wbc)
            {

            }else if(pData == plt){

            }else if(pData == crp){

            }else if(pData == hgb){

            }else{

            }

             */
            delete pData;
        }

    }
}












