#pragma once
#include"foo.h"

void arr_A(int* P, int Size, int Choice)
{
	if (Choice == 1)
	{
		cout << "¬ведите елементы массива:" << endl;

		for (int i = 0; i < Size; i++)
		{
			int j = 0;
			cin >> j;
			*(P + i) = j;
		}
		system("cls");
	}
	else if (Choice == 2)
	{
		srand(time(NULL));

		for (int i = 0; i < Size; i++)
		{
			*(P + i) = rand() % 21 - 10;
		}
	}

}
void print(int* P, int Size)
{
	
	for (int i = 0; i < Size; i++)
	{
		cout << *(P + i) << setw(4);
	}

	cout << endl << endl;
}

int s_b(int* P, int Size)
{
	int b = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(P + i) < 0)
			b++;
	}
	return b;
}
int s_c(int* P, int Size)
{
	int c = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(P + i) > 0)
			c++;
	}
	return c;
}
int s_d(int* P, int Size)
{
	int d = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(P + i) == 0)
			d++;
	}
	return d;
}

void f_b(int* P, int Size,int* BP)
{
	int j = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(P + i) < 0)
		{
			*(BP + j) = *(P + i);
			j++;
		}
	}
}
void f_c(int* P, int Size, int* CP)
{
	int j = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(P + i) > 0)
		{
			*(CP + j) = *(P + i);
			j++;
		}
	}
}
void f_d(int* P, int Size, int* DP)
{
	int j = 0;
	for (int i = 0; i < Size; i++)
	{
		if (*(P + i) == 0)
		{
			*(DP + j) = *(P + i);
			j++;
		}
	}
}

void new_arr_A(int* P, int Size_, int* P_, int* Position)
{
	int i;
	for (i = 0; i < Size_; i++)
	{
		*(P + i + *Position) = *(P_ + i);
	}
	*Position += i;
}
