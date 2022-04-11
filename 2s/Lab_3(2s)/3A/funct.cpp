#pragma once
#include "funct.h"

void menu()
{
	cout << "--- НАХОЖДЕНИЕ СУММЫ И КОЛ. ОТРИЦАТЕЛЬНЫХ ЭЛ. МАССИВА ---" << endl;
	cout << "1. Через относительный адрес " << endl;
	cout << "2. Через абсолютный адрес " << endl;
	cout << "3. Без использования адресации" << endl;
	cout << "4. Через массив указателей" << endl;
	cout << "5. Через указатель на указатель" << endl;
	cout << "6. Оформить в виде функции с параметрами указателями" << endl;
	cout << "7. Выход" << endl;
	cout << "Ваш выбор --> ";
}
void fill(int* P, int Size, int Choice)
{
	if (Choice == 1)
	{
		cout << "Введите елементы массива:" << endl;

		for (int i = 0; i < Size; i++)
		{
			int j = 0;
			cin >> j;
			*(P + i) = j;
		}
		system("cls");
	}
	else if (Choice == 2)
		for (int i = 0; i < Size; i++)
			*(P + i) = rand() % 21 - 10;

}
void print(int* P, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		cout << *(P + i) << setw(4);
	}

	cout << endl << endl;
}

void sum_count(int* P, int Size, int* Sum, int* Count)
{
	for (int i = 0; i < Size; i++)
	{
		if (*P < 0) {
			*Sum += *P;
			(*Count)++;
		}
		P++;
	}
}
