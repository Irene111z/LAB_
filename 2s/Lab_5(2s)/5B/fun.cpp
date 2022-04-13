#include "fun.h"

void fill(int** Arr, int N, int M)
{
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			*(*(Arr + i) + j) = rand() % 101 - 50;
		}
	}
}
void print(int** Arr, int N, int M)
{

	for (int i = 0; i < N; i++)
	{
		cout << setw(4);
		for (int j = 0; j < M; j++)
		{
			cout << *(*(Arr + i) + j) << setw(4);
		}
		cout << endl;
	}

}
int sum_positive(int** Arr, int N, int M)
{
	int sum=0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{

			if (*(*(Arr + i) + j) >= 0)
				sum += *(*(Arr + i) + j);

		}
	}

	return sum;
}
int product_negative(int** Arr, int N, int M)
{
	int product = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{

			if (*(*(Arr + i) + j) < 0)
				product *= *(*(Arr + i) + j);

		}
	}
	return product;
}