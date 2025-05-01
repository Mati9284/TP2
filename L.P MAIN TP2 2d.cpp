#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	float num1, num2, num3, nota;
	cout << "Este programa indica si estudiastes mucho o te copiastes de la tarea y no hicistes el exámen" << endl;
	cout << "Ingrese primer nota" << endl;
	cin >> num1;
	cout << "Ingrese segunda nota" << endl;
	cin >> num2;
	cout << "Ingrese tercera nota" << endl;
	cin >> num3;
	nota= (num1+num2+num3)/3;
	if (nota==10)
	{
		cout << "Tu nota final es " << nota << ", vas a ir a la bandera (TEA)" << endl;
	}
	else
	if (nota>=7 && nota<10)
	{
		cout << "Tu nota final es " << nota << ", estás  aprobado (TEA)" << endl;
	}
	else
	if (nota>4 && nota<7)
	{
		cout << "Tu nota final es " << nota << ", estás desprobado, por ahora (TEP)" << endl;
	}
	else
	if (nota>=4)
	{
		cout << "Tu nota final es " << nota << ", te llevastes laboratorio de programaciónn (TED)" << endl;
	}
	return 0;
}
