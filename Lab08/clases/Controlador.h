#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "Sensor.h"
#include "Dispositivo.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


class Controlador:public Dispositivo
{
private:
    vector<Sensor*> sensores;
public:
    Controlador(string nombre, int etiqueta);
    void makSensor(Sensor* Sensor);
    void delSensor(int etiquetaSensor);
    void mostrarSensores();
    void desasociarSensor(int etiquetaSensor);
    void mostrarInformacion() override;
    
    ~Controlador();
};

Controlador::Controlador(string nombre, int etiqueta):Dispositivo(nombre,etiqueta)
{
}

Controlador::~Controlador()
{
    for(Sensor* sensor:sensores)
    {
        delete sensor;
    }
}

void Controlador::makSensor(Sensor* Sensor)
{
    sensores.push_back(Sensor);
}

void Controlador::delSensor(int etiquetaSensor)
{

    bool encontrado = false;
    for (auto objeto = sensores.begin(); objeto != sensores.end(); ++objeto) {
        if ((*objeto)->getEtiqueta() == etiquetaSensor) {
            delete *objeto;
            sensores.erase(objeto);
            encontrado = true;
            break; 
        }
    }

    if (!encontrado) {
        cout << "Sensor con ID " << etiquetaSensor << " no fue encontrado." << endl;
    }
    
}

void Controlador::mostrarSensores(){
    if (sensores.empty()) {
        cout << "No hay sensores de voltaje asociados a este controlador." << endl;
        return;
    }

    cout << "Sensores de Voltaje asociados:" << endl;
    for (Sensor* Sensor : sensores) {
        Sensor->mostrarInformacion();
    }
}

void Controlador::desasociarSensor(int etiquetaSensor) {
        auto it = find_if(sensores.begin(), sensores.end(),
                           [etiquetaSensor](Sensor* s) { return s->getEtiqueta() == etiquetaSensor; });

        if (it != sensores.end()) {
            sensores.erase(it);  
        }
}


void Controlador::mostrarInformacion() {
    cout << "Controlador: " << getNombre() 
         << " | Etiqueta: " << getEtiqueta() << endl;
}

#endif