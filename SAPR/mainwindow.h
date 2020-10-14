#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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





    void on_sBPropOfRod_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
