#include "rod.h"

double Rod::getCorX() const
{
    return corX;
}

void Rod::setCorX(double value)
{
    corX = value;
}

void Rod::setCorY(double value)
{
    corY = value;
}

double Rod::getCorY() const
{
    return corY;
}

double Rod::getWidth() const
{
    return width;
}

void Rod::setWidth(double value)
{
    width = value;
}

void Rod::setHeight(double value)
{
    height = value;
}

double Rod::getHeight() const
{
    return height;
}

void Rod::setLeftProp(bool value)
{
    leftProp = value;
}

bool Rod::getLeftProp() const
{
    return leftProp;
}

bool Rod::getRightProp() const
{
    return rightProp;
}

void Rod::setRightProp(bool value)
{
    rightProp = value;
}

double Rod::getDLoad() const
{
    return dLoad;
}

void Rod::setDLoad(double value)
{
    dLoad = value;
}

Rod::Rod(int id)
{
    this->id = id;
}

void Rod::setLength(double l)
{
    length = l;
}

void Rod::setArea(double a)
{
    area = a;
}

void Rod::setModuleE(double e)
{
    moduleE = e;
}

void Rod::setModuleSigma(double s)
{
    moduleSigma  = s;
}

int Rod::getId()
{
    return id;
}

double Rod::getLength()
{
    return length;
}

double Rod::getArea()
{
    return area;
}

double Rod::getModuleE()
{
   return moduleE;
}

double Rod::getModuleSigma()
{
    return moduleSigma;
}

double *Rod::getSizeValue()
{

}

Rod::~Rod()
{

}

