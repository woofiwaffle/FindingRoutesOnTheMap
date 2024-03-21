#ifndef PARSINGMAP_H
#define PARSINGMAP_H

#include "map.h"

#include <iostream>
#include <fstream>
#include <QWidget>
#include <QFileDialog>
#include <QMessageBox>
#include <QXmlStreamReader>

using namespace std;



class TParsing : public QWidget {
    Q_OBJECT

public:
    TParsing(QWidget* parent = nullptr);

    Map* map;

    string getPath();
    short parsingFile(const string&);
    void error(const short&);
};

#endif // PARSINGMAP_H
