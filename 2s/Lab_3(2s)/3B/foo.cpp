#pragma once
#include"foo.h"

void arr_A(int* Mas, int Size, int Choice)
{
	if (Choice == 1)
	{
		cout << "¬ведите елементы массива:" << endl;

		for (int i = 0; i < Size; i++)
		{
			int j = 0;
			cin >> j;
			*(Mas + i) = j;
		}
		system("cls");
	}
	else if (Choice == 2)
	{
		srand(time(NULL));

		for (int i = 0; i < Size; i++)
		{
			*(Mas + i) = rand() % 21 - 10;
		}
	}

}
void print(int* Mas, int Size)
{
	
	for (int i = 0; i < Size; i++)
	{
		cout << *(Mas + i) << setw(4);
	}

	cout << endl << endl;
}

int s_b(int* Mas, int Size)
{
	int b = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(Mas + i) < 0)
			b++;
	}
	return b;
}
int s_c(int* Mas, int Size)
{
	int c = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(Mas + i) > 0)
			c++;
	}
	return c;
}
int s_d(int* Mas, int Size)
{
	int d = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(Mas + i) == 0)
			d++;
	}
	return d;
}

void f_b(int* Mas, int Size,int* Mas_b, int Size_b)
{
	int j = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(Mas + i) < 0)
		{
			*(Mas_b + j) = *(Mas + i);
			j++;
		}
	}
}

void f_c(int* Mas, int Size, int* Mas_c, int Size_c)
{
	int j = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(Mas + i) > 0)
		{
			*(Mas_c + j) = *(Mas + i);
			j++;
		}
	}
}
void f_d(int* Mas, int Size, int* Mas_d, int Size_d)
{
	int j = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(Mas + i) == 0)
		{
			*(Mas_d + j) = *(Mas + i);
			j++;
		}
	}
}

void new_arr_A(int* Mas, int Size_, int* Mas_, int* Position)
{
	int i;
	for (i = 0; i < Size_; i++)
	{
		*(Mas + i + *Position) = *(Mas_ + i);
	}
	*Position += i;
}
