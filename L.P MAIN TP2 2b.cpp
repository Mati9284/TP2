#include <iostream>
using namespace std;
int main ()
{
	float num1, num2, r1, r2, r3, r4;//variables
	cout << "Este programa indica el numero mayor su suma y diferencia" << endl;//interacción entre el usuario
	cout << "ingrese primer numero" << endl;//interacción entre el usuario
	cin >> num1;//interacción entre el usuario
	cout << "ingrese segundo numero" << endl;//interacción entre el usuario
	cin >> num2;//interacción entre el usuario
	if (num1>num2)//verdadero o falso
	{
		cout << num1 << " es mayor a " << num2 << endl;//interacción entre el usuario
		r1= num1 + num2;//variables
		r2= num1 - num2;//variables
		cout << "La suma da " << r1 << " y la diferencia es " << r2 << endl;//interacción entre el usuario
	}
	else//falso
	{
		cout << num2 << " es mayor a " << num1 << endl;//interacción entre el usuario
		r3= num1 * num2;//variables
		r4= num1 / num2;//variables
		cout << "El producto da " << r3 << " y la division es " << r4 << endl;//interacción entre el usuario
	}
}
