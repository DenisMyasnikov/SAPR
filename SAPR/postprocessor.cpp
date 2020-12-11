#include "postprocessor.h"
#include "ui_postprocessor.h"

PostProcessor::PostProcessor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PostProcessor)
{
    ui->setupUi(this);
    proc = new Processor(loadJSON("PLCoC.json"));
    ui->twUx->setRowCount(proc->getCountOfNode());

    for (int i = 0; i<proc->getCountOfNode();i++ ){
        ui->twUx->setItem(i,0,new QTableWidgetItem(QString::number(proc->getSlauSolution()[i]),INT_MAX));
    }

    QStringList labels;
    ui->twNx->setRowCount(10);
    ui->twNx->setColumnCount(proc->getCountOfRod());
    for (int i = 0 ; i < ui->twNx->rowCount(); i++){
//        ui->twNx->setItem(i,0,new QTableWidgetItem(QString::number(proc->getNx(10,1)[i]),INT_MAX));
    }

    ui->twNx->setHorizontalHeaderLabels(labels);

//    if (proc->getNodes().last().getLoad() != 0)
//        ui->label->setNum(proc->getNodes().last().getLoad());
//    ui->label_2->setNum(proc->getNodes().size());

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
    if (file.isOpen()){
        return QJsonDocument().fromJson(file.readAll());
    }else{
        QJsonDocument jd;
        return jd;
    }
    file.close();
}

void PostProcessor::on_pBTable_clicked()
{

}
