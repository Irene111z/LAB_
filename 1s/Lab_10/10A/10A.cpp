/*				ЛАБОРАТОРНАЯ РАБОТА № 10А
Функция сравнивает два числа и возвращает знак сравнения*/

#include<iostream>
#include<windows.h>
using namespace std;

char k(double a, double b)
{
	char comparison_sign;

	if (a > b)
		comparison_sign = '>';
	else if (a < b)
		comparison_sign = '<';
	else
		comparison_sign = '=';

	return comparison_sign;

}

int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b;
	while (true)
	{
		cout << " Введите число a = ";
		cin >> a;
		cout << " Введите число b = ";
		cin >> b;
		cout <<"\t" << "a " << k(a, b) << " b";
		cout << endl<<endl;
	}
	
}
