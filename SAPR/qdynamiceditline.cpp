#include "qdynamiceditline.h"

QDynamicEditLine::QDynamicEditLine(QWidget *parent): QLineEdit(parent)
{
    ResId++;
    textEditid = ResId;
}

QDynamicEditLine::~QDynamicEditLine()
{

}

int QDynamicEditLine::getGlobaId()
{
    return textEditid;
}


int QDynamicEditLine:: ResId = 0;
