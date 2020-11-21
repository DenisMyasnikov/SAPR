#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->sbNumberOfrods->setRange(1,1000);
    changeEnableRodProp(false);
    changeEnableLoadProp(false);

    myGrScene = new QGraphicsScene(this);
    ui->graphicsView->setScene(myGrScene);
    ui->btnAcceptPropOfRods->setEnabled(false);
    ui->btnChangeNumberOfRods->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete myGrScene;
    delete ui;

}

// SLOTS

void MainWindow::on_btnAcceptNumberOfRods_clicked()
{
    ui->btnAcceptNumberOfRods->setEnabled(false);
    ui->sbNumberOfrods->setEnabled(false);
    changeEnableRodProp(true);
    ui->btnAcceptPropOfRods->setEnabled(true);
    ui->btnChangeNumberOfRods->setEnabled(true);
    ui->sbPropOfRod->setRange(1, ui->sbNumberOfrods->value());
    if (previousNumberOfRods <= ui->sbNumberOfrods->value()){
    for (int k = 1; k <= ui->sbNumberOfrods->value() - previousNumberOfRods; k++){

        if (!rods.isEmpty() && rods.last().getRightProp()){
            rods.last().setRightProp(false);
            rods.push_back(Rod(rods.isEmpty()? 1: rods.last().getId()+1));
            rods.last().setRightProp(true);
        }else{
            rods.push_back(Rod(rods.isEmpty()? 1: rods.last().getId()+1));
        }
    }
    }else{
        for (int k = 1; k <= abs(ui->sbNumberOfrods->value() - previousNumberOfRods); k++){

            if (rods.last().getRightProp()){
                rods.removeLast();
                rods.last().setRightProp(true);
            }else{
                rods.removeLast();
                rods.first().setLeftProp(true);
            }
        }
    }
    if (!rods.first().getLeftProp() && !rods.last().getRightProp()){
        ui->cbSetLeftProp->setChecked(true);
        rods.first().setLeftProp(true);
    }

    addChangeCountOfNodes(rods.size());
    on_sbPropOfRod_valueChanged(1);
    previousNumberOfRods = ui->sbNumberOfrods->value();
    setSizeOfRod();
    ConstructPainter::paintRod(myGrScene, rods, nodes);
}

void MainWindow::on_btnAcceptPropOfRods_clicked()
{
    if(ui->sbPropOfRod->isEnabled()){
        changeEnableRodProp(false);
        changeEnableLoadProp(true);
        ui->btnAcceptPropOfRods->setText("Поменять характеристики стержней");
        ui->btnChangeNumberOfRods->setEnabled(false);
        ui->sbNumberOfrods->setEnabled(false);
        ui->sbLoadOnNode->setRange(1,nodes.size());
        ui->sbLoadOnNode->setValue(1);
        ui->sbLoadOnRod->setRange(1,rods.size());
        ui->sbLoadOnRod->setValue(1);
        ui->leLoadOnNode->setText(QString::number(nodes.begin()->getLoad()));
        ui->leLoadOnRod->setText(QString::number(rods.begin()->getDLoad()));
    }else{
        changeEnableRodProp(true);
        changeEnableLoadProp(false);
        ui->btnAcceptPropOfRods->setText("Принять характеристики стержней");
        ui->btnChangeNumberOfRods->setEnabled(true);
    }
}

void MainWindow::on_btnChangeNumberOfRods_clicked()
{
    ui->btnAcceptNumberOfRods->setEnabled(true);
    ui->sbNumberOfrods->setEnabled(true);
    changeEnableRodProp(false);
    ui->btnAcceptPropOfRods->setEnabled(false);
    ui->btnChangeNumberOfRods->setEnabled(false);


}



void MainWindow::on_sbPropOfRod_valueChanged(int arg1)
{
    ui->leLenngth->setText(QString::number(getValueFromNormalValue(1)));
    ui->leArea->setText(QString::number(getValueFromNormalValue(2)));
    ui->leModuleE->setText(QString::number(getValueFromNormalValue(3)));
    ui->leModuleSigma->setText(QString::number(getValueFromNormalValue(4)));
}

