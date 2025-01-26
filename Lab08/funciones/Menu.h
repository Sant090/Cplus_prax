#ifndef MENU_H
#define MENU_H

#include <iostream>

using namespace std;

void mostrarMenu()
{
    string opciones[6]={"Registrar Sensor de Voltaje","Registrar Controlador","Asociar Sensor a Controlador","Mostrar Estado del Sistema","Eliminar Sensor","Salir"};
    
    for (int i = 0; i < 6; i++)
    {
        cout<<i<<". "<<opciones[i]<<endl;
    }
    cout << "Elige una opción: ";
}


#endif