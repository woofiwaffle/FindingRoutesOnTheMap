#include "interface.h"



Interface::Interface(QWidget *parent) : QWidget(parent){
     setWindowTitle("Map editor");
     setFixedSize(2000, 1200);

     QPalette dark;
     dark.setColor(QPalette::Window, QColor(53, 53, 53));
     dark.setColor(QPalette::WindowText, Qt::white);
     dark.setColor(QPalette::Button, QColor(53, 53, 53));
     dark.setColor(QPalette::ButtonText, Qt::white);

     this->setPalette(dark);



     QString buttonStyle = "QPushButton {"
                               "    background-color: #363636;" // Цвет кнопок
                               "    color: white;" // Цвет текста
                               "    border-style: solid;" // Стиль границы
                               "    border-width: 1px;" // Ширина границы
                               "    border-color: white;" // Цвет границы
                               "    border-radius: 10px;" // Радиус скругления углов
                               "    padding: 10px;" // Отступы внутри кнопки
                               "    text-align: center;"
                               "}"
                               "QPushButton:hover {"
                               "    background-color: #505050;" // Цвет кнопок при наведении мыши
                               "}";

     loadMapButton = new QPushButton("Load Map", this);
     loadMapButton->setFixedSize(200, 50);
     loadMapButton->setStyleSheet(buttonStyle);
     connect(loadMapButton, SIGNAL(clicked()), this, SLOT(loadMap()));

     addObstacleButton = new QPushButton("Add", this);
     addObstacleButton->setFixedSize(200, 50);
     addObstacleButton->setStyleSheet(buttonStyle);
     connect(addObstacleButton, SIGNAL(clicked()), this, SLOT(addObstacle()));

     editObstacleButton = new QPushButton("Edit", this);
     editObstacleButton->setFixedSize(200, 200);
     editObstacleButton->setIcon(QIcon("pencil.png"));
     editObstacleButton->setIconSize(QSize(100, 100));
     editObstacleButton->setStyleSheet(buttonStyle);
     connect(editObstacleButton, SIGNAL(clicked()), this, SLOT(editObstacle()));

     removeObstacleButton = new QPushButton("Remove", this);
     removeObstacleButton->setFixedSize(200, 50);
     removeObstacleButton->setStyleSheet(buttonStyle);
     connect(removeObstacleButton, SIGNAL(clicked()), this, SLOT(removeObstacle()));

     setStartButton = new QPushButton("Start", this);
     setStartButton->setFixedSize(200, 50);
     setStartButton->setStyleSheet(buttonStyle);
     connect(setStartButton, SIGNAL(clicked()), this, SLOT(setStartPoint()));

     setFinishButton = new QPushButton("Finish", this);
     setFinishButton->setFixedSize(200, 50);
     setFinishButton->setStyleSheet(buttonStyle);
     connect(setFinishButton, SIGNAL(clicked()), this, SLOT(setFinishPoint()));

     QVBoxLayout* layout = new QVBoxLayout(this);
     layout->addWidget(loadMapButton);
     layout->addWidget(addObstacleButton);
     layout->addWidget(editObstacleButton);
     layout->addWidget(removeObstacleButton);
     layout->addWidget(setStartButton);
     layout->addWidget(setFinishButton);

     setLayout(layout);
}



Interface::~Interface(){}



void Interface::loadMap(){
    //QString fileName = QFileDialog::getOpenFileName(this, "Open Map File", "", "XML Files (*.xml)");
    //if (!fileName.isEmpty()) {
    //    // код
    //}
}



void Interface::addObstacle(){
    // код
}

void Interface::editObstacle(){
    // код
}



void Interface::removeObstacle(){
    // код
}



void Interface::setStartPoint(){
    // код
}



void Interface::setFinishPoint(){
    // код
}
