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

QVector<double> Processor::getSlauSolution() const
{
    return slauSolution;
}

QVector<double> Processor::getMatrixB() const
{
    return matrixB;
}

QVector<QVector<double> > Processor::getMatrixA() const
{
    return matrixA;
}

QVector<QVector<double> > Processor::getKoefNx() const
{
    return koefNx;
}

QVector<double> Processor::getNx(int n, int rod_id)
{
    QVector <double> vecNx;
    for (auto iter = rods.begin(); iter != rods.end(); iter++){
        if (iter->getId() == rod_id){
            int k = iter->getLength()/n;
            for (int i = 0; i<=iter->getLength()+0.00001; i = i + k){
                vecNx.push_back(koefNx[rod_id-1][0]*k+koefNx[rod_id-1][1]);
            }
        }
    }
    return vecNx;
}

QVector<QVector<double> > Processor::getUx() const
{
    return ux;
}

QVector<double> Processor::getUxWithsec(Processor proc, int sec, Rod rod, int type)
{
     QVector <double> res;
    switch (type) {
    case 1:
        for (double i = 0;i <= rod.getLength()+0.0001; i += rod.getLength()/sec){
            res.push_back(proc.getUx()[rod.getId()-1][0]+proc.getUx()[rod.getId()-1][1]*i+proc.getUx()[rod.getId()-1][2]*i+proc.getUx()[rod.getId()-1][3]*pow(i,2));
        }
        break;
    case 2:
        for (double i = 0;i <= rod.getLength()+0.0001; i += rod.getLength()/sec){
            res.push_back((i*proc.getKoefNx()[rod.getId()-1][0]+proc.getKoefNx()[rod.getId()-1][1]));
        }
        break;
    case 3:
        for (double i = 0;i <= rod.getLength()+0.0001; i += rod.getLength()/sec){
            res.push_back((i*proc.getKoefNx()[rod.getId()-1][0]+proc.getKoefNx()[rod.getId()-1][1])/rod.getArea());
        }
        break;
   }
    return res;
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
        QJsonObject jo = countJV.toObject();
        auto iter1 = jo.find("CountOfNodes");
        countOfNode = iter1.value().toInt();
        auto iter2 = jo.find("CountOfRods");
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
    auto iter = rods.begin();
    QVector <double> forMatrixA(countOfRod);
    for (int i = 0; i< forMatrixA.size(); i++){
        forMatrixA[i] = (iter->getModuleE()*iter->getArea())/iter->getLength();
        if(iter != rods.end())
            iter++;
    }


    matrixA.resize(countOfRod+1);

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
        dLoad[it1] = iter->getDLoad()*iter->getLength();
        it1++;
    }


    matrixB.resize(countOfNode);
    for (int i = 0; i<dLoad.size(); i++ ){
        if (i==0){
            matrixB[0] = load[0]+dLoad[0]/2;
        }else
            matrixB[i] = load[i]+dLoad[i]/2+dLoad[i-1]/2;
    }
    matrixB.last() = dLoad.last()/2;

    if (rods.first().getLeftProp())
        matrixB.first() = 0;

    if(rods.last().getRightProp())
        matrixB.last() = 0;


    Matrix mat(matrixA, matrixB);
    mat.printMatrix(matrixA);
    std::cout << mat.getDet();
    for (int i = 1; i < mat.getSolution().size(); i++){
        if (mat.getSolution()[i] <= 1e-100)
            slauSolution.push_back(0);
        else
            slauSolution.push_back(mat.getSolution()[i]);
    }

// Находим Nx
    nx.resize(countOfRod);
    koefNx.resize(countOfRod);
    for (auto &n : nx){
        n.resize(2);
    }



     for (auto riter :rods){
        if (riter.getDLoad() == 0){
            nx[riter.getId()-1][0] = forMatrixA[riter.getId()-1]*(slauSolution[riter.getId()] - slauSolution[riter.getId()-1]);
            nx[riter.getId()-1][1] = forMatrixA[riter.getId()-1]*(slauSolution[riter.getId()] - slauSolution[riter.getId()-1]);
        }else{
            nx[riter.getId()-1][0] = forMatrixA[riter.getId()-1]*(slauSolution[riter.getId()] - slauSolution[riter.getId()-1])+((riter.getDLoad()*riter.getLength())/2)*(1-0);
            nx[riter.getId()-1][1] = forMatrixA[riter.getId()-1]*(slauSolution[riter.getId()] - slauSolution[riter.getId()-1]) + ((riter.getDLoad()*riter.getLength())/2)*(1-2*(riter.getLength())/riter.getLength());
        }

        koefNx[riter.getId()-1].push_back((nx[riter.getId()-1][1]-nx[riter.getId()-1][0])/riter.getLength());
        koefNx[riter.getId()-1].push_back(nx[riter.getId()-1][0]);
    }
//     mat.printMatrix(nx);
//     mat.printMatrix(koefNx);






// Находим ux
    ux.resize(countOfRod);

    for (auto &n : ux){
        n.resize(4);
    }
    QVector <double> dload1;
    for (auto riter :rods){
       if (riter.getDLoad() == 0){
           ux[riter.getId()-1][0] = slauSolution[riter.getId()-1];
           ux[riter.getId()-1][1] = (slauSolution[riter.getId()] - slauSolution[riter.getId()-1])/riter.getLength();
           ux[riter.getId()-1][2] = 0;
           ux[riter.getId()-1][3] = 0;
       }else{
           ux[riter.getId()-1][0] = slauSolution[riter.getId()-1];
           ux[riter.getId()-1][1] = (slauSolution[riter.getId()] - slauSolution[riter.getId()-1])/riter.getLength();
           ux[riter.getId()-1][2] = riter.getDLoad()*riter.getLength()/(2*riter.getModuleE()*riter.getArea());
           ux[riter.getId()-1][3] = -riter.getDLoad()/(2*riter.getModuleE()*riter.getArea());
       }
        dload1.push_back(riter.getModuleE());
    }




//mat.printMatrix(slauSolution);
//mat.printMatrix(matrixB);
}


