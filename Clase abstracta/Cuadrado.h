#ifndef CUADRADO_H
#define CUADRADO_H

#include "ClaseAbstracta.h"
class Cuadrado :public Figura
{
private:
    float base;
public:
    Cuadrado(float=0.0);
    void ingreso();
    void salida();
    void calcularArea();
};

#endif