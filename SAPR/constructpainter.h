#ifndef CONSTRUCTPAINTER_H
#define CONSTRUCTPAINTER_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsItem>

//MyInclude
#include "rod.h"


class ConstructPainter
{
public:
    static void paintRod(QGraphicsScene *myGrScene,QList <Rod>);
};


#endif // CONSTRUCTPAINTER_H
