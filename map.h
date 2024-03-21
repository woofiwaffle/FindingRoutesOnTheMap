#ifndef MAP_H
#define MAP_H

#include "obstacle.h"
#include "route.h"

#include <QObject>
#include <QVector>


class Map : public QObject{
    Q_OBJECT

public:
    Map(QObject *parent = nullptr);
    ~Map();

    Route findOptimalRoute() const;
    void addObstacle(const Obstacle& obstacle);

private:
    QVector<Obstacle> obstacles;
};

#endif // MAP_H
