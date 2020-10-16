#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   ui->sbNumberOfrods->setRange(1,1000);
   changeEnableRodProp(false);

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
}


void MainWindow::on_sbPropOfRod_valueChanged(int arg1)
{
    ui->leLenngth->setText(QString::number(getRodFromList(ui->sbPropOfRod->value())->getLength()));
    ui->leArea->setText(QString::number(getRodFromList(ui->sbPropOfRod->value())->getArea()));
    ui->leModuleE->setText(QString::number(getRodFromList(ui->sbPropOfRod->value())->getModuleE()));
    ui->leModuleSigma->setText(QString::number(getRodFromList(ui->sbPropOfRod->value())->getModuleSigma()));
}

void MainWindow::on_leLenngth_editingFinished()
{
    getRodFromList(ui->sbPropOfRod->value())->setLength(ui->leLenngth->text().split(" ")[0].toDouble());
}


void MainWindow::on_leArea_editingFinished()
{
    getRodFromList(ui->sbPropOfRod->value())->setArea(ui->leArea->text().split(" ")[0].toDouble());
}

void MainWindow::on_leModuleE_editingFinished()
{
    getRodFromList(ui->sbPropOfRod->value())->setModuleE(ui->leModuleE->text().split(" ")[0].toDouble());
}

void MainWindow::on_leModuleSigma_editingFinished()
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




