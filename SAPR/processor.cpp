#include "processor.h"


Processor::Processor(QJsonDocument JsonD)
{
    jsonFromFiile = JsonD;
    parsJson();
    calcFunc();
}

int Processor::getCountOfRod() const
{
    return countOfRod;
}

int Processor::getCountOfNode() const
{
    return countOfNode;
}

QList<Rod> Processor::getRods() const
{
    return rods;
}

QList<Node> Processor::getNodes() const
{
    return nodes;
}

bool Processor::getLProp() const
{
    return lProp;
}

bool Processor::getRProp() const
{
    return rProp;
}

//Функция парсинга
void Processor::parsJson()
{
    //Парчинг колличества стержней и узлов
    jsonFromFiile.object();
    QJsonObject construct = jsonFromFiile.object();
    auto iter = construct.find("Count");
    QJsonValue countJV = iter.value();
    if (countJV.isObject()){
        auto iter1 = countJV.toObject().find("CountOfNodes");
        countOfNode = iter1.value().toInt();
        auto iter2 = countJV.toObject().find("CountOfRods");
        countOfRod = iter2.value().toInt();
    }

    for (int i = 1; i <= countOfRod; i++){
        rods.push_back(i);
    }

    for (int i = 1; i <= countOfNode; i++){
        nodes.push_back(i);
    }

//Парсинг характеристиг стержней

    QJsonValue propOfRodsJV = construct.find("PropOfRods").value();
    QJsonObject propOfRodsJO;
    if(propOfRodsJV.isObject())
        propOfRodsJO = propOfRodsJV.toObject();

    for (int i = 1; i <= countOfRod; i++){
        QJsonObject propOfRodJO = propOfRodsJO.find(QString::number(i)).value().toObject();
        for (auto rIter = rods.begin(); rIter != rods.end(); rIter++){
            if (i == rIter->getId()){
                rIter->setArea(propOfRodJO.find("Area").value().toDouble());
                rIter->setLength(propOfRodJO.find("Length").value().toDouble());
                rIter->setModuleE(propOfRodJO.find("ModuleE").value().toDouble());
                rIter->setModuleSigma(propOfRodJO.find("ModuleSigma").value().toDouble());
            }
        }
    }

// Парсинг наличия опор

    QJsonValue propsJV = construct.find("Props").value();
    QJsonObject propsJO;
    if (propsJV.isObject())
        propsJO = propsJV.toObject();

    if  (propsJO.find("LeftProp").value().toBool()){
        rods.first().setLeftProp(true);
        lProp = true;
    }

    if  (propsJO.find("RigthProp").value().toBool()){
        rods.last().setRightProp(true);
        rProp = true;
    }

    QJsonValue loadJV = construct.find("loadOnNodes").value();
    QJsonObject loadJO;
    if (propsJV.isObject())
        loadJO = loadJV.toObject();

//    lProp = true;
//    rProp = true;

// Парсинг распределённы нагрузок

    QJsonValue loadOnRodsJV = construct.find("loadOnRod").value();
    QJsonObject loadOnRodsJO;
    if(!loadOnRodsJV.toObject().isEmpty())
    {
        loadOnRodsJO = loadOnRodsJV.toObject();
        for (int i = 1; i <= countOfRod; i++){
            if (!loadOnRodsJO.find(QString::number(i))->isUndefined()){
            double loadOnRod = loadOnRodsJO.find(QString::number(i))->toDouble();
                for (auto rIter = rods.begin(); rIter != rods.end(); rIter++){
                    if (i == rIter->getId()){
                        rIter->setDLoad(loadOnRod);
                    }
                }
            }
        }
    }

//Парсинг точечных нагрузок

    QJsonValue loadOnNodesJV = construct.find("loadOnNodes").value();
    QJsonObject loadOnNodesJO;
    if (!loadOnNodesJV.toObject().isEmpty()){
        loadOnNodesJO = loadOnNodesJV.toObject();
        for (int i  = 1; i <= countOfNode; i++){
            if (!loadOnNodesJO.find(QString::number(i))->isUndefined()){
                double loadOnNode = loadOnNodesJO.find(QString::number(i))->toDouble();
                for (auto nIter = nodes.begin(); nIter != nodes.end(); nIter++){
                    if (i == nIter->getId()){
                        nIter->setLoad(loadOnNode);

                    }
                }
            }
        }
    }
}

//Функция расчёта Nx, SIGMAx, Ux

void Processor::calcFunc()
{
//Формирование матрицы А
    QVector <double> forMatrixA(countOfRod);
    for (int i = 0; i< forMatrixA.size(); i++){
        auto iter = rods.begin();
        forMatrixA[i] = (iter->getModuleE()*iter->getArea())/iter->getLength();


        if(iter != rods.end())
            iter++;
    }


    QVector< QVector< double > > matrixA(countOfRod+1);

    for (int i = 0; i < matrixA.size(); i++){
        matrixA[i].resize(countOfRod+1);
    }

    matrixA[0][0] = forMatrixA[0];
    matrixA[1][0] = -forMatrixA[0];
    matrixA[0][1] = -forMatrixA[0];

    matrixA.last().last() = forMatrixA.last();

    for (int i = 1; i < matrixA.size()-1; i++){
        matrixA[i][i]=forMatrixA[i-1]+forMatrixA[i];
        matrixA[i][i+1] = -forMatrixA[i];
        matrixA[i+1][i] = -forMatrixA[i];
    }
    if (rods.first().getLeftProp()){
        matrixA[0][0] = 1;
        for (int i = 1; i < matrixA.size(); i++){
            matrixA[0][i] = 0;
            matrixA[i][0] = 0;
        }
    }
    if (rods.last().getRightProp()){
        for (int i = 1; i < matrixA.size(); i++){
            matrixA.last()[i] = 0;
            matrixA[i].last() = 0;
        }
        matrixA.last().last() = 1;
    }
//Формирование матрицы B
    QVector <double> load(countOfNode);
    int it = 0;
    for (auto iter = nodes.begin(); iter != nodes.end(); iter++){
        load[it] = iter->getLoad();
        it++;
    }

    QVector <double> dLoad(countOfRod);
    int it1 = 0;
    for (auto iter = rods.begin(); iter != rods.end(); iter++){
        load[it1] = iter->getDLoad();
        it1++;
    }


    QVector <double> matrixB(countOfNode);
    for (int i = 0; i<dLoad.size(); i++ ){
        if (i==0){
            matrixB[0] = load[0]+dLoad[0]/2;
        }
        matrixB[i] = load[i]+dLoad[i]/2+dLoad[i-1]/2;
    }
    matrixB.last() = dLoad.last()/2+load.last();

}


