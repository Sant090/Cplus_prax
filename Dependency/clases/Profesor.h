#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>

using namespace std;

class Profesor:public Usuario
{
    private:
    int G_T;
    
    public:
    Profesor(int,string,string,int,bool,int);
    void MG_T();
    void I_P();

};

void Profesor::I_P(){

    Usuario::I_P();
    cout<<"El Docente a ingresado a la plataforma con exito"<<endl;

}

Profesor::Profesor(int edad1, string nombre1, string P_C1, int antiguedad1, bool estado1, int G_T1):Usuario(edad1,nombre1,P_C1,antiguedad1,estado1){
    G_T=G_T1;
}


void Profesor::MG_T(){
    cout<<"el profesor "<<nombre<<" del proyecto curricular "<< P_C<< " tiene el grupo "<<G_T<<endl;
}

#endif