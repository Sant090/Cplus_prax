#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

using namespace std;

class Estudiante:public Usuario
{
    private:
    int P_A;

    public:
    Estudiante(int,string,string,int,bool,int);
    void I_P();
    void MP_A();

};



Estudiante::Estudiante(int edad1, string nombre1, string P_C1, int antiguedad1, bool estado1, int P_A1):Usuario(edad1,nombre1,P_C1,antiguedad1,estado1){
    P_A=P_A1;
}

void Estudiante::I_P(){

    Usuario::I_P();
    cout<<"El estudiante a ingresado a la plataforma con exito"<<endl;

}

void Estudiante::MP_A(){
    cout<<"el estudiante "<<nombre<<" del proyecto curricular "<< P_C<< " tiene "<<P_A<<" pruebas academicas"<<endl;
}

#endif