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

int size_(double* Mas, int Size, double* Av)
{
	double sum = 0;
	int Size2 = 0;
	for (int i = 0; i < Size; i++)
	{
		sum += *(Mas + i);
	}
	*Av = sum / Size;
	/*cout << "—реднее значение = " << *Av << endl;*/

	for (int i = 0; i < Size; i++)
	{
		if (*(Mas + i) < *Av)
			Size2++;
	}
	return Size2;
}
void fill_new_mas(double* Mas, int Size, double* Mas_, double* Av)
{

	int j = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(Mas + i) < *Av)
		{
			*(Mas_ + j) = *(Mas + i);
			j++;
		}
	}
	

}
