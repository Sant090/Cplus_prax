#include <iostream>
#include <string>
#include "Dependency/clases/Usuario.h"
#include "Dependency/clases/Profesor.h"
#include "Dependency/clases/Estudiante.h"

using namespace std;


int main(){

    Profesor Jeisson(56,"Jeisson","Electrica", 11, true,1);
    Estudiante Santiago(18,"Santiago","Electrica", 2, false,2);

    
    Santiago.MP_A();
    Santiago.informacion();
    Jeisson.MG_T();
    Jeisson.informacion();

    return 0;
}