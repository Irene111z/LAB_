//Лабораторная работа №11
//Рекурсия
//Вариант 6. Вычислить сумму положительных элементов одномерного массива

#include <iostream>
#include <iomanip>

using namespace std;

int sum (int arr[], int n1)
{
	int q;

	if (arr[n1] > 0)
		 q = arr[n1];
	else
		q = 0;
	if (n1 == 0)
		return q;

	return q + sum(arr, n1 - 1);
}

int main()
{
	setlocale(0,"");
	cout << "Введите количество елементов в одномерном массиве: ";
	int n;
	cin >> n;
	n--;

	int Arr[3000]{};
	srand(time(NULL));

	for (int i = 0; i <= n; ++i)
	{
		Arr[i] = rand() % 21 - 10;
		cout << Arr[i] << setw(4);
	}
	cout << endl;
	cout << "Сумма положительных елементов ряда = " << sum(Arr, n);
}
