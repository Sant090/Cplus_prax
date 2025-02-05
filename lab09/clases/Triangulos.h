#ifndef TRIANGULOS_H
#define TRIANGULOS_H

#include <iostream>
#include <string>
#include "Figuras.h"

using namespace std;

class Triangulo : public Figura {
private:
    double base, altura;

public:
    Triangulo(double b, double h) : base(b), altura(h) {
        cout << "Constructor de Triángulo llamado." << endl;
    }

    ~Triangulo() {
        cout << "Destructor de Triángulo llamado." << endl;
    }

    double calcularArea() const override {
        return (base * altura) / 2.0;
    }

    void mostrarInfo() const override {
        cout << "Información de la figura: Triángulo" << endl;
        cout << "Base del triángulo: " << base << endl;
        cout << "Altura del triángulo: " << altura << endl;
        cout << "Área del triángulo: " << calcularArea() << endl;
    }
};

#endif