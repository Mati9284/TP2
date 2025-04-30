#include <iostream>
using namespace std;
int main ()
{
	float num1, num2, num3;//variables
	cout << "Este programa indica el numero mayor de 3 numeros ingresados" << endl;//interacción entre el usuario
	cout << "ingrese primer numero" << endl;//interacción entre el usuario
	cin >> num1;//interacción entre el usuario
	cout << "ingrese segundo numero" << endl;//interacción entre el usuario
	cin >> num2;//interacción entre el usuario
	cout << "ingrese tercer numero" << endl;//interacción entre el usuario
	cin >> num3;//interacción entre el usuario
	if (num1>num2 && num1>num3)//verdadero o falso
	{
		cout << num1 << " es mayor" << endl;//interacción entre el usuario
	}
	else//falso
	if (num2>num1 && num2>num3)//verdadero o falso
	{
		cout << num2 << " es mayor" << endl;//interacción entre el usuario
	}
	else//falso
	if (num3>num1 && num3>num2)//verdadero o falso
	{
		cout << num3 << " es mayor" << endl;//interacción entre el usuario
	}
	if (num1<num2 && num1<num3)//verdadero o falso
	{
		cout << num1 << " es el menor" << endl;//interacción entre el usuario
	}
	else//falso
	if (num2<num1 && num2<num3)//verdadero o falso
	{
		cout << num2 << " es el menor" << endl;//interacción entre el usuario
	}
	else//falso
	if (num3<num1 && num3<num2)//verdadero o falso
	{
		cout << num3 << " es el menor" << endl;//interacción entre el usuario
	}
	else
	if (num1==num2 && num1==num3)//verdadero o falso
	{
		cout << "son iguales" << endl;//interacción entre el usuario
	}
	return 0;
}

