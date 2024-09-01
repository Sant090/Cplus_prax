#include<iostream>
#include<vector>
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
    /*
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
    */

    int numCity, numDay;
    vector<vector<float>> temperaturas;

    cout << "Set the number of cities: ";
    cin >> numCity;
    cout << "Set the number of days: ";
    cin >> numDay;
    temperaturas.resize(numCity, vector<float>(numDay));

    for (int i = 0; i < numCity; i++) {
        for (int j = 0; j < numDay; j++) {
            cout << "Add the value of day #" << j + 1 << " for city #" << i + 1 << ": ";
            cin >> temperaturas.at(i,j);
        }
    }
    system("pau")
    cout<<"You have this data:";

    for (int k = 0; k < numCity; k++)
    {
        cout<<"\nCity #"<<k+1<<endl;
    }

    cout<<"What city its a day that you want delate date:\n";

    int tempCity;
    cin>>tempCity;
    
    for (int x = 0; x < numDay; x++) 
    {
        cout<<"Day #"<<x+1<<": "<<temperaturas[tempCity][x]<<endl;
    }

}
