#include "qbloodchartview.h"
#include "qglobal.h"

#include <QTime>


QBloodChartView::QBloodChartView()
{

}


QBloodChartView::QBloodChartView(QWidget *parent) : QChartView(parent)
{
    m_nNumber = 0;
    m_pstXAxis = new QValueAxis;
    m_pstYAxis = new QValueAxis;
    m_pstLineSeries = new QLineSeries;
    m_pstChart = new QChart;

    m_pstChart->addSeries(m_pstLineSeries);
    m_pstChart->setTitle("BloodCell Signal Map");

    m_pstXAxis->setRange(0, 512);
    m_pstXAxis->setTitleText("blood data");
    m_pstXAxis->setTickCount(8);
   // m_pstChart->addAxis(m_pstYAxis, Qt::AlignLeft);
    m_pstChart->setAxisX(m_pstXAxis, m_pstLineSeries);

    m_pstYAxis->setRange(0, 5);
    m_pstYAxis->setTitleText("blood V");
    m_pstYAxis->setTickCount(6);
   // m_pstChart->addAxis(m_pstYAxis, Qt::AlignBottom);
    m_pstChart->setAxisY(m_pstYAxis, m_pstLineSeries);

   // m_pstChart->setAxisX(m_pstXAxis, m_pstLineSeries);
    //m_pstChart->setAxisY(m_pstYAxis, m_pstLineSeries);

    //setRenderHint(QPainter::Antialiasing);
    setChart(m_pstChart);
}


QBloodChartView::~QBloodChartView()
{

}


void QBloodChartView::Update(QByteArray* pByteMsg, quint32 nNumber)
{
    quint32 i = 0, nIndex = 0;
    qreal nValue = 0.0;
    quint32 nLen = (quint32)pByteMsg->length() - 12; // data len in bytes

    qsrand(111414);

    for(i = 0; i < m_nsDataLen; i += 1)
    {
        //nValue = qrand()%5.0;//((pByteMsg->data()[i] << 8) | pByteMsg->data()[i + 1])*5/4096;
        //qDebug() << nValue;
         m_pstLineSeries->append(m_nNumber * m_nsDataLen + nIndex, qrand() % 5);
         nIndex += 1;
    }
    m_pstChart->scroll(m_nsDataLen, 0);
    m_nNumber++;


    /*

    if(nLen > 2*m_nsDataLen)
    {
        qDebug("Error: Data Lenght More Than 512");
    }
    qDebug() << "Data Len:" << nLen << "nNumber:" << nNumber;

    if(nNumber == 1)
    {
        for(i = 0; i < nLen; i += 2)
        {
            nValue = qrand()%5;//((pByteMsg->data()[i] << 8) | pByteMsg->data()[i + 1])*5/4096;
            qDebug() << nValue;
             m_pstLineSeries->append(nIndex, nValue);
             nIndex += 1;
        }
    }else if(nNumber == 2){

        for(i = 0; i < nLen; i += 2)
        {
             nValue = qrand()%5;//((pByteMsg->data()[i] << 8) | pByteMsg->data()[i + 1])*5/4096;
             qDebug() << nValue;
             m_pstLineSeries->append(m_nNumber * m_nsDataLen + nIndex, nValue);
             nIndex += 1;
        }

    }else {

        for(i = 0; i < nLen; i += 2)
        {
            nValue = qrand()%5;//((pByteMsg->data()[i] << 8) | pByteMsg->data()[i + 1])*5/4096;
            qDebug() << nValue;
             m_pstLineSeries->append(m_nNumber * m_nsDataLen + nIndex, nValue);
             nIndex += 1;
        }
        m_pstChart->scroll(m_nsDataLen, 0);

    }
    m_nNumber = nNumber;
    */

}


void QBloodChartView::Clear()
{
    m_nNumber = 0;
    m_pstLineSeries->clear();

}










