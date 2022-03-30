#pragma once
#include"functions.h"

void fill(double* Mas, int Size)
{


#if(TYPE==1)

	srand(time(NULL));

	for (int i = 0; i < Size; i++)
	{
		*(Mas + i) = rand() % 101 - 50;
	}

#endif

#if(TYPE==2)

	cout << "¬ведите елементы массива:" << endl;

	for (int i = 0; i < Size; i++)
	{
		int j = 0;
		cin >> j;
		*(Mas + i) = j;
	}
	system("cls");

#endif
}

void fill_new_mas(double* Mas, int Size, double* Mas_, int* Size2)
{
	
	double sum = 0;
	double av = 0;
	for (int i = 0; i < Size; i++)
	{
		sum += *(Mas + i);
	}
	av = sum / Size;
	cout << "—реднее значение = " << av << endl;

	for (int i = 0; i < Size; i++)
	{
		if (*(Mas + i) < av)
			Size2++;
	}

	int j = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(Mas + i) < av)
		{
			*(Mas_ + j) = *(Mas + i);
			j++;
		}
	}
	

}
