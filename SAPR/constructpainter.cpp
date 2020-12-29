#include "constructpainter.h"


void ConstructPainter::paintRod(QGraphicsScene *myGrScene, QList<Rod> rods, QList<Node> nodes)
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


    paintNodeLoad(myGrScene, nodes);
    paintRodLoad(myGrScene, rods);
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
    for (auto iter = nodes.begin();iter != nodes.end();iter++){
        if (iter->getLoad()>0){
            myGrScene->addLine(QLineF(iter->getCorX(), 0, iter->getCorX()+20, 0), pen);
            myGrScene->addLine(QLineF(iter->getCorX()+20, 0, iter->getCorX()+15, 5), pen);
            myGrScene->addLine(QLineF(iter->getCorX()+20, 0, iter->getCorX()+15, -5), pen);
             myGrScene->addSimpleText(QString::number(iter->getLoad()) + "Н",QFont("sds",10))->setPos(iter->getCorX()+5,-25);
        }else if (iter->getLoad()<0){
            myGrScene->addLine(QLineF(iter->getCorX(), 0, iter->getCorX()-20, 0), pen);
            myGrScene->addLine(QLineF(iter->getCorX()-20, 0, iter->getCorX()-15, 5), pen);
            myGrScene->addLine(QLineF(iter->getCorX()-20, 0, iter->getCorX()-15, -5), pen);
            myGrScene->addSimpleText(QString::number(iter->getLoad()) + "Н",QFont("sds",10))->setPos(iter->getCorX()-50,-25);
        }
    }
//    nodes.begin()->getCorX()

}

void ConstructPainter::paintRodLoad(QGraphicsScene *myGrScene, QList<Rod> rods)
{
    QPen pen;
    for (auto iter = rods.begin(); iter != rods.end(); iter++){
        if (iter->getDLoad()>0){
            myGrScene->addLine(QLine(iter->getCorX(), 0, iter->getCorX()+iter->getWidth(), 0), pen);
            for (int l = iter->getCorX()+7; l < iter->getCorX()+iter->getWidth(); l += 10){
                myGrScene->addLine(QLineF(l, 0, l-3, 5), pen);
                myGrScene->addLine(QLineF(l, 0, l-3, -5), pen);
                myGrScene->addSimpleText(QString::number(iter->getDLoad())+ " Н/м",QFont("sds",8))->setPos((iter->getCorX()+iter->getWidth()/2)-6,10);
            }
        }else if (iter->getDLoad()<0){
            myGrScene->addLine(QLine(iter->getCorX(), 0, iter->getCorX()+iter->getWidth(), 0), pen);
            for (int l = iter->getCorX()+7; l < iter->getCorX()+iter->getWidth(); l += 10){
                myGrScene->addLine(QLineF(l, 0, l+3, 5), pen);
                myGrScene->addLine(QLineF(l, 0, l+3, -5), pen);
                myGrScene->addSimpleText(QString::number(iter->getDLoad())+ " Н/м",QFont("sds",8))->setPos((iter->getCorX()+iter->getWidth()/2)-6,10);
            }
        }
    }
}

void ConstructPainter::paintLineForIpur(QGraphicsScene *myGrScene, QList<Rod> rods, QList<Node> nodes, Processor proc,int type)
{
    QPen pen;
    QPen pen1;
    int def=200;
    pen.setStyle(Qt::DashLine);
    for (auto iter = nodes.begin(); iter != nodes.end(); iter++){
        myGrScene->addLine(QLineF(iter->getCorX(), 0, iter->getCorX(), 600 ), pen);
    }
    myGrScene->addLine(QLineF(nodes.first().getCorX(), def, nodes.last().getCorX(),def),pen1);
    paintIpur(myGrScene,proc,rods,def, type);
}

void ConstructPainter::paintIpur(QGraphicsScene *myGrScene, Processor proc, QList<Rod> rods,  int def, int type)
{
    QVector <double> allRes;
    QVector <QVector<double>> eachRodRes;

    eachRodRes.resize(rods.size());
    for (auto riter = rods.begin(); riter != rods.end(); riter++){
        allRes.append(Processor::getUxWithsec(proc,riter->getCorX()+riter->getWidth(),*riter,type));
        eachRodRes[riter->getId()-1].append(Processor::getUxWithsec(proc,riter->getWidth(),*riter,type));
    }
    std::cout <<std::endl << std::endl  <<*std::max_element(allRes.begin(),allRes.end());
    double max = 0;
    for (int i = 0; i < allRes.size();i++)
        if (abs(allRes[i])>max)
            max = abs(allRes[i]);

    double koef = 100/max;

    bool exist = false;
    for (int i= 0; i < allRes.size(); i++)
        if (allRes[i] != 0)
            exist = true;
     std::cout<<std::endl;
     if (exist){
    for (auto riter = rods.begin(); riter != rods.end(); riter++){
        int c = 0;
        for (int i = riter->getCorX(); i <= riter->getCorX()+riter->getWidth(); i++){
            double y = def -eachRodRes[riter->getId()-1][c]*koef;
            if (i%5==0)
                myGrScene->addLine(QLineF(i, def, i, y));
            else
                myGrScene->addLine(QLineF(i, y, i, y));
            c++;
        }
        if (type != 1)
            myGrScene->addText(QString::number(eachRodRes[riter->getId()-1].first()),QFont("sds",8))->setPos(riter->getCorX()-30, def - eachRodRes[riter->getId()-1].first()*koef-10);
        else
           myGrScene->addText(QString::number(eachRodRes.first().first()),QFont("sds",8))->setPos(0, def - eachRodRes.first().first()*koef-10);
        myGrScene->addText(QString::number(eachRodRes[riter->getId()-1].last()),QFont("sds",8))->setPos(riter->getCorX()+riter->getWidth(),def - eachRodRes[riter->getId()-1].last()*koef-10);
    }
    }

}