void MainWindow::on_sbLoadOnNode_valueChanged(int arg1)
{
    ui->leLoadOnNode->setText(QString::number(getValueFromNormalValue(5)));
}

void MainWindow::on_sbLoadOnRod_valueChanged(int arg1)
{
    ui->leLoadOnRod->setText(QString::number(getValueFromNormalValue(6)));
}

void MainWindow::on_leLenngth_editingFinished()
{
    double value = ui->leLenngth->text().split(" ")[0].toDouble();
    if (value <= 0){
        QMessageBox::warning(this, "Внимание","Не нада так");
        value = getValueFromNormalValue(1);
        ui->leLenngth->setText(QString::number(value));
    }
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
    getRodFromList()->setLength(normalValue);
    ui->statusbar->showMessage(QString::number(normalValue));
    setSizeOfRod();
    ConstructPainter::paintRod(myGrScene, rods, nodes);
}

void MainWindow::on_leArea_editingFinished()
{

    double value = ui->leArea->text().split(" ")[0].toDouble();
    if (value <= 0){
        QMessageBox::warning(this, "Внимание","Не нада так");
        value = getValueFromNormalValue(2);
        ui->leArea->setText(QString::number(value));
    }
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
        ConstructPainter::paintRod(myGrScene, rods, nodes);
    }
    getRodFromList()->setArea(normalValue);
    ui->statusbar->showMessage(QString::number(normalValue));
    setSizeOfRod();
    ConstructPainter::paintRod(myGrScene, rods, nodes);
}

void MainWindow::on_leModuleE_editingFinished()
{
    double value = ui->leModuleE->text().split(" ")[0].toDouble();
    if (value <= 0){
        QMessageBox::warning(this, "Внимание","Не нада так");
        value = getValueFromNormalValue(3);
        ui->leModuleE->setText(QString::number(value));
    }
    double normalValue;
    switch (ui->cbModuleE->currentIndex()) {
    case 0:
        normalValue = value;
        break;
    case 1:
        normalValue = value*1000;
        break;
    case 2:
        normalValue = value*1000000;
        break;

    }
    getRodFromList()->setModuleE(normalValue);
    ui->statusbar->showMessage(QString::number(normalValue));
}

void MainWindow::on_leModuleSigma_editingFinished()
{
    double value = ui->leModuleSigma->text().split(" ")[0].toDouble();
    if (value <= 0){
        QMessageBox::warning(this, "Внимание","Не нада так");
        value = getValueFromNormalValue(4);
        ui->leModuleSigma->setText(QString::number(value));
    }
    double normalValue;
    switch (ui->cbModuleSigma->currentIndex()) {
    case 0:
        normalValue = value;
        break;
    case 1:
        normalValue = value*1000;
        break;
    case 2:
        normalValue = value*1000000;
        break;

    }
    getRodFromList()->setModuleSigma(normalValue);
    ui->statusbar->showMessage(QString::number(normalValue));
}

void MainWindow::on_leLoadOnNode_editingFinished()
{
    double value = ui->leLoadOnNode->text().split(" ")[0].toDouble();
    double normalValue;
    switch (ui->cbUnitLoadOnNode->currentIndex()) {
    case 0:
        normalValue = value * 0.001;
        break;
    case 1:
        normalValue = value;
        break;
    case 2:
        normalValue = value * 1000;
        break;
    }
    getNodeFromList()->setLoad(normalValue);
    ConstructPainter::paintRod(myGrScene, rods, nodes);
}

void MainWindow::on_leLoadOnRod_editingFinished()
{
    double value = ui->leLoadOnRod->text().split(" ")[0].toDouble();
    double normalValue;
    switch (ui->cbUnitLoadOnRod->currentIndex()) {
    case 0:
        normalValue = value * 0.001;
        break;
    case 1:
        normalValue = value;
        break;
    case 2:
        normalValue = value * 1000;
        break;
    }
    getRodFromList2()->setDLoad(normalValue);
    ConstructPainter::paintRod(myGrScene, rods, nodes);

}
void MainWindow::on_cbUnitLength_currentIndexChanged(int index)
{
    ui->statusbar->showMessage(QString::number(index));
    ui->leLenngth->setText(QString::number(getValueFromNormalValue(1)));
}

