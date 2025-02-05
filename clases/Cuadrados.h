#ifndef CUADRADOS_H
#define CUADRADOS_H

#include <iostream>
#include <string>
#include "Figuras.h"

using namespace std;

class Cuadrado : public Figura {
private:
    double lado;

public:
    Cuadrado(double l) : lado(l) {
        cout << "Constructor de Cuadrado llamado." << endl;
    }

    ~Cuadrado() {
        cout << "Destructor de Cuadrado llamado." << endl;
    }

    double calcularArea() const override {
        return lado * lado;
    }

    void mostrarInfo() const override {
        cout << "Información de la figura: Cuadrado" << endl;
        cout << "Lado del cuadrado: " << lado << endl;
        cout << "Área del cuadrado: " << calcularArea() << endl;
    }
};



#endif