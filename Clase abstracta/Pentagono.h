#ifndef PENTAGONO_H
#define PENTAGONO_H

#include "ClaseAbstracta.h"
class Pentagono :public Figura
{
private:
    float base;
public:
    Pentagono(float=0.0);
    void ingreso();
    void salida();
    void calcularArea();
};

#endif