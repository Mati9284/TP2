#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	int num1, r;
	cout << "Este programa indica si un número es par o impar" << endl;
	cout << "Ingrese número" << endl;
	cin >> num1;
	if (num1 % 2 == 0)
	{
		cout << num1 << " es par" << endl;
	}
	else
	{
		cout <<  num1 <<  " es impar"  << endl;
	}
	return 0;
}
