#ifndef POSTPROCESSOR_H
#define POSTPROCESSOR_H

#include <QWidget>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
#include <QString>
#include <QMessageBox>

//MyIncludes
#include "processor.h"

namespace Ui {
class PostProcessor;
}

class PostProcessor : public QWidget
{
    Q_OBJECT

public:
    explicit PostProcessor(QWidget *parent = nullptr);
    ~PostProcessor();

private:

    Ui::PostProcessor *ui;
    QJsonDocument loadJSON(QString fileName);

};

#endif // POSTPROCESSOR_H
