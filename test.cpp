#include <iostream>
#include <string>
#include "Dependency/clases/Usuario.h"
#include "Dependency/clases/Profesor.h"
#include "Dependency/clases/Estudiante.h"

using namespace std;


int main(){

    Profesor juan(56,"juan","Electrica", 11, true,1);
    Estudiante Santiago(18,"santiago","Electrica", 2, true,1);

    juan.MG_T();

    Santiago.MP_A();



    Santiago.informacion();
    juan.informacion();


    return 0;
}