/*								ЛАБОРАТОРНАЯ РАБОТА № 9Б
Перемножение двух матриц. Размер матриц вводить с экрана. Осуществить проверку на возможность перемножения.*/
#include <iostream>
#include<iomanip>
#include "windows.h"
using namespace std;
int main(void) 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int M1[100][100]; int M2[100][100];
	int rows1, cols1; int rows2, cols2;
	while(true)
	{
		cout << "Введите количество строк матрицы M1 --> ";
		cin >> rows1;
		cout << "Введите количество столбцов матрицы M1 --> ";
		cin >> cols1;

		cout << endl;

		cout << "Введите количество строк матрицы M2 --> ";
		cin >> rows2;
		cout << "Введите количество столбцов матрицы M2 --> ";
		cin >> cols2;

		if (cols1 != rows2)
		{
			cout << endl << "Извините, матрицы заданного размера невозможно перемножить" << endl;
			cout << "Воспользуйтесь правилом: \"количество столбцов М1 = количество строк М2\"";
			cout << endl << endl;
		}
		else
		{	//заполнение и вывод М1
			for ( int i = 0; i < rows1; i++)
			{
				for ( int j = 0; j < cols1; j++)
				{
					M1[i][j] = rand() % 19-9;
				}
			}
			cout << "Матрица М1:" << endl;
			cout << setw(4);
			for ( int i = 0; i < rows1; i++)
			{
				for ( int j = 0; j < cols1; j++)
				{
					cout<< M1[i][j]<<setw(4);
				}
				cout << endl;
			}
			//заполнение и вывод М2
			for ( int i = 0; i < rows2; i++)
			{
				for ( int j = 0; j < cols2; j++)
				{
					M2[i][j] = rand() % 19-9;
				}
			}
			cout << "Матрица М2:" << endl;
			cout << setw(4);
			for ( int i = 0; i < rows2; i++)
			{
				for ( int j = 0; j < cols2; j++)
				{
					cout << M2[i][j] << setw(4);
				}
				cout << endl;
			}

			int RESULT[100][100]{};
			cout << endl;
			cout << "Результат" << endl;;
			for (int i = 0; i < rows1; i++)
			{
				for (int j = 0; j < cols2; j++)
				{
					for (int m = 0; m < cols1; m++)
					{
						RESULT[i][j] += M1[i][m] * M2[m][j];
					}
					cout << setw(4) << RESULT[i][j];

				}
				cout << endl;
			}

		}
	}
	
		

}