void MainWindow::on_cbUnitArea_currentIndexChanged(int index)
{
    ui->statusbar->showMessage(QString::number(index));
    ui->leArea->setText(QString::number(getValueFromNormalValue(2)));
}

void MainWindow::on_cbModuleE_currentIndexChanged(int index)
{
    ui->statusbar->showMessage(QString::number(index));
    ui->leModuleE->setText(QString::number(getValueFromNormalValue(3)));
}

void MainWindow::on_cbModuleSigma_currentIndexChanged(int index)
{
    ui->statusbar->showMessage(QString::number(index));
    ui->leModuleSigma->setText(QString::number(getValueFromNormalValue(4)));
}


void MainWindow::on_cbSetLeftProp_clicked()
{
    if (!ui->cbSetRightProp->isChecked()){
        QMessageBox::warning(this, "Внимание","Не нада так");
        ui->cbSetLeftProp->setChecked(true);
    }else{
        rods.first().setLeftProp(ui->cbSetLeftProp->isChecked());
        ConstructPainter::paintRod(myGrScene, rods, nodes);
    }
}

void MainWindow::on_cbUnitLoadOnNode_currentIndexChanged(int index)
{
    ui->leLoadOnNode->setText(QString::number(getValueFromNormalValue(5)));
}

void MainWindow::on_cbUnitLoadOnRod_currentIndexChanged(int index)
{
    ui->leLoadOnRod->setText(QString::number(getValueFromNormalValue(6)));
}

void MainWindow::on_cbSetRightProp_clicked()
{
    if (!ui->cbSetLeftProp->isChecked()){
        QMessageBox::warning(this, "Внимание","Не нада так");
        ui->cbSetRightProp->setChecked(true);
    }else{
        rods.last().setRightProp(ui->cbSetRightProp->isChecked());
        ConstructPainter::paintRod(myGrScene, rods,nodes);
    }
}
//MyFunc

//type: Длина - 1; площадь - 2; модуль упркгости, сигмы - 3; сигма - 4; нагрузка на узел - 5; нагрузка на стержень - 6;
double MainWindow::getValueFromNormalValue(int type)
{
    double value;
    switch (type) {
    case 1:{
        double normalValue = getRodFromList()->getLength();
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
        break;
    }
    case 2:{
        double normalValue = getRodFromList()->getArea();
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
        break;
    }
    case 3:{
        double normalValue = getRodFromList()->getModuleE();
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
        break;
    }
    case 4:{
        double normalValue = getRodFromList()->getModuleSigma();
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
        break;
    }
    case 5:{
        double normalValue = getNodeFromList()->getLoad();
        switch (ui->cbUnitLoadOnNode->currentIndex()) {
        case 0:
            value = normalValue * 1000;
            break;
        case 1:
            value = normalValue;
            break;
        case 2:
            value = normalValue*0.001;
            break;
        }
        break;
    }
    case 6:{
        double normalValue = getRodFromList2()->getDLoad();
        switch (ui->cbUnitLoadOnRod->currentIndex()) {
        case 0:
            value = normalValue * 1000;
            break;
        case 1:
            value = normalValue;
            break;
        case 2:
            value = normalValue*0.001;
            break;
        }
        break;
    }
    }
    return value;
}

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

void MainWindow::changeEnableLoadProp(bool en)
{
    ui->label_8->setEnabled(en);
    ui->label_9->setEnabled(en);
    ui->label_10->setEnabled(en);
    ui->label_11->setEnabled(en);
    ui->label_12->setEnabled(en);
    ui->sbLoadOnNode->setEnabled(en);
    ui->sbLoadOnRod->setEnabled(en);
    ui->cbSetLeftProp->setEnabled(en);
    ui->cbSetRightProp->setEnabled(en);
    ui->cbUnitLoadOnNode->setEnabled(en);
    ui->cbUnitLoadOnRod->setEnabled(en);
    ui->leLoadOnNode->setEnabled(en);
    ui->leLoadOnRod->setEnabled(en);
}

