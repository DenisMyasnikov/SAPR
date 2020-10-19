#include "constructpainter.h"


void ConstructPainter::paintRod(QGraphicsScene *myGrScene, QList<Rod> rods)
{
    double x=0;
    double y=0;
    myGrScene->clear();
    for(auto iter = rods.begin(); iter != rods.end(); iter++){
        myGrScene->addRect(QRect(x,-iter->getArea()/2,iter->getLength(),iter->getArea()));
        x += iter->getLength();

    }

}
