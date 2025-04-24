#include <iostream>
using namespace std;
int main ()
{
	float num1;//variables
	cout << "Este programa indica si es +,- o nulo (0)" << endl;//interacción entre el usuario
	cout << "ingrese numero" << endl;//interacción entre el usuario
	cin >> num1;//interacción entre el usuario
	if (num1>0)
	{
		cout << num1 << " es positivo" << endl;
	}
	else
	if (num1<0) 
	{
		cout << num1 << " es negativo" << endl;
	}
	else
	{
		cout << num1 << " es neutro" << endl;
	}
	return 0;
}
