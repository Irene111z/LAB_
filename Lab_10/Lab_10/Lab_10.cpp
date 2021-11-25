/* ЛАБОРАТОРНАЯ РАБОТА № 10 */

#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
#define N 4
#define M 3

void k(int res[]);

int main()
{
	setlocale(LC_ALL, "Rus");

	int Arr[N * M];
	srand(time(NULL));
	for (int i = 0; i < N*M; i++)
	{
		Arr[i] = rand() % 10;
	}

	cout << "Начальный одномерный массив:" << endl;
	for (int i = 0; i < M*N; i++)
		cout << Arr[i] << setw(4);
	cout << endl;
	k(Arr);

	cout << endl;
	cout << "Результирующий одномерный массив : ";
	cout << endl;
	for (int i = 0; i < N * M; i++)
		cout << Arr[i] <<setw(4);
	cout << endl;

	return 0;

}
void k(int res[])
{
	int Arr2[N][M];
	cout << endl;
	cout << "Двухмерный массив :" << endl;
	cout << setw(4);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			Arr2[i][j] = res[i * M + j];
			cout << Arr2[i][j] << setw(4);
		}
		cout << endl;
	}
	int d;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M / 2; j++)
		{
			d = Arr2[i][j];
			Arr2[i][j] = Arr2[i][M - 1 - j];
			Arr2[i][M - 1 - j] = d;
		}
	}
	cout << endl;
	cout << "Отзеркаленный двухмерный массив :" << endl;
	cout << setw(4);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << Arr2[i][j] << setw(4);
		}
		cout << endl;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			res[i * M + j] = Arr2[i][j];
		}
	}
}