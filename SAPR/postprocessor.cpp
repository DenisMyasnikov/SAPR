#include "postprocessor.h"
#include "ui_postprocessor.h"

PostProcessor::PostProcessor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PostProcessor)
{
    ui->setupUi(this);
    proc = new Processor(loadJSON("PLCoC.json"));
    if (proc->getNodes().last().getLoad() != 0)
        ui->label->setNum(proc->getNodes().last().getLoad());
    ui->label_2->setNum(proc->getNodes().size());
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
