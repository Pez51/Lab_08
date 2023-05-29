#include "ClaseAbstracta.h"
#include "Circulo.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Pentagono.h"
#include "Cuadrado.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int opcion;
    vector<Figura*> figuras;

    do {
        cout << "Seleccione una opción:" << endl;
        cout << "1. Círculo" << endl;
        cout << "2. Rectángulo" << endl;
        cout << "3. Triángulo" << endl;
        cout << "4. Cuadrado" << endl;
        cout << "5. Pentágono" << endl;
        cout << "0. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 1) {
            float radio;
            cout << "Ingrese el radio del círculo: ";
            cin >> radio;
            figuras.push_back(new Circulo(radio));
        } else if (opcion == 2) {
            float base, altura;
            cout << "Ingrese la base del rectángulo: ";
            cin >> base;
            cout << "Ingrese la altura del rectángulo: ";
            cin >> altura;
            figuras.push_back(new Rectangulo(base, altura));
        } else if (opcion == 3) {
            float base, altura;
            cout << "Ingrese la base del triángulo: ";
            cin >> base;
            cout << "Ingrese la altura del triángulo: ";
            cin >> altura;
            figuras.push_back(new Triangulo(base, altura));
        } else if (opcion == 4) {
            float lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            figuras.push_back(new Cuadrado(lado));
        } else if (opcion == 5) {
            float lado;
            cout << "Ingrese el lado del pentágono: ";
            cin >> lado;
            figuras.push_back(new Pentagono(lado));
        }
        cout << endl;

    } while (opcion != 0);
    for (const auto& figura : figuras) {
        figura->calcularArea();
    }
    for (const auto& figura : figuras) {
        delete figura;
    }
    return 0;
}