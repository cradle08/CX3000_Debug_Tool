#include "qifudp.h"

#include <QNetworkInterface>
#include <QDebug>
#include <QQueue>
#include <QByteArray>
#include <QHostAddress>
#include <QObject>

QIfUdp::QIfUdp()
{

}

QIfUdp::QIfUdp(QMsgQueue *pMsgQueue)
{
    m_stLocalIP = QHostAddress("127.0.0.1");
    m_stRemoteIP = QHostAddress("127.0.0.1");
    m_nLocalPort = 0;
    m_nRemotePort = 0;
    m_pstSocketUdp = new QUdpSocket;
    connect(m_pstSocketUdp, SIGNAL(readyRead()), this, SLOT(Recv_Msg_Handler()));

    m_pstMsgQueue = pMsgQueue;
}

QIfUdp::~QIfUdp()
{
    // free socket
    m_pstSocketUdp->close();
    delete m_pstSocketUdp;
}

qint64 QIfUdp::SendMsg(QByteArray &stMsg)
{
    qint64 nLen = 0;

    if(!stMsg.isEmpty())
    {
        qDebug() << "stMsg:" << stMsg;
        nLen = m_pstSocketUdp->writeDatagram(stMsg, m_stRemoteIP, m_nRemotePort);
    }else {
        qDebug() << "Warming: Msg is Empty , Send Nothing !";
    }

    return nLen;
}


//
bool QIfUdp::UdpSocket_Init(QHostAddress stLocalIP, unsigned short nLocalPort)
{
    m_stLocalIP = stLocalIP;
    m_nLocalPort = nLocalPort;

    bool bStatus = m_pstSocketUdp->bind(m_stLocalIP, m_nLocalPort);
    qDebug() << "bStats:" << bStatus;
    //QObject::connect(m_pstSocketUdp, SIGNAL(readyRead()), this, SLOT(Recv_Msg_Handler()));
    //connect(m_pstSocketUdp, SIGNAL(readyRead()), this, SLOT(Recv_Msg_Handler()));
    //QObject::connect(m_pstSocketUdp, &QUdpSocket::readyRead, this, &QIfUdp::Recv_Msg_Handler);

   return bStatus;
}


void QIfUdp::Recv_Msg_Handler()
{
    QHostAddress stRecvAddr;
    unsigned short nRecvPort;
    while(m_pstSocketUdp->hasPendingDatagrams())
    {
        int nLen = (int)m_pstSocketUdp->pendingDatagramSize();
        QByteArray *pRecvData = new QByteArray(nLen, 0);
        if(nLen > 0)
        {
            m_pstSocketUdp->readDatagram(pRecvData->data(), nLen, &stRecvAddr, &nRecvPort);
            qDebug() << "RecvIP:" << stRecvAddr.toString()<<" RecvPort:"<<nRecvPort<<"Data:"<< pRecvData;
        }else {
            qDebug() << "recv msg len <= 0";
            continue;
        }
        //
        if(pRecvData->at(3) == EN_MSG_TYPE_DATA) // status msg
        {
           // stDataMsgQueue.enqueue(pRecvData);

        }else if(pRecvData->at(3) == EN_MSG_TYPE_STATUS){ // data msg

           // stStatusMsgQueue.enqueue(pRecvData);
        }else { // error msg
            qDebug() <<"Recv Error Msg: " << pRecvData->data();
        }
    }
}



/*
void QIfUdp::run()
{
    QHostAddress stRecvAddr;
    quint16 nRecvPort;
    while(1){
        // if had recv msg
        while(m_pstSocketUdp->hasPendingDatagrams())
        {
            int nLen = (int)m_pstSocketUdp->pendingDatagramSize();
            QByteArray *pRecvData = new QByteArray(nLen, 0);
            if(nLen > 0)
            {
                m_pstSocketUdp->readDatagram(pRecvData->data(), nLen, &stRecvAddr, &nRecvPort);
                qDebug() << "RecvIP:" << stRecvAddr.toString()<<" RecvPort:"<<nRecvPort<<"Data:"<< pRecvData;
            }else {
                qDebug() << "recv msg len <= 0";
                continue;                
            }
            //
            if(pRecvData->at(3) == EN_MSG_TYPE_DATA) // status msg
            {
               // stDataMsgQueue.enqueue(pRecvData);

            }else if(pRecvData->at(3) == EN_MSG_TYPE_STATUS){ // data msg

               // stStatusMsgQueue.enqueue(pRecvData);
            }else { // error msg
                qDebug() <<"Recv Error Msg: " << pRecvData->data();
            }
        }
    }
}
*/


void QIfUdp::Set_LocalIP(QHostAddress stLocalIP)
{
    m_stLocalIP = stLocalIP;
}

void QIfUdp::Set_LocalPort(unsigned short nLocalPort)
{
    m_nLocalPort = nLocalPort;
}

void QIfUdp::Set_RemoteIP(QHostAddress stRemoteIP)
{
    m_stRemoteIP = stRemoteIP;
}

void QIfUdp::Set_RemotePort(unsigned short nRemotePort)
{
    m_nRemotePort = nRemotePort;
}


QHostAddress QIfUdp::Get_LocalIP()
{
    return m_stLocalIP;
}

unsigned short QIfUdp::Get_LocalPort()
{
    return m_nLocalPort;
}

QHostAddress QIfUdp::Get_RemotoIP()
{
    return m_stRemoteIP;
}

unsigned short QIfUdp::Get_RemotePort()
{
    return m_nRemotePort;

}













