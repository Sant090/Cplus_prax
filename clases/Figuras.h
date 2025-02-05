#ifndef FIGURAS_H
#define FIGURAS_H

#include <iostream>
#include <vector>


using namespace std;

class Figura {
public:
    Figura() {
        cout << "Constructor de Figura llamado." << endl;
    }

    virtual ~Figura() {
        cout << "Destructor de Figura llamado." << endl;
    }

    virtual double calcularArea() const {
        return 0.0;
    }

    virtual void mostrarInfo() const {
        cout << "\nInformación de la figura: Figura genérica" << endl;
        cout << "Área calculada: " << calcularArea() << endl;
    }
};

#endif