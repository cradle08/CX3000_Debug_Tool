#ifndef QRECVMSGTHREAD_H
#define QRECVMSGTHREAD_H

#include "qmsgqueue.h"

#include <QThread>
#include <QQueue>
#include <QByteArray>
#include <QHostAddress>
#include <QUdpSocket>




enum {
    EN_MSG_TYPE_CTRL    = 0x57,
    EN_MSG_TYPE_QUERY   = 0x52,
    EN_MSG_TYPE_STATUS  = 0x53,
    EN_MSG_TYPE_DATA    = 0x44,
    EN_MSG_TYPE_END     = 0x00,
};


class QIfUdp : public QUdpSocket
{
    Q_OBJECT;

public:
    QIfUdp();

    QIfUdp(QMsgQueue *pMsgQueue);

    ~QIfUdp();

public slots:
    void Recv_Msg_Handler();

public:
    bool UdpSocket_Init(QHostAddress stLocalIP, unsigned short nLocalPort);

    qint64 SendMsg(QByteArray &stMsg);

    void Set_LocalIP(QHostAddress stLocalIP);

    void Set_LocalPort(unsigned short nLocalPort);

    void Set_RemoteIP(QHostAddress stRemoteIP);

    void Set_RemotePort(unsigned short nRemotePort);

    QHostAddress Get_LocalIP();

    unsigned short Get_LocalPort();

    QHostAddress Get_RemotoIP();

    unsigned short Get_RemotePort();

    QList<QHostAddress>& Get_Local_Address();

    QQueue<QByteArray*>& Get_DataMsg_Queue();

    QQueue<QByteArray*>& Get_StatusMsg_Queue();


private:

    QHostAddress m_stLocalIP, m_stRemoteIP;
    unsigned short m_nLocalPort, m_nRemotePort;
    QUdpSocket *m_pstSocketUdp;

    QMsgQueue *m_pstMsgQueue;
public:
    friend class MainWindow;
};

#endif // QIfUdp





