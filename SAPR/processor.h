#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
#include <QMatrix>
//#include <Eigen/Dense>

//MyIncludes
#include <rod.h>
#include <node.h>
#include <QVector>
#include <matrix.h>
#include <vector>
#include <iostream>


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

    QVector<double> getSlauSolution() const;

    QVector<double> getMatrixB() const;

    QVector<QVector<double> > getMatrixA() const;

    QVector<QVector<double> > getKoefNx() const;

    QVector<double> getNx(int n, int rod_id);

    QVector<QVector<double> > getUx() const;

    static QVector <double> getUxWithsec(Processor proc, int sec, Rod rod, int type);

private:
    QList <Rod> rods;
    QList <Node> nodes;
    bool lProp = false;
    bool rProp = false;
    int countOfRod;
    int countOfNode;
    QVector <double> slauSolution;
    QVector <double> matrixB;
    QVector< QVector< double > > matrixA;
    QVector< QVector< double > > nx;
    QVector <QVector<double>> koefNx;
    QVector <QVector<double>> ux;


//    QVector< QVector< double > > *matrixA;

    void parsJson();
    void calcFunc();
    QJsonDocument jsonFromFiile;
};

#endif // PROCESSOR_H
