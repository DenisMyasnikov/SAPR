#include "postprocessor.h"
#include "ui_postprocessor.h"

PostProcessor::PostProcessor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PostProcessor)
{
    ui->setupUi(this);
    proc = new Processor(loadJSON("PLCoC.json"));
    ui->twUx->setRowCount(proc->getCountOfNode());


    setNxTable(8, proc->getRods(), proc->getKoefNx());
    setSigmaTable(8, proc->getRods(), proc->getKoefNx());
    setUxTable(8,proc->getRods(), proc->getUx());
    rods = proc->getRods();
    nodes = proc->getNodes();
    setSizeOfRod();

    myGrScene = new QGraphicsScene(this);
    ui->graphicsView->setScene(myGrScene);

    ConstructPainter::paintRod(myGrScene, rods, nodes);
    ConstructPainter::paintLineForIpur(myGrScene, rods, nodes, *proc,1);
    myGrScene->setSceneRect(QRect(-30,50,rods.last().getCorX()+rods.last().getWidth()+50,150));


}

PostProcessor::~PostProcessor()
{
    delete proc;
    delete ui;
}

QJsonDocument PostProcessor::loadJSON(QString fileName)
{
    QFile file(fileName);
    file.open(QFile::ReadOnly);
    QJsonDocument jd;
    if (file.isReadable()){
        jd = QJsonDocument().fromJson(file.readAll());
    }else{
        this->close();
    }
    file.close();
    return  jd;
}


void PostProcessor::setNxTable(int n, QList<Rod> rods, QVector <QVector<double>> koefNx)
{
    ui->twNx->setRowCount(n+1);
    ui->twNx->setColumnCount(rods.last().getId());

    QStringList labels;
    QStringList vLabels;
    for (int i = 0; i<=n; i++)
         vLabels.push_back("Сеч: "+ QString::number(i));
    QVector <double> vec;

    for (auto iter = rods.begin(); iter != rods.end(); iter++){
        labels.push_back("Стержень: "+ QString::number(iter->getId()));
        int c=0;
        for (double i = 0;i <= iter->getLength()+0.0001; i += iter->getLength()/n){
            double res = (i*koefNx[iter->getId()-1][0]+koefNx[iter->getId()-1][1]);
            ui->twNx->setItem(c,iter->getId()-1,new QTableWidgetItem(QString::number (res),INT_MAX));
            c++;
        }

    }

    ui->twNx->setHorizontalHeaderLabels(labels);
    ui->twNx->setVerticalHeaderLabels(vLabels);
}

void PostProcessor::setSigmaTable(int n, QList<Rod> rods, QVector<QVector<double> > koefNx)
{
    ui->twSigma->setRowCount(n+2);
    ui->twSigma->setColumnCount(rods.last().getId());

    QStringList labels;
    QStringList vLabels;
    for (int i = 0; i<=n; i++)
         vLabels.push_back("Сеч: "+ QString::number(i));
    vLabels.push_back("Доп. нап");
    QVector <double> vec;

    for (auto iter = rods.begin(); iter != rods.end(); iter++){
        labels.push_back("Стержень: "+ QString::number(iter->getId()));
        int c=0;
        for (double i = 0;i <= iter->getLength()+0.0001; i += iter->getLength()/n){
            double res = (i*koefNx[iter->getId()-1][0]+koefNx[iter->getId()-1][1])/iter->getArea();
            ui->twSigma->setItem(c,iter->getId()-1,new QTableWidgetItem(QString::number (res),INT_MAX));
            if (iter->getModuleSigma() > abs(res))
                ui->twSigma->item(c,iter->getId()-1)->setBackgroundColor(Qt::green);
            else
                ui->twSigma->item(c,iter->getId()-1)->setBackgroundColor(Qt::red);
            c++;
        }
        ui->twSigma->setItem(c,iter->getId()-1,new QTableWidgetItem(QString::number (iter->getModuleSigma()),INT_MAX));
    }

    ui->twSigma->setHorizontalHeaderLabels(labels);
    ui->twSigma->setVerticalHeaderLabels(vLabels);
}

void PostProcessor::setUxTable(int n, QList<Rod> rods, QVector<QVector<double> > ux)
{
    ui->twUx->setRowCount(n+1);
    ui->twUx->setColumnCount(rods.last().getId());

    QStringList labels;
    QStringList vLabels;
    for (int i = 0; i<=n; i++)
         vLabels.push_back("Сеч: "+ QString::number(i));
    QVector <double> vec;

    for (auto iter = rods.begin(); iter != rods.end(); iter++){
        labels.push_back("Стержень: "+ QString::number(iter->getId()));
        int c=0;
        for (double i = 0;i <= iter->getLength()+0.0001; i += iter->getLength()/n){
            double res = ux[iter->getId()-1][0]+ux[iter->getId()-1][1]*i+ux[iter->getId()-1][2]*i+ux[iter->getId()-1][3]*pow(i,2);
            ui->twUx->setItem(c,iter->getId()-1,new QTableWidgetItem(QString::number (res),INT_MAX));
            c++;
        }

    }

    ui->twUx->setHorizontalHeaderLabels(labels);
    ui->twUx->setVerticalHeaderLabels(vLabels);
}

void PostProcessor::setSizeOfRod()
{
    double corX = 0;
    double koefLength = 0;
    double koefArea = 0;
    double maxLength = 0;
    double maxArea = 0;
    double width;
    double height;
    for (auto iter = rods.begin(); iter != rods.end(); iter++){
        if (iter->getLength()>maxLength){
            maxLength = iter->getLength();
        }
        if (iter->getArea()>maxArea){
            maxArea = iter->getArea();
        }
    }
    koefLength = 300/maxLength;
    koefArea = 100/maxArea;
    for (auto iter = rods.begin(); iter != rods.end(); iter++){
        width = iter->getLength()*koefLength;
        height = iter->getArea()*koefArea;
        iter->setWidth(width);
        iter->setHeight(height);
        iter->setCorX(corX);
        corX += width;
    }
    setCorXOnNodes();
}

void PostProcessor::setCorXOnNodes()
{
    for (auto iter = nodes.begin(); iter != nodes.end(); iter++){
        for (auto iter2 = rods.begin(); iter2 != rods.end(); iter2++){
            if (iter->getId() == iter2->getId()){
                iter->setCorX(iter2->getCorX());
            }
        }
    }
    nodes.last().setCorX(rods.last().getCorX()+rods.last().getWidth());
}



void PostProcessor::on_sbSNx_valueChanged(int arg1)
{
    setNxTable(arg1, proc->getRods(), proc->getKoefNx());
}

void PostProcessor::on_sbSSigma_valueChanged(int arg1)
{
    setSigmaTable(arg1, proc->getRods(), proc->getKoefNx());
}

void PostProcessor::on_sbUx_valueChanged(int arg1)
{
    setUxTable(arg1, proc->getRods(),proc->getUx());
}

void PostProcessor::on_comboBox_currentIndexChanged(int index)
{
    myGrScene->clear();

    ConstructPainter::paintRod(myGrScene,rods,nodes);
    ConstructPainter::paintLineForIpur(myGrScene, rods, nodes, *proc, index+1);
    myGrScene->setSceneRect(QRect(-30,50,rods.last().getCorX()+rods.last().getWidth()+50,150));
}
