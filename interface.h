#ifndef INTERFACE_H
#define INTERFACE_H

#include "parsingmap.h"

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QFileDialog>

class Interface : public QWidget {
    Q_OBJECT

    QPushButton* updateMapButton;
    QPushButton* addObstacleButton;
    QPushButton* editObstacleButton;
    QPushButton* removeObstacleButton;
    QPushButton* setStartButton;
    QPushButton* setFinishButton;

public:
    Interface(QWidget *parent = nullptr);
    ~Interface();

private slots:
    void updateMap();
    void addObstacle();
    void editObstacle();
    void removeObstacle();
    void setStartPoint();
    void setFinishPoint();
    void resultAndSave();
};

#endif // INTERFACE_H
