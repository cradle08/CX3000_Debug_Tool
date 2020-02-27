#include "qmsgqueue.h"

QMsgQueue::QMsgQueue()
{

}


QMsgQueue::~QMsgQueue()
{
    if(!stStatusMsgQueue.isEmpty())
    {
        foreach(QByteArray *pMsgStatus, stStatusMsgQueue)
        {
            stStatusMsgQueue.removeOne(pMsgStatus);
            delete  pMsgStatus;
        }
        stStatusMsgQueue.clear();
    }
    //
    if(!stDataMsgQueue.isEmpty())
    {
        foreach(QByteArray *pMsgData, stDataMsgQueue)
        {
            stStatusMsgQueue.removeOne(pMsgData);
            delete  pMsgData;
        }
        stDataMsgQueue.clear();
    }
}










