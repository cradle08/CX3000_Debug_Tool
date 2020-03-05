#ifndef QBLOODCHARTVIEW_H
#define QBLOODCHARTVIEW_H

#include <QWidget>
#include <QChart>
#include <QChartView>
#include <QLineSeries>
#include <QByteArray>
#include <QValueAxis>
#include <QVector>
#include <QList>
#include <QPointF>
#include <QDebug>

QT_CHARTS_USE_NAMESPACE
class QBloodChartView : public QChartView
{
public:
    QBloodChartView();

    explicit QBloodChartView(QWidget *parent = nullptr);

    ~QBloodChartView();

    void Update(QByteArray* pByteMsg, quint32 nNumber);

    void Clear();

private:
    static const quint32 m_nsDataLen = 256;
    quint32 m_nNumber;
    QChart *m_pstChart;
    QLineSeries *m_pstLineSeries;
    QValueAxis *m_pstXAxis;
    QValueAxis *m_pstYAxis;

};

#endif // QBLOODCHARTVIEW_H
