#include <iostream>
#include <climits> 
#include <cfloat>

using namespace std;

int main() {

	    cout << "sizeof information" << endl;
		cout << "========================" << endl;
		cout << "char: "<< sizeof(char)<<" bytes. "<<endl;
		cout << "signed short int: " <<  sizeof(signed short int)<<" bytes. "<<endl;
		cout << "signed int: " << sizeof(signed int)<<" bytes. "<<endl;
		cout << "signed long int: " << sizeof(signed long int)<<" bytes. "<<endl;
		cout << "signed long long int: " << sizeof(signed long long int)<<" bytes. "<<endl;
		
	
		cout << "========================" << endl;
		cout << "unsigned short int: " <<  sizeof(unsigned short int)<<" bytes. "<<endl;
		cout << "unsigned int: " << sizeof(unsigned int)<<" bytes. "<<endl;
		cout << "unsigned long int: " << sizeof(unsigned long int)<<" bytes. "<<endl;
		cout << "unsigned long long int: " << sizeof(unsigned long long int)<<" bytes. "<<endl;
		
		
		cout << "========================" << endl;
		cout << "float: " << sizeof(float) << " bytes." << endl;
		cout << "double: " << sizeof(double) << " bytes." << endl;
		cout << "long double: " << sizeof(long double) << " bytes." << endl;
		cout << "bool: " << sizeof(bool) << " bytes." << endl;
		
		cout << "========================" << endl;
		cout << "Minimum values:" << endl;
		cout << "char: " << CHAR_MIN << endl;
		cout << "signed short int:  " << INT_MIN << endl;
		cout << "signed int: " << SHRT_MIN << endl;
		cout << "signed long int: " << LONG_MIN << endl; 
		cout << "signed long long int: " << LLONG_MIN << endl;
		
		cout << "float: " << FLT_MIN << endl;
		cout << "double: " << DBL_MIN  << endl;
		cout << "long double: " << LDBL_MIN << endl;
		
	
	
		cout << "========================" << endl;		
		cout << "Maximum values:" << endl;
		cout << "char: " << CHAR_MAX << endl;
		cout << "signed int: " << INT_MAX << endl;
		cout << "signed short: " << SHRT_MAX << endl;
		cout << "signed long: " << LONG_MAX << endl; 
		cout << "signed long long: " << LLONG_MAX << endl;
		
		
		cout << "========================" << endl;		
		cout << "Maximum values:" << endl;
		cout << "char: " << CHAR_MAX << endl;
		cout << "unsigned int: " << UINT_MAX << endl;
		cout << "unsigned short: " << USHRT_MAX << endl;
		cout << "unsigned long: " << ULONG_MAX << endl; 
		cout << "unsigned long long: " << ULLONG_MAX << endl;
		
		cout << "float: " <<  FLT_MAX << endl;
		cout << "double: " << DBL_MAX << endl;
		cout << "long double: " << LDBL_MAX << endl;


    system("pause");
		return 0;	
}