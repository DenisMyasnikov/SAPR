#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   ui->sbNumberOfrods->setRange(1,1000);
   changeEnableRodProp(false);

    myGrScene = new QGraphicsScene(this);
    ui->graphicsView->setScene(myGrScene);

}

MainWindow::~MainWindow()
{
    delete ui;
}

// SLOTS

void MainWindow::on_btnAcceptNumberOfRods_clicked()
{
    ui->btnAcceptNumberOfRods->setEnabled(false);
    ui->sbNumberOfrods->setEnabled(false);
    changeEnableRodProp(true);
    ui->sbPropOfRod->setRange(1, ui->sbNumberOfrods->value());

    for (int k = 1; k <= ui->sbNumberOfrods->value(); k++)
        rods.push_back(Rod(k));

    on_sbPropOfRod_valueChanged(1);
}

void MainWindow::on_btnChangeNumberOfRods_clicked()
{
    ui->btnAcceptNumberOfRods->setEnabled(true);
    ui->sbNumberOfrods->setEnabled(true);
    changeEnableRodProp(false);
    ConstructPainter::paintRod(myGrScene, rods);
}


void MainWindow::on_sbPropOfRod_valueChanged(int arg1)
{
    ui->leLenngth->setText(QString::number(getRodFromList(ui->sbPropOfRod->value())->getLength()));
    ui->leArea->setText(QString::number(getRodFromList(ui->sbPropOfRod->value())->getArea()));
    ui->leModuleE->setText(QString::number(getRodFromList(ui->sbPropOfRod->value())->getModuleE()));
    ui->leModuleSigma->setText(QString::number(getRodFromList(ui->sbPropOfRod->value())->getModuleSigma()));

    ConstructPainter::paintRod(myGrScene, rods);
}

void MainWindow::on_leLenngth_editingFinished()
{
    double value = ui->leLenngth->text().split(" ")[0].toDouble();
    double normalValue;
    switch (ui->cbUnitLength->currentIndex()) {
    case 0:
        normalValue = value/1000000;
        break;
    case 1:
        normalValue = value/1000;
        break;
    case 2:
        normalValue = value/100;
        break;
    case 3:
        normalValue = value;
        break;
    case 4:
        normalValue = value*1000;
        break;
    }
    getRodFromList(ui->sbPropOfRod->value())->setLength(normalValue);
    ui->statusbar->showMessage(QString::number(normalValue));
    ConstructPainter::paintRod(myGrScene, rods);
}

void MainWindow::on_leArea_editingFinished()
{
    double value = ui->leArea->text().split(" ")[0].toDouble();
    double normalValue;
    switch (ui->cbUnitArea->currentIndex()) {
    case 0:
        normalValue = value/(pow(10,12));
        break;
    case 1:
        normalValue = value/1000000;
        break;
    case 2:
        normalValue = value/10000;
        break;
    case 3:
        normalValue = value;
        break;
    case 4:
        normalValue = value*1000000;
        break;
        ConstructPainter::paintRod(myGrScene, rods);
    }
    getRodFromList(ui->sbPropOfRod->value())->setArea(normalValue);
    ui->statusbar->showMessage(QString::number(normalValue));
    ConstructPainter::paintRod(myGrScene, rods);
}

void MainWindow::on_leModuleE_editingFinished()
{
    double value = ui->leModuleE->text().split(" ")[0].toDouble();
    double normalValue;
    switch (ui->cbModuleE->currentIndex()) {
    case 0:
        normalValue = value;
        break;
    case 1:
        normalValue = value/1000;
        break;
    case 2:
        normalValue = value/1000000;
        break;

    }
    getRodFromList(ui->sbPropOfRod->value())->setModuleE(normalValue);
    ui->statusbar->showMessage(QString::number(normalValue));
}

void MainWindow::on_leModuleSigma_editingFinished()
{
    double value = ui->leModuleSigma->text().split(" ")[0].toDouble();
    double normalValue;
    switch (ui->cbModuleSigma->currentIndex()) {
    case 0:
        normalValue = value;
        break;
    case 1:
        normalValue = value/1000;
        break;
    case 2:
        normalValue = value/1000000;
        break;

    }
    getRodFromList(ui->sbPropOfRod->value())->setModuleSigma(normalValue);
    ui->statusbar->showMessage(QString::number(normalValue));
}

void MainWindow::on_cbUnitLength_currentIndexChanged(int index)
{
    ui->statusbar->showMessage(QString::number(index));
    double value;
    double normalValue = getRodFromList(ui->sbPropOfRod->value())->getLength();
    switch (ui->cbUnitLength->currentIndex()) {
    case 0:
        value = normalValue*1000000;
        break;
    case 1:
        value = normalValue*1000;
        break;
    case 2:
        value = normalValue*100;
        break;
    case 3:
        value = normalValue*1;
        break;
    case 4:
        value = normalValue*0.001;
        break;
    }
    ui->leLenngth->setText(QString::number(value));
}

void MainWindow::on_cbUnitArea_currentIndexChanged(int index)
{
    ui->statusbar->showMessage(QString::number(index));
    double value;
    double normalValue = getRodFromList(ui->sbPropOfRod->value())->getArea();
    switch (ui->cbUnitArea->currentIndex()) {
    case 0:
        value = normalValue*pow(10,12);
        break;
    case 1:
        value = normalValue*1000000;
        break;
    case 2:
        value = normalValue*10000;
        break;
    case 3:
        value = normalValue*1;
        break;
    case 4:
        value = normalValue*0.000001;
        break;
    }
    ui->leArea->setText(QString::number(value));
}

void MainWindow::on_cbModuleE_currentIndexChanged(int index)
{
    ui->statusbar->showMessage(QString::number(index));
    double value;
    double normalValue = getRodFromList(ui->sbPropOfRod->value())->getModuleE();
    switch (ui->cbModuleE->currentIndex()) {
    case 0:
        value  = normalValue;
        break;
    case 1:
        value = normalValue*0.001;
        break;
    case 2:
        value = normalValue*0.000001;
        break;
    }
    ui->leModuleE->setText(QString::number(value));
}

void MainWindow::on_cbModuleSigma_currentIndexChanged(int index)
{
    ui->statusbar->showMessage(QString::number(index));
    double value;
    double normalValue = getRodFromList(ui->sbPropOfRod->value())->getModuleSigma();
    switch (ui->cbModuleSigma->currentIndex()) {
    case 0:
        value  = normalValue;
        break;
    case 1:
        value = normalValue*0.001;
        break;
    case 2:
        value = normalValue*0.000001;
        break;
    }
    ui->leModuleSigma->setText(QString::number(value));
}

void MainWindow::setNormalValue(int index)
{

}
//MyFunc

void MainWindow::changeEnableRodProp(bool en)
{
    ui->sbPropOfRod->setEnabled(en);
    ui->leLenngth->setEnabled(en);
    ui->leArea->setEnabled(en);
    ui->cbUnitLength->setEnabled(en);
    ui->cbUnitArea->setEnabled(en);
    ui->leModuleE->setEnabled(en);
    ui->leModuleSigma->setEnabled(en);
    ui->cbModuleE->setEnabled(en);
    ui->cbModuleSigma->setEnabled(en);
}

QList <Rod>::iterator MainWindow::getRodFromList(int i)
{
    for(auto iter = rods.begin(); iter != rods.end(); iter++){
        if (iter->getId() == ui->sbPropOfRod->value()){
            return iter;
        }
    }
}







