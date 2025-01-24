#ifdef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class sensor:public dispositivo
{
private:
    int valor_R;
public:
    sensor(int,int);

     string leer_Datos(valor_R,etiqueta);




    ~sensor();
};

sensor::sensor(int s)
{
    valor_R=s;
}

string leer_Datos(valor_Datos,etiqueta){

    cout<<"El valor del sensor "<<etiqueta<<" es de "<<valor_Datos;

}






sensor::~sensor()
{
}






#endif