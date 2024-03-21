#ifndef ROUTE_H
#define ROUTE_H

#include <QPolygonF>

class Route{
public:
    Route(const QPolygonF& points, qreal length, qreal time);              // методы для вычисления маршрута

    QPolygonF getPoints() const;
    qreal getLength() const;
    qreal getTime() const;

private:
    QPolygonF m_points;
    qreal m_length;
    qreal m_time;
};

#endif // ROUTE_H
