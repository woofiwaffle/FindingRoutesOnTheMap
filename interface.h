#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>

class Interface : public QWidget {
    Q_OBJECT
    QPushButton* loadMapButton;
    QPushButton* addObstacleButton;
    QPushButton* editObstacleButton;
    QPushButton* removeObstacleButton;
    QPushButton* setStartButton;
    QPushButton* setFinishButton;

public:
    Interface(QWidget *parent = nullptr);
    ~Interface();

public slots:
    void loadMap();
    void addObstacle();
    void editObstacle();
    void removeObstacle();
    void setStartPoint();
    void setFinishPoint();
};

#endif // INTERFACE_H
