#ifndef ROD_H
#define ROD_H
#include<cmath>

class Rod
{
    int id;
    double length=1;
    double area=1;
    double moduleE = 2*pow(10,11);
    double moduleSigma = 160 * pow(10, 6);
public:  
    Rod(int id);
    void setLength(double);
    void setArea(double);
    int getId();
    double getLength();
    double getArea();
    double getModuleE();
    double getModuleSigma();
    ~Rod();
};

#endif // ROD_H
