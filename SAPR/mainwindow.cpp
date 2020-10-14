#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   ui->sbNumberOfrods->setRange(1,1000);
   ui->sbPropOfRod->setEnabled(false);
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

    for (int k = 1; k <= ui->sbNumberOfrods->value(); k++)
        rods.push_back(Rod(k));
    ui->label->setText(QString::number(rods.last().getId()));

}

void MainWindow::on_btnChangeNumberOfRods_clicked()
{
    ui->btnAcceptNumberOfRods->setEnabled(true);
    ui->sbNumberOfrods->setEnabled(true);
    ui->sbPropOfRod->setEnabled(false);
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







void MainWindow::on_sBPropOfRod_textChanged(const QString &arg1)
{

}
