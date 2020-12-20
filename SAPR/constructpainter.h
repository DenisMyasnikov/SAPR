#ifndef CONSTRUCTPAINTER_H
#define CONSTRUCTPAINTER_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <processor.h>
#include "algorithm"


//MyInclude
#include "rod.h"
#include "node.h"
#include "matrix.h"

class ConstructPainter
{
public:
    static void paintRod(QGraphicsScene *myGrScene, QList <Rod>,QList <Node>);
    static void paintProp(QGraphicsScene *myGrScene, QList <Rod>);
    static void paintNodeLoad(QGraphicsScene *myGrScene, QList <Node>);
    static void paintRodLoad(QGraphicsScene *myGrScene, QList <Rod>);
    static void paintLineForIpur(QGraphicsScene *myGrScene, QList <Rod> rods, QList <Node> nodes, Processor proc, int type);
    static void paintIpur(QGraphicsScene *myGrScene,Processor proc, QList <Rod> rods, int def, int type);
//    static void paintGraph(QGraphicsScene *myGrScene,Processor proc,QList <Rod> rods, int def, int type);

};


#endif // CONSTRUCTPAINTER_H
