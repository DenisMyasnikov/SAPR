#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   ui->sbNumberOfrods->setRange(1,1000);
   ui->sbPropOfRod->setEnabled(false);
   ui->leLenngth->setEnabled(false);
   ui->leArea->setEnabled(false);
   ui->cbUnitLength->setEnabled(false);
   ui->cbUnitArea->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_spinBox_textChanged(const QString &arg1)
//{

//}

void MainWindow::on_btnAcceptNumberOfRods_clicked()
{
    ui->btnAcceptNumberOfRods->setEnabled(false);
    ui->sbNumberOfrods->setEnabled(false);
    ui->sbPropOfRod->setEnabled(true);
    ui->sbPropOfRod->setRange(1, ui->sbNumberOfrods->value());
    ui->leLenngth->setEnabled(true);
    ui->leArea->setEnabled(true);
    ui->cbUnitLength->setEnabled(true);
    ui->cbUnitArea->setEnabled(true);

    for (int k = 1; k <= ui->sbNumberOfrods->value(); k++)
        rods.push_back(Rod(k));

    on_sbPropOfRod_valueChanged(1);
}

void MainWindow::on_btnChangeNumberOfRods_clicked()
{
    ui->btnAcceptNumberOfRods->setEnabled(true);
    ui->sbNumberOfrods->setEnabled(true);
    ui->sbPropOfRod->setEnabled(false);
    ui->leLenngth->setEnabled(false);
    ui->leArea->setEnabled(false);
    ui->cbUnitLength->setEnabled(false);
    ui->cbUnitArea->setEnabled(false);
}

//void MainWindow::on_addRods_clicked(int i)
//{
//    QDynamicEditLine *editLineArea = new QDynamicEditLine(this);
//    QDynamicEditLine *editLineLength = new QDynamicEditLine(this);

//    QLabel *labeLength = new QLabel(this);
//    QLabel *labelArea = new QLabel(this);
//    labeLength->setText("Введите длину стержня - "+ QString::number(i));
//    labelArea->setText("Введите площадь поперечного сечения стержня - "+ QString::number(i));
//    ui->verticalLayout_2->addWidget(labeLength);
//    ui->verticalLayout_2->addWidget(editLineLength);
//    ui->verticalLayout_2->addWidget(labelArea);
//    ui->verticalLayout_2->addWidget(editLineArea);
//}

void MainWindow::on_sbPropOfRod_valueChanged(int arg1)
{
    ui->leLenngth->setText(QString::number(getRodFromList(ui->sbPropOfRod->value())->getLength()));
    ui->leArea->setText(QString::number(getRodFromList(ui->sbPropOfRod->value())->getArea()));
}

void MainWindow::on_leLenngth_editingFinished()
{
    getRodFromList(ui->sbPropOfRod->value())->setLength(ui->leLenngth->text().split(" ")[0].toDouble());
}


void MainWindow::on_leArea_editingFinished()
{
    getRodFromList(ui->sbPropOfRod->value())->setArea(ui->leArea->text().split(" ")[0].toDouble());
}

QList <Rod>::iterator MainWindow::getRodFromList(int i)
{
    for(auto iter = rods.begin(); iter != rods.end(); iter++){
        if (iter->getId() == ui->sbPropOfRod->value()){
            return iter;
        }
    }
}



