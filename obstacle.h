#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <QPolygonF>

class Obstacle{
public:
    Obstacle() = default;
    Obstacle(const QPolygonF& polygon, int impasseIndex);
    QPolygonF getPolygon() const;
    int getImpasseIndex() const;

private:
    QPolygonF m_polygon;
    int m_impasseIndex;
};

#endif // OBSTACLE_H
