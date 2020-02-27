#ifndef QMSGQUEUE_H
#define QMSGQUEUE_H

#include <QQueue>
#include <QByteArray>

class QMsgQueue
{
public:
    QMsgQueue();
    ~QMsgQueue();

public:
    QQueue<QByteArray*> stDataMsgQueue; //  recv data msg
    QQueue<QByteArray*> stStatusMsgQueue; // recv status msg
};

#endif // QMSGQUEUE_H
