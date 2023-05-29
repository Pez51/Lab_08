#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "ClaseAbstracta.h"
class Rectangulo :public Figura
{
private:
    float base;
    float altura;
public:
    Rectangulo(float=0.0,float=0.0);
    void ingreso();
    void salida();
    void calcularArea();
};

#endif