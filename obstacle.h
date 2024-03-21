#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <QPolygonF>

class Obstacle{
public:
    Obstacle();
    //~Obstacle();
    Obstacle(const QPointF& pos, int impasseIndex);

    QPointF getPos() const;
    int getImpasseIndex() const;

private:
    QPointF m_pos;
    int m_impasseIndex;
};

#endif // OBSTACLE_H
