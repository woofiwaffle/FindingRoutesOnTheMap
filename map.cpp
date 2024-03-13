#include "map.h"



Map::Map(QObject *parent) : QObject(parent) {}



bool Map::loadMapFromFile(const QString &fileName){
    return true;
}



Route Map::findOptimalRoute() const{
    return Route(QPolygonF(), 0.0, 0.0);
}
