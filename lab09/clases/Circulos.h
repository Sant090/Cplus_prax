#ifndef CIRCULOS_H
#define CIRCULOS_H

#include <iostream>
#include <string>
#include "Figuras.h"

using namespace std;


const float PI = 3.1416;

class Circulo : public Figura {
private:
    double radio;

public:
    Circulo(double r) : radio(r) {
        cout << "Constructor de Círculo llamado." << endl;
    }

    ~Circulo() {
        cout << "Destructor de Círculo llamado." << endl;
    }

    double calcularArea() const override {
        return PI * radio * radio;
    }

    void mostrarInfo() const override {
        cout << "Información de la figura: Círculo" << endl;
        cout << "Radio del círculo: " << radio << endl;
        cout << "Área del círculo: " << calcularArea() << endl;
    }
};






#endif