#ifdef DISPOSITIVO_H
#define DISPOSITIVO_H



#include <iostream>
#include <vector>
#include <string>

using namespace std;

class dispositivo
{
private:
    int etiqueta;
public:
    dispositivo(int);
    
    
    
    ~dispositivo();
};

dispositivo::dispositivo(int a)
{
    etiqueta = a;
}

dispositivo::~dispositivo()
{
}






#endif