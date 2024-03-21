#include "obstacle.h"

Obstacle::Obstacle() : m_impasseIndex(0) {}

Obstacle::Obstacle(const QPointF& pos, int impasseIndex) : m_pos(pos), m_impasseIndex(impasseIndex) {}

//Obstacle::~Obstacle() {}



QPointF Obstacle::getPos() const{
    return m_pos; // получение позиции препятствия
}



int Obstacle::getImpasseIndex() const{
    return m_impasseIndex; // получить индекс тупика
}
