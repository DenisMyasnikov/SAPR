#include "rod.h"

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

Rod::~Rod()
{

}
