
#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "ClaseAbstracta.h"
class Triangulo: public Figura
{
private:
    float base;
    float altura;
public:
    Triangulo(float=0.0,float=0.0);
    void ingreso();
    void salida();
    void calcularArea();
};

#endif
