#pragma once
#include"functions.h"

void fill(double* P, int Size)
{


#if(TYPE==1)

	srand(time(NULL));

	for (int i = 0; i < Size; i++)
	{
		*(P + i) = rand() % 101 - 50;
	}

#endif

#if(TYPE==2)

	cout << "Введите елементы массива:" << endl;

	for (int i = 0; i < Size; i++)
	{
		int j = 0;
		cin >> j;
		*(P + i) = j;
	}
	system("cls");

#endif
}

void fill_print_new_mas(double* P, int Size, double* NP)
{
	
	double sum = 0;
	double av = 0;
	int size2 = 0;
	for (int i = 0; i < Size; i++)
	{
		sum += *(P + i);
	}
	av = sum / Size;
	cout << "Среднее значение = " << av << endl;

	for (int i = 0; i < Size; i++)
	{
		if (*(P + i) < av)
			size2++;
	}

	int j = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(P + i) < av)
		{
			*(NP + j) = *(P + i);
			j++;
		}
	}
	//печать
	cout << "Новый массив:" << endl;
	for (int i = 0; i < size2; i++)
	{
		cout << *(NP + i) << setw(4);
	}
	cout << endl;

}
