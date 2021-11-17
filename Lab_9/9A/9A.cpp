/*ЛАБОРАТОРНАЯ РАБОТА № 9А
В двумерном массиве (каждый раз работать с исходным массивом):
а) найти максимальный в каждой строке и поменять его местами с первым элементом этой же строки;
б) найти минимальный в каждом столбце и поменять его местами с последним элементом этого же столбца;*/

#include "windows.h"
#include <iostream>
#include<iomanip>
using namespace std;
int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int A1[100][100]; 
	int cols, rows;

	cout << "Введите количество строк матрицы M1 --> ";
	cin >> rows;
	cout << "Введите количество столбцов матрицы M1 --> ";
	cin >> cols;
	cout << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			A1[i][j] = rand() % 100;
		}
	}
	cout << "Массив 1:" << endl;
	cout << setw(4);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << A1[i][j] << setw(4);
		}
		cout << endl;
	}
	int max = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (A1[i][j] > max)
				max = A1[i][j];
		}

	}
}