#include "map.h"



Map::Map(QObject *parent) : QObject(parent) {}



Map::~Map(){}



Route Map::findOptimalRoute() const{   // поиск оптимального маршрута
    return Route(QPolygonF(), 0.0, 0.0);
}



void Map::addObstacle(const Obstacle& obstacle){
    obstacles.push_back(obstacle);      // добавить препятствие
}
