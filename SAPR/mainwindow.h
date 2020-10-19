#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QPainter>
#include <QGraphicsScene>

//MyInclude
#include "rod.h"
#include "qdynamiceditline.h"
#include "constructpainter.h"

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

    QList <Rod>::iterator getRodFromList(int i);
    void on_sbPropOfRod_valueChanged(int arg1);
    void on_leArea_editingFinished();

    void changeEnableRodProp(bool en);

    void on_leModuleE_editingFinished();

    void on_leModuleSigma_editingFinished();

    void on_cbUnitLength_currentIndexChanged(int index);

    void on_cbUnitArea_currentIndexChanged(int index);

    void on_cbModuleE_currentIndexChanged(int index);

    void on_cbModuleSigma_currentIndexChanged(int index);

    void setNormalValue(int index);

private:
    Ui::MainWindow *ui;
    QList <Rod> rods;
    QGraphicsScene *myGrScene;

};
#endif // MAINWINDOW_H
