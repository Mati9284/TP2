//Hacer programa que te pida introducir 2 números y indicar el número mayor
#include <iostream>
using namespace std;
int main ()
{
	float num1, num2;
	cout << "Este programa indica el numero mayor" << endl;
	cout << "Ingrese primer numero" << endl;
	cin >> num1;
	cout << "Ingrese segundo numero" << endl;
	cin >> num2;
	if (num1>num2)
	{
		cout << "El numero mayor es " << num1 << endl;
	}
	else 
	if (num2>num1)
	{
	cout << "El numero mayor es " << num2 << endl;
	}	
	return 0;
}
