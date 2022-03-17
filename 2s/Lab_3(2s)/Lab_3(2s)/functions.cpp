#pragma once
#include"functions.h"

void fill(int* Mas,int Size)
{
	

#if(TYPE==1)

	srand(time(NULL));

	for (int i = 0; i < Size; i++)
	{
		*(Mas + i) = rand() % 101 - 50;
	}

#endif

#if(TYPE==2)

	cout << "Введите елементы массива:" << endl;

	for (int i = 0; i < Size; i++)
	{
		int j = 0;
		cin >> j;
		*(Mas + i) = j;
	}
	system("cls");

#endif
}
void print(int* Mas, int Size)
{
	cout << "Массив:" << endl;

	for (int i = 0; i < Size; i++)
	{
		cout << *(Mas + i)<<setw(4);
	}

	cout << endl;
}
double aver(int* Mas, int Size)
{
	double Av;
	double sum = 0;
	for (int i = 0; i < Size; i++)
	{
		sum += *(Mas + i);
	}

	Av = sum / Size;
	return Av;

}
int size_of_new_mas(int* Mas, int Size, double Av)
{
	int q=0;
	for (int i = 0; i < Size; i++)
	{
		if (*(Mas + i) < Av)
			q++;
	}
	return q;
}
void fill_new_mas(int* Mas, int Size, double Av, int* New_Mas, int Size2)
{
	int j = 0;
		for (int i = 0; i < Size; i++)
		{
			if (*(Mas + i) < Av)
			{
				*(New_Mas + j) = *(Mas + i);
				j++;
			}
		}
}
