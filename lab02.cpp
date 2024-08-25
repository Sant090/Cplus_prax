#include <iostream>
#include <climits>
using namespace std;


int main(){

    cout<<"Tamaño normal de los tipos de datos en Bytes"<<endl;
    cout<<"/////////////////////////////////////////////"<<endl;

    cout<<"char: "<<sizeof(char)<<endl;
    cout<<"char: "<<sizeof(float)<<endl;
    cout<<"char: "<<sizeof(double)<<endl;
    cout<<"char: "<<sizeof(long double)<<endl;
    cout<<"char: "<<sizeof(bool)<<endl;

    cout<<"signed short int: "<<sizeof(signed short int)<<endl;    
    cout<<"signed int: "<<sizeof(signed int)<<endl;    
    cout<<"signed long int: "<<sizeof(signed long int)<<endl;   
    cout<<"signed long long int: "<<sizeof(signed long long int)<<endl;       
    
    cout<<"/////////////////////////////////////////////"<<endl;

    cout<<"unsigned short int: "<<sizeof(unsigned short int)<<endl;    
    cout<<"unsigned int: "<<sizeof(unsigned int)<<endl;    
    cout<<"unsigned long int: "<<sizeof(unsigned long int)<<endl;   
    cout<<"unsigned long long int: "<<sizeof(unsigned long long int)<<endl;  

    system("pause");
    
    
    cout<<"/////////////////////////////////////////////"<<endl;

    cout<<"Valor Maximo y el Minimo "<<endl;
    cout<<"Char"<<endl;
    cout<<"Minimo:"<< CHAR_MIN<<endl;
    cout<<"Maximo:"<< CHAR_MAX<<endl;

    cout<<"Float"<<endl;
    cout<<"Minimo:"<< FLT_MAX<<endl;
    cout<<"Maximo:"<< FLT_MAX<<endl;  

    cout<<"Double"<<endl;
    cout<<"Minimo:"<< DBL_MIN<<endl;
    cout<<"Maximo:"<< DBL_MAX<<endl;

    cout<<"long Double"<<endl;
    cout<<"Minimo:"<< LDBL_MIN<<endl;
    cout<<"Maximo:"<< LDBL_MAX<<endl;

    cout<<"Signed short int "<<endl;
    cout<<"Minimo:"<< SHRT_MIN<<endl;
    cout<<"Maximo:"<< SHRT_MAX<<endl;
         
    cout<<"Signed int"<<endl;
    cout<<"Minimo:"<< INT_MIN<<endl;
    cout<<"Maximo:"<< INT_MAX<<endl;
            
    cout<<"Signed long int "<<endl;
    cout<<"Minimo:"<< LONG_MIN<<endl;
    cout<<"Maximo:"<< LONG_MAX<<endl;

    cout<<"Signed long long int"<<endl;
    cout<<"Minimo:"<< LLONG_MIN<<endl;
    cout<<"Maximo:"<< LLONG_MAX<<endl;

    cout<<"/////////////////////////////////////////////"<<endl;

    cout<<"Unsigned short int "<<endl;
    cout<<"Maximo:"<< USHRT_MAX<<endl;
         
    cout<<"Unsigned int"<<endl;
    cout<<"Maximo:"<< UINT_MAX<<endl;

    cout<<"Unsigned long int "<<endl;
    cout<<"Maximo:"<< ULONG_MAX<<endl;

    cout<<"Unsigned long long int"<<endl;
    cout<<"Maximo:"<< ULLONG_MAX<<endl;

    system("pause");
    return 0;
};