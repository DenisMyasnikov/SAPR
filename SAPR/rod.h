#ifndef ROD_H
#define ROD_H
#include<cmath>

class Rod
{
    int id;
    double length=1;
    double area=0.001;
    double moduleE = 2*pow(10,11);
    double moduleSigma = 160 * pow(10, 6);
public:  
    Rod(int id);
    void setLength(double);
    void setArea(double);
    void setModuleE(double);
    void setModuleSigma(double);
    int getId();
    double getLength();
    double getArea();
    double getModuleE();
    double getModuleSigma();
    double *getSizeValue();
    ~Rod();
};

#endif // ROD_H
