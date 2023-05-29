#ifndef CIRCULO_H
#define CIRCULO_H

#include "ClaseAbstracta.h"
class Circulo :public Figura
{
private:
    float radio;
public:
    Circulo(float=0.0);
    void ingreso();
    void salida();
    void calcularArea();
};

#endif