/*ЛАБОРАТОРНАЯ РАБОТА № 10Б
Для двумерного массива сделать:
1. Функции заполнения и печати двумерного массива
2. Функцию, которая принимает двумерный массив,
и возвращает количество положительных элементов в одной любой указанной строке
В функции main применить функцию 2 к каждой строке двумерного массива*/

#include<iostream>
#include<windows.h>
#include<iomanip>

using namespace std;

void fill(int arr[100][100], int N, int M);
void print(int arr[100][100], int N, int M);
int search(int arr[100][100], int N, int M, int row);


int main()
{
	setlocale(LC_ALL, "Rus");

	int Arr[100][100];
	cout << "Введите количество строк массива : ";
	int n;
	cin >> n;

	cout << "Введите количество столбцов массива : ";
	int m;
	cin >> m;

	cout << endl;

	fill(Arr, n, m);

	print(Arr, n, m);

	int Row = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Количество положительных элементов " << Row << " строки: ";
		cout<<search(Arr, n, m, Row);
		cout << endl;
		Row++;
	}

}
void fill(int arr[100][100], int N, int M)
{
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			arr[i][j] = rand() % 200 - 100;
		}
	}
}

void print(int arr[100][100], int N, int M)
{

	cout << "Массив:" << endl;
	cout << setw(4);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << arr[i][j] << setw(4);
		}
		cout << endl;
	}

}
int search(int arr[100][100], int N, int M, int row)
{
	int k = 0;
	for (int i = row; i < row + 1; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (arr[i][j] > 0)
				k++;
				
		}
	}
	return k;
}
