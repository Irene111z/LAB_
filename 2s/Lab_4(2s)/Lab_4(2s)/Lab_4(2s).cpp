//Найти среднее значение из чисел целочисленного массива. 
//Переписать в новый массив значения, которые меньше среднего.

#include"functions.h"

void main()
{
	setlocale(0, "");

	cout << "Количество елементов в массиве = ";
	int size;
	cin >> size;
	double* mas = new double[size];

	fill(mas, size);

	//печать
	cout << "Массив:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(mas + i) << setw(4);
	}
	cout << endl;
	
	
	double av = 0;
	int size2 = size_(mas, size, &av);

	cout << "Среднее значение = " << av << endl;

	double* new_mas = new double[size2];

	fill_new_mas(mas, size, new_mas, &av);

	//печать
	cout << "Новый массив:" << endl;
	for (int i = 0; i < size2; i++)
	{
		cout << *(new_mas + i) << setw(4);
	}
	cout << endl;
	
	delete[] mas;
	delete[] new_mas; 
	

}