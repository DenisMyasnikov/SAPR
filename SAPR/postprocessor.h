#ifndef POSTPROCESSOR_H
#define POSTPROCESSOR_H

#include <QWidget>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
#include <QString>
#include <QMessageBox>
#include <QTableView>
#include <QTableWidget>
#include <QGraphicsScene>

//MyIncludes
#include "processor.h"
#include "rod.h"
#include "constructpainter.h"
#include "node.h"


namespace Ui {
class PostProcessor;
}

class PostProcessor : public QWidget
{
    Q_OBJECT

public:
    explicit PostProcessor(QWidget *parent = nullptr);
    ~PostProcessor();

private slots:

    void on_sbSNx_valueChanged(int arg1);

    void on_sbSSigma_valueChanged(int arg1);

    void on_sbUx_valueChanged(int arg1);

    void on_comboBox_currentIndexChanged(int index);

private:
    Processor *proc;
    QJsonDocument jD;
    QGraphicsScene *myGrScene;
    QGraphicsScene *myGrScene2;


    QList <Rod> rods ;
    QList <Node> nodes;

    void setNxTable(int n, QList <Rod> rods, QVector <QVector<double>> koefNx);
    void setSigmaTable(int n, QList <Rod> rods, QVector <QVector<double>> koefNx);
    void setUxTable(int n, QList <Rod> rods, QVector <QVector<double>> ux);
    void setSizeOfRod();
    void setCorXOnNodes();

    Ui::PostProcessor *ui;
    QJsonDocument loadJSON(QString fileName);

};

#endif // POSTPROCESSOR_H
