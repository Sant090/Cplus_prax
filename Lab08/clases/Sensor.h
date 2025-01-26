#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include "Dispositivo.h"
using namespace std;

class Sensor:public Dispositivo
{
    private:

        int voltaje;

    public:

        Sensor(string nombre,int etiqueta, int voltaje);
        void leerDato();
        int mostrarVoltaje();
        void mostrarInformacion() override;
        ~Sensor();
};

Sensor::Sensor(string nombre, int etiqueta, int c):Dispositivo(nombre, etiqueta)
{
    voltaje=c;
}

int Sensor::mostrarVoltaje()
{
    return voltaje;
}

void Sensor::leerDato()
{
    voltaje = 1.0 + static_cast<int>(rand() % 400) / 9;
}

void Sensor::mostrarInformacion() {
    cout << "Sensor: " << getNombre() 
         << " | Etiqueta: " << getEtiqueta() 
         << " | Voltaje: " << voltaje << "V" << endl;
}


Sensor::~Sensor()
{
}






#endif