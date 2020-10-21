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
    double corX;
    double corY;
    double width;
    double height;
public:  
    Rod(int id);
    void setLength(double);
    void setArea(double);
    void setModuleE(double);
    void setModuleSigma(double);
    void setHeight(double value);
    void setWidth(double value);
    void setCorY(double value);
    void setCorX(double value);

    int getId();
    double getLength();
    double getArea();
    double getModuleE();
    double getModuleSigma();
    double *getSizeValue();
    double getHeight() const;
    double getCorX() const;
    double getCorY() const;
    double getWidth() const;
    ~Rod();







private:
    void convertSize();
};

#endif // ROD_H
