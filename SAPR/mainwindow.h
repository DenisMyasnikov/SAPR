#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QPainter>
#include <QGraphicsScene>
#include <QMessageBox>

//MyInclude
#include "rod.h"
#include "node.h"
#include "qdynamiceditline.h"
#include "constructpainter.h"
#include <json.hpp>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
//    void on_spinBox_textChanged(const QString &arg1);

    void on_btnAcceptNumberOfRods_clicked();

    void on_btnChangeNumberOfRods_clicked();

//    void on_addRods_clicked(int i);

    void on_leLenngth_editingFinished();

    void on_sbPropOfRod_valueChanged(int arg1);
    void on_leArea_editingFinished();

    void on_leModuleE_editingFinished();

    void on_leModuleSigma_editingFinished();

    void on_cbUnitLength_currentIndexChanged(int index);

    void on_cbUnitArea_currentIndexChanged(int index);

    void on_cbModuleE_currentIndexChanged(int index);

    void on_cbModuleSigma_currentIndexChanged(int index);


    void on_btnAcceptPropOfRods_clicked();

    void on_cbSetLeftProp_clicked();

    void on_cbSetRightProp_clicked();

    void on_leLoadOnNode_editingFinished();

    void on_leLoadOnRod_editingFinished();

private:
    Ui::MainWindow *ui;
    QList <Rod> rods;
    QList <Node> nodes;
    QGraphicsScene *myGrScene;
    int previousNumberOfRods=0;


    double getValueFromNormalValue(int type);
    void setSizeOfRod();
    void addChangeCountOfNodes(int);
    void changeEnableRodProp(bool en);
    void changeEnableLoadProp(bool en);
    QList <Rod>::iterator getRodFromList(int i);
    void setCorXOnNodes();
};
#endif // MAINWINDOW_H
