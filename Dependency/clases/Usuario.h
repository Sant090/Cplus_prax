#ifndef USUARIO_H  
#define USUARIO_H

#include <string>

using namespace std;



class Usuario
{
private:

public:
    int edad;
    string nombre;
    string P_C;
    int antiguedad;    
    bool estado;
    Usuario(int,string, string, int, bool);
    virtual void I_P();
    void informacion();
};

Usuario::Usuario(int edad1, string nombre1 ,string P_C1, int antiguedad1, bool estado1 ){

    edad=edad1;
    nombre=nombre1;
    P_C=P_C1;
    antiguedad=antiguedad1;
    estado=estado1;

}


void Usuario::I_P(){
    cout<<"Se esta ingresando a la plataforma"<<endl;
}


void Usuario::informacion(){
    cout<<"El usuario "<<nombre<<" pertenece al proyecto curricular de "<<P_C<<" tiene "<< antiguedad<< " años en la universidad y se encuentra ";
    if(estado==true){
        cout<<"activo"<<endl;
    }else if(estado==false){
        cout<<"en vacaciones"<<endl;
    }else{
        cout<<"en proceso"<<endl;
    }
}


#endif