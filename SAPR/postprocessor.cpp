#include "postprocessor.h"
#include "ui_postprocessor.h"

PostProcessor::PostProcessor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PostProcessor)
{
    ui->setupUi(this);
    loadJSON("PLCoC.json");
}

PostProcessor::~PostProcessor()
{
    delete ui;
}

QJsonDocument PostProcessor::loadJSON(QString fileName)
{
    QFile jsonFile(fileName);
    jsonFile.open(QFile::ReadOnly);
    if (!jsonFile.isOpen()){
        return QJsonDocument().fromJson(jsonFile.readAll());

    }else{
        QJsonDocument qd;
        return  qd;
    }
}
