#include "interface.h"

Interface::Interface(QWidget *parent) : QWidget(parent){
    loadMapButton = new QPushButton("Load Map", this);
    connect(loadMapButton, &QPushButton::clicked, this, &Interface::loadMap);

    findRouteButton = new QPushButton("Find Route", this);
    connect(findRouteButton, &QPushButton::clicked, this, &Interface::findRoute);

    scene = new QGraphicsScene(this);
    view = new QGraphicsView(scene, this);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(loadMapButton);
    layout->addWidget(findRouteButton);
    layout->addWidget(view);

    setLayout(layout);
}



void Interface::loadMap(){
    QString fileName = QFileDialog::getOpenFileName(this, "Open Map File", "", "XML Files (*.xml)");

    if(!fileName.isEmpty()){
        qDebug() << "Map loaded from file: " << fileName;
    }
}



void Interface::findRoute(){
    qDebug() << "Finding route...";
}
