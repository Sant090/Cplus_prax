#include<iostream>
using namespace std;

class personas{
    private:
        int edad;
        string nombre;
    public: 
        personas(int,string);
        void leer();
        void correr();
};

personas::personas(int edad1, string nombre1){
    edad = edad1;
    nombre = nombre1;
};

void personas::leer(){

    cout << nombre << " esta leyendo un libro " << endl;
};

void personas::correr(){

    cout << nombre << " esta corriendo"<< endl;
};

int main(){
    int ageUser;
    cout<<"agrega tu edad"<<endl;
    cin >> ageUser;

    string nameUser;
    cout<<"agrega tu nombre"<<endl;
    cin >> nameUser;
    
    personas usuario = personas(ageUser,nameUser);
    usuario.leer();
    usuario.correr();
    system("pause");
    return 0;
}