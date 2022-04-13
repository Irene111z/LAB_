#include "fun.h"

void main()
{
	srand(time(0));
	setlocale(0, "");

	int n, m;
	cout << "Введите количество строк: "; cin >> n;
	cout << "Введите количество столбцов: "; cin >> m;

	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
		*(arr + i) = new int[m];

	fill(arr, n, m);
	print(arr, n, m);

	int (*p)(int**, int, int);

	p = sum_positive;
	cout << "Сумма всех позитивных эл. массива = " << p(arr, n, m);

	p = product_negative;
	cout << endl << "Произведение всех отрицательных эл. массива = " << p(arr, n, m);

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;

	cout << "\n\n\n\n\n\n";

}