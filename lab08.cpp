#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Libro {
private:
    string titulo;
    string autor;
    int anios;

public:

    Libro(string t, string a, int an) : titulo(t), autor(a), anios(an) {}

    string getTitulo(){
    return titulo;
    }

    string getAutor(){
    return autor; 
    }

    int getanios(){ 
    return anios; 
    }

    void setTitulo(string t){ 
    titulo = t; 
    }

    void setAutor(string a){ 
    autor = a; 
    }

    void setanios(int anio){ 
    anios = anio; 
    }

    void mostrarInformacion(){
        cout << "Título: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Año de publicación: " << anios << endl;
    }
};

int main() {
    
    vector<Libro> libros;

    libros.emplace_back("El Principito", "Antoine de Saint-Exupéry", 1943);
    libros.emplace_back("Cien años de soledad", "Gabriel García Márquez", 1967);
    libros.emplace_back("Diario de un Loco", "Nikolai Gogol", 1835);
    libros.emplace_back("Don Quijote", "Miguel de Cervantes", 1605);
    libros.emplace_back("Mi lucha", "Adolf Hitler", 1925);

    for (size_t i = 0; i < libros.size(); ++i) {
        cout << "Libro " << i + 1 << ":" << endl;
        libros[i].mostrarInformacion();
        cout << endl;
    }

    cout << "Después de modificar:" << endl;
    libros[4].setTitulo("Mi Lucha (La venganza de un estado)");
    libros[4].setanios(2025);

    cout << "Libro 5:" << endl;
    libros[4].mostrarInformacion();

    return 0;
}
