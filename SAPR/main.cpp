#include "mainwindow.h"
#include "listrods.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setWindowTitle("SAPR");
    return a.exec();
}
