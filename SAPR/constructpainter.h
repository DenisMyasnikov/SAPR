#ifndef CONSTRUCTPAINTER_H
#define CONSTRUCTPAINTER_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsItem>

//MyInclude
#include "rod.h"
#include "node.h"


class ConstructPainter
{
public:
    static void paintRod(QGraphicsScene *myGrScene, QList <Rod>);
    static void paintLeftProp(QGraphicsScene *myGrScene, QList <Rod>);
    static void paintProp(QGraphicsScene *myGrScene, QList <Rod>);
    static void paintNodeLoad(QGraphicsScene *myGrScene, QList <Node>);
};


#endif // CONSTRUCTPAINTER_H
