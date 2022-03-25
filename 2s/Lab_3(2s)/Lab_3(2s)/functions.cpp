#pragma once
#include"functions.h"

void fill(int Size, int* P)
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
void print(int* P, int Size)
{
	cout << "Массив:" << endl;

	for (int i = 0; i < Size; i++)
	{
		cout << *(P + i)<<setw(4);
	}

	cout << endl;
}
double aver(int* P, int Size)
{
	double Av;
	double sum = 0;
	for (int i = 0; i < Size; i++)
	{
		sum += *(P + i);
	}

	Av = sum / Size;
	return Av;

}
int size_of_new_mas(int* P, int Size, double Av)
{
	int q=0;
	for (int i = 0; i < Size; i++)
	{
		if (*(P + i) < Av)
			q++;
	}
	return q;
}
void fill_new_mas(int* P, int Size, double Av, int* NP, int Size2)
{
	int j = 0;
		for (int i = 0; i < Size; i++)
		{
			if (*(P + i) < Av)
			{
				*(NP + j) = *(P + i);
				j++;
			}
		}
}
