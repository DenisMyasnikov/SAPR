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

    bool leftProp = false;
    bool rightProp = false;
    double dLoad = 0;
public:  
    Rod(int id);
    void setLength(double);
    void setArea(double);
    void setModuleE(double);
    void setModuleSigma(double);
    void setDLoad(double value);
    void setHeight(double value);
    void setWidth(double value);
    void setCorY(double value);
    void setCorX(double value);
    void setRightProp(bool value);
    void setLeftProp(bool value);

    int getId();
    double getLength();
    double getArea();
    double getModuleE();
    double getModuleSigma();
    double getDLoad() const;
    double *getSizeValue();
    double getHeight() const;
    double getCorX() const;
    double getCorY() const;
    double getWidth() const;
    bool getRightProp() const;
    bool getLeftProp() const;
    ~Rod();












private:

};

#endif // ROD_H
