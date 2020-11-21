#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
#include <QMatrix>
//MyIncludes
#include <rod.h>
#include <node.h>
#include <QVector>



class Processor
{
public:
    Processor(QJsonDocument jsonD);

    int getCountOfRod() const;
    int getCountOfNode() const;

    QList<Rod> getRods() const;

    QList<Node> getNodes() const;

    bool getLProp() const;

    bool getRProp() const;

private:
    QList <Rod> rods;
    QList <Node> nodes;
    bool lProp = false;
    bool rProp = false;
    int countOfRod;
    int countOfNode;
//    QVector< QVector< double > > *matrixA;

    void parsJson();
    void calcFunc();
    QJsonDocument jsonFromFiile;
};

#endif // PROCESSOR_H
