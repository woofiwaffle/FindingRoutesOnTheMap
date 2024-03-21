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

     updateMapButton = new QPushButton("Update Map", this);
     updateMapButton->setFixedSize(150, 50);
     updateMapButton->setStyleSheet(buttonStyle);
     connect(updateMapButton, SIGNAL(clicked()), this, SLOT(updateMap()));

     addObstacleButton = new QPushButton("Add", this);
     addObstacleButton->setFixedSize(150, 50);
     addObstacleButton->setStyleSheet(buttonStyle);
     connect(addObstacleButton, SIGNAL(clicked()), this, SLOT(addObstacle()));

     editObstacleButton = new QPushButton("Edit", this);
     editObstacleButton->setFixedSize(150, 120);
     editObstacleButton->setIcon(QIcon("pencil.png"));
     editObstacleButton->setIconSize(QSize(75, 75));
     editObstacleButton->setStyleSheet(buttonStyle);
     connect(editObstacleButton, SIGNAL(clicked()), this, SLOT(editObstacle()));

     removeObstacleButton = new QPushButton("Remove", this);
     removeObstacleButton->setFixedSize(150, 50);
     removeObstacleButton->setStyleSheet(buttonStyle);
     connect(removeObstacleButton, SIGNAL(clicked()), this, SLOT(removeObstacle()));

     setStartButton = new QPushButton("Start", this);
     setStartButton->setFixedSize(150, 50);
     setStartButton->setStyleSheet(buttonStyle);
     connect(setStartButton, SIGNAL(clicked()), this, SLOT(setStartPoint()));

     setFinishButton = new QPushButton("Finish", this);
     setFinishButton->setFixedSize(150, 50);
     setFinishButton->setStyleSheet(buttonStyle);
     connect(setFinishButton, SIGNAL(clicked()), this, SLOT(setFinishPoint()));

     QVBoxLayout* layout = new QVBoxLayout(this);
     layout->addWidget(updateMapButton);
     layout->addWidget(addObstacleButton);
     layout->addWidget(editObstacleButton);
     layout->addWidget(removeObstacleButton);
     layout->addWidget(setStartButton);
     layout->addWidget(setFinishButton);

     setLayout(layout);
}



Interface::~Interface(){
}



void Interface::updateMap(){
    // поменять карту
}



void Interface::addObstacle(){
    // добавить препятствие
}



void Interface::editObstacle(){
    // редактировать препятствие
}



void Interface::removeObstacle(){
    // удалить препятствие
}



void Interface::setStartPoint(){
    // точка старта
}



void Interface::setFinishPoint(){
    // точка завершения
}



void Interface::resultAndSave(){
    // вывод результата и созранение файла
}
