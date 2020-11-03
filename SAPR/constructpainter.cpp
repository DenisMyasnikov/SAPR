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
    paintProp(myGrScene,  rods);
    myGrScene->setSceneRect(QRect(-30,-100,rods.last().getCorX()+rods.last().getWidth()+50,100));
}

void ConstructPainter::paintProp(QGraphicsScene *myGrScene, QList<Rod> rods)
{
    if (rods.first().getLeftProp())
    for (int l = 0 -rods.first().getHeight()/2; l <= rods.first().getHeight()/2; l += 5)
        myGrScene->addLine(QLineF(0,l,-10,l+10),QPen());
    if (rods.last().getRightProp())
    for (int l = 0 -rods.last().getHeight()/2; l <= rods.last().getHeight()/2; l += 5)
        myGrScene->addLine(QLineF(rods.last().getCorX()+rods.last().getWidth(),l,rods.last().getCorX()+rods.last().getWidth()+10,l+10),QPen());
}

void ConstructPainter::paintNodeLoad(QGraphicsScene *myGrScene, QList<Node> nodes)
{
    QPen pen;
    pen.setWidth(3);
    auto iterNodes = nodes.begin();
    myGrScene->addLine(QLineF(iterNodes->getCorX(), 0, iterNodes->getCorX()+20, 0), pen);
    myGrScene->addLine(QLineF(iterNodes->getCorX()+20, 0, iterNodes->getCorX()+15, 5), pen);
    myGrScene->addLine(QLineF(iterNodes->getCorX()+20, 0, iterNodes->getCorX()+15, -5), pen);
//    nodes.begin()->getCorX()

}


