#include <iostream>
#include <vector>
#include "clases/Figuras.h"
#include "clases/Cuadrados.h"
#include "clases/Circulos.h"
#include "clases/Triangulos.h"

using namespace std;

int main() {
    
    vector<Figura*> figuras;
    
    figuras.push_back(new Figura());
    figuras.push_back(new Cuadrado(7));
    figuras.push_back(new Circulo(4));
    figuras.push_back(new Triangulo(6, 5));

    
    for (const auto& figura : figuras) {
        figura->mostrarInfo();
        cout << endl;
    }

    
    for (auto& figura : figuras) {
        delete figura;
    }

    return 0;
}
