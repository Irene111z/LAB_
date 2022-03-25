//Найти среднее значение из чисел целочисленного массива. 
//Переписать в новый массив значения, которые меньше среднего.

#include"functions.h"

void main()
{
	setlocale(0, "");

	cout << "Количество елементов в массиве = ";
	int size;
	cin >> size;
	double mas[N]; double* p = mas;

	fill(p, size);

	//печать
	cout << "Массив:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << setw(4);
	}
	cout << endl;
	
	

	int size2=0;
	
	double new_mas[N]; double* np = new_mas;

	fill_print_new_mas(p, size, np);

	
	

}