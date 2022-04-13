#pragma once
#include "f.h"

void fill_matrix(int** Matrix, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			*(*(Matrix + i) + j) = rand() % 101 - 50;
		}
	}

}
void print_matrix(int** Matrix, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			cout << *(*(Matrix + j) + i) << setw(4);
		}
		cout << endl;
	}
}
void print_array(int* Arr, int Size)
{
	for (int i = 0; i < Size; i++)
		cout << *(Arr + i) << setw(4);
}
int*& fun(int Size, int** Matrix, int* Min_cols, int* Max_rows, int* Sum_gd, int* Product_pd)
{
	for (int i = 0; i < Size; i++)
	{
		*(Min_cols + i) = INT_MAX;
		for (int j = 0; j < Size; j++)
		{
			if (*(*(Matrix + i) + j) < *(Min_cols + i))
				*(Min_cols + i) = *(*(Matrix + i) + j);
		}
	}
	for (int i = 0; i < Size; i++)
	{
		*(Max_rows + i) = INT_MIN;
		for (int j = 0; j < Size; j++)
		{
			if (*(*(Matrix + j) + i) > *(Max_rows + i))
				*(Max_rows + i) = *(*(Matrix + j) + i);
		}
	}
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			if (i == j)
				*Sum_gd += *(*(Matrix + i) + j);
			if (i == Size - j - 1)
				*Product_pd *= *(*(Matrix + i) + j);
		}
	}
	int* result = new int[2];
	*result = *Sum_gd;
	*(result + 1) = *Product_pd;
	return *&result;
}