#include<iostream>
#include<vector>
#include<windows.h>
using namespace std;
/*
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
*/
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
const int maxOffset = 7;
	POINT place;

	FreeConsole();
	srand(GetTickCount());

	while(!GetAsyncKeyState(VK_F8)) {
		GetCursorPos(&place);

		int direction = (rand() % 4);
		switch(direction) {
			case 0:
				SetCursorPos(place.x + (rand() % maxOffset), place.y + (rand() % maxOffset));
				break;
			case 1:
				SetCursorPos(place.x + (rand() % maxOffset), place.y - (rand() % maxOffset));
				break;
			case 2:
				SetCursorPos(place.x - (rand() % maxOffset), place.y - (rand() % maxOffset));
				break;
			case 3:
			default: // ??
				SetCursorPos(place.x - (rand() % maxOffset), place.y + (rand() % maxOffset));
				break;
		}
		Sleep(5);
    }
    return 0;
    return 0;
}
