#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>

//MyInclude
#include "rod.h"
#include "qdynamiceditline.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QList <Rod> rods;
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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