void MainWindow::saveJson(QJsonDocument document, QString name)
{
    QFile jsonFile(name);
    jsonFile.open(QFile::WriteOnly);
    jsonFile.write(document.toJson());
    jsonFile.close();
}
QList <Rod>::iterator MainWindow::getRodFromList()
{
    for(auto iter = rods.begin(); iter != rods.end(); iter++){
        if (iter->getId() == ui->sbPropOfRod->value()){
            return iter;
        }
    }
}

QList <Rod>::iterator MainWindow::getRodFromList2()
{
    for(auto iter = rods.begin(); iter != rods.end(); iter++){
        if (iter->getId() == ui->sbLoadOnRod->value()){
            return iter;
        }
    }
}

QList <Node>::iterator MainWindow:: getNodeFromList(){
    for (auto iter = nodes.begin();iter != nodes.end();iter++ )
        if (iter->getId() == ui->sbLoadOnNode->value())
            return iter;
}

void MainWindow::setSizeOfRod()
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
    koefLength = 200/maxLength;
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

void MainWindow:: setCorXOnNodes(){
    for (auto iter = nodes.begin(); iter != nodes.end(); iter++){
        for (auto iter2 = rods.begin(); iter2 != rods.end(); iter2++){
            if (iter->getId() == iter2->getId()){
                iter->setCorX(iter2->getCorX());
            }
        }
    }
    nodes.last().setCorX(rods.last().getCorX()+rods.last().getWidth());

}

void MainWindow::addChangeCountOfNodes(int countOfRods)
{
    int countOfNodes = countOfRods+1;
    int previousNumberOfNodes = nodes.size();
    if (previousNumberOfNodes  <= countOfNodes){
        for (int k = 1; k <= abs(countOfNodes-previousNumberOfNodes); k++){
            nodes.push_back(Node(nodes.isEmpty()? 1: nodes.last().getId()+1));
    }
    }else{
        for (int k = 1; k <= abs(countOfRods - previousNumberOfRods); k++){
            nodes.removeLast();
        }
    }
}


void MainWindow::on_actioncSave_triggered()
{
    if (!rods.isEmpty()){
        QJsonDocument json;
        QJsonObject  construct;
        QJsonObject  countJson;
        QJsonObject  propOfRodsJson;
        QJsonObject  loadOnNodeJson;
        QJsonObject  loadOnRodJson;
        QJsonObject  propJson;

        countJson.insert("CountOfRods",rods.last().getId());
        countJson.insert("CountOfNodes", nodes.last().getId());

        for (auto iter = rods.begin(); iter != rods.end(); iter++){
            QJsonObject  PORJson;
            PORJson.insert("Length",iter->getLength());
            PORJson.insert("Area", iter->getArea());
            PORJson.insert("ModuleE", iter->getModuleE());
            PORJson.insert("ModuleSigma", iter->getModuleSigma());
            propOfRodsJson[QString::number(iter->getId())]=PORJson;

            if (iter->getDLoad() != 0)
                loadOnRodJson.insert(QString::number(iter->getId()),iter->getDLoad());

        }

        for (auto iter = nodes.begin(); iter != nodes.end(); iter++){

                if (iter->getLoad() != 0)
                    loadOnNodeJson.insert(QString::number(iter->getId()),iter->getLoad());
        }

        if (rods.first().getLeftProp()){
            if (rods.last().getRightProp())
                propJson.insert("RigthProp", true);
            else
                propJson.insert("RigthProp", false);
            propJson.insert("LeftProp", true);
        }else{
            propJson.insert("RigthProp", true);
            propJson.insert("LeftProp", false);
        }

        construct["Count"] = countJson;
        construct["PropOfRods"] = propOfRodsJson;
        construct["loadOnNodes"] = loadOnNodeJson;
        construct["loadOnRod"] = loadOnRodJson;
        construct["Props"] = propJson;
        json.setObject(construct);
        saveJson(json, "PLCoC.json");
    }else
        QMessageBox::warning(this, "Внимание","конструкция не задана");
}

void MainWindow::on_actionGo_to_post_triggered()
{
    pProc = new PostProcessor();
    pProc->setWindowTitle("Постпроцессор");
    pProc->show();

}


