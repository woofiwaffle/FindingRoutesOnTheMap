#include "route.h"



Route::Route(const QPolygonF& points, qreal length, qreal time) : m_points(points), m_length(length), m_time(time) {}



QPolygonF Route::getPoints() const{  // получение точек
    return m_points;
}



qreal Route::getLength() const{  // получение длины
    return m_length;
}



qreal Route::getTime() const{   // получение времени
    return m_time;
}
