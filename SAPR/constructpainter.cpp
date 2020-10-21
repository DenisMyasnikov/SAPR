#include "constructpainter.h"


void ConstructPainter::paintRod(QGraphicsScene *myGrScene, QList<Rod> rods)
{


    int number = 1;
    double previousHeight=0;
    myGrScene->clear();
    for(auto iter = rods.begin(); iter != rods.end(); iter++){
        myGrScene->addRect(QRect(iter->getCorX(),-iter->getHeight()/2,iter->getWidth(),iter->getHeight()));
        myGrScene->addSimpleText("[" + QString::number(number) + "]",QFont("sds",15))->setPos((iter->getCorX()+iter->getWidth()/2)-10,-iter->getHeight()-20);
        myGrScene->addSimpleText("(" + QString::number(number) + ")",QFont("sds",13))->setPos((iter->getCorX())-10,previousHeight >= iter->getHeight()? -previousHeight-20: -iter->getHeight()-20);
        number++;
        previousHeight = iter->getHeight();
    }

    myGrScene->addSimpleText("(" + QString::number(number) + ")",QFont("sds",13))->setPos((rods.last().getCorX()+rods.last().getWidth())-10,previousHeight >= rods.last().getHeight()? -previousHeight-20:rods.last().getHeight()-20);

}


