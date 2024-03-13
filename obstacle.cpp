#include "obstacle.h"



Obstacle::Obstacle(const QPolygonF& polygon, int impasseIndex) : m_polygon(polygon), m_impasseIndex(impasseIndex) {}



QPolygonF Obstacle::getPolygon() const{
    return m_polygon;
}



int Obstacle::getImpasseIndex() const{
    return m_impasseIndex;
}
