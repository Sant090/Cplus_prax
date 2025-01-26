#include <iostream>
#include "clases/Sensor.h"
#include "clases/Controlador.h"
#include "funciones/Menu.h"

using namespace std;

int main() {

    vector<Sensor*> sensores; 
    vector<Controlador*> controladores; 

    int opcion;

    do {

        mostrarMenu();
        cin >> opcion;
        switch (opcion){

        case 1: {

            string nombre;
            int etiqueta;

            cout << "Introduce el nombre del sensor de voltaje: ";
            cin >> nombre;
            cout << "Introduce la etiqueta del sensor de voltaje: ";
            cin >> etiqueta;

            sensores.push_back(new Sensor(nombre, etiqueta,0));
            cout << "Sensor de voltaje registrado correctamente." << endl;
            break;
        }
        case 2: {
            string nombre;
            int etiqueta;
            cout << "Introduce el nombre del controlador: ";
            cin >> nombre;
            cout << "Introduce el etiqueta del controlador: ";
            cin >> etiqueta;

            controladores.push_back(new Controlador(nombre, etiqueta));
            cout << "Controlador registrado correctamente." << endl;
            break;
        }
        case 3: {
            int sensorEtiqueta, controladortiqueta;
            cout << "Introduce el etiqueta del sensor de voltaje a asociar: ";
            cin >> sensorEtiqueta;
            cout << "Introduce el etiqueta del controlador: ";
            cin >> controladortiqueta;

            Sensor* sensor = nullptr;
            Controlador* controlador = nullptr;

            for (Sensor* s : sensores) {
                if (s->getEtiqueta() == sensorEtiqueta) {
                    sensor = s;
                    break;
                }
            }

            for (Controlador* c : controladores) {
                if (c->getEtiqueta() == controladortiqueta) {
                    controlador = c;
                    break;
                }
            }

            if (sensor && controlador) {
                controlador->makSensor(sensor);
                cout << "Sensor de voltaje asociado correctamente." << endl;
            } else {
                cout << "Sensor o controlador no encontrado." << endl;
            }
            break;
        }
        case 4: {
            cout << "Estado del sistema:" << endl;
            for (Controlador* c : controladores) {
                c->mostrarInformacion();
                c->mostrarSensores();
                cout << endl;
            }
            break;
        }
        case 5: {
            int sensorEtiqueta;
            cout << "Introduce el etiqueta del sensor de voltaje a eliminar: ";
            cin >> sensorEtiqueta;

            for (Controlador* c : controladores) {
                    c->delSensor(sensorEtiqueta);
                }

            bool encontrado = false;
            for (auto it = sensores.begin(); it != sensores.end(); ) { 
                if ((*it)->getEtiqueta() == sensorEtiqueta) {
                    delete *it;              
                    it = sensores.erase(it); 
                    encontrado = true;      
                } else {
                    ++it; 
                }
            }
            cout<<"11111111111111111111111111111111111";

            if (encontrado) {
                cout << "Sensor de voltaje eliminado correctamente." << endl;
            } else {
                cout << "Sensor de voltaje no encontrado." << endl;
            }

            cout<<"000000000000000000000000000000";
            break;
        }
        case 6:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opción no váletiquetaa." << endl;
            break;
        }


    } while (opcion != 6);


    for (Sensor* s : sensores) {
        delete s;
    }

    for (Controlador* c : controladores) {
        delete c;
    }

    return 0;
}
