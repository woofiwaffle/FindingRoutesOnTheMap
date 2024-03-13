#ifndef MAP_H
#define MAP_H

#include <QObject>
#include <QVector>
#include "obstacle.h"
#include "route.h"

class Map : public QObject{
    Q_OBJECT

public:
    explicit Map(QObject *parent = nullptr);

    bool loadMapFromFile(const QString &fileName);
    Route findOptimalRoute() const;

private:
    QVector<Obstacle> obstacles;
};

#endif // MAP_H
