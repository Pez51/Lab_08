#ifndef CLASEABSTRACTA.H
#define CLASEABSTRACTA.H

class Figura
{
private:
    float base;
    float altura;
public:
    Figura(float,float);
    void ingreso();
    void salida();
    virtual void calcularArea() = 0;
    float getBase();
    float getAltura();
};
#endif