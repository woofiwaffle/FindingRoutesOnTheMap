#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QFileDialog>
#include <QDebug>

class Interface : public QWidget {
    Q_OBJECT

public:
    explicit Interface(QWidget *parent = nullptr);

private:
    QPushButton* loadMapButton;
    QPushButton* findRouteButton;
    QGraphicsScene* scene;
    QGraphicsView* view;

private slots:
    void loadMap();
    void findRoute();
};

#endif // INTERFACE_H
