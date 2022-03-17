//Найти среднее значение из чисел целочисленного массива. 
//Переписать в новый массив значения, которые меньше среднего.

#include"functions.h"

void main()
{
	setlocale(0, "");

	cout << "Количество елементов в массиве = ";
	int size;
	cin >> size;
	int* mas = new int[size];
	fill(mas, size);

	print(mas, size);

	double av;
	av=aver(mas, size);
	cout << "Среднее значение = " << av << endl;

	int size2;
	size2 = size_of_new_mas(mas, size, av);
	int* new_mas = new int[size2];

	fill_new_mas(mas, size, av, new_mas, size2);

	print(new_mas, size2);

}