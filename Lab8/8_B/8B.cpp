﻿/*Вставить в массив в любое место k элементов.Удалить из массива из любого места k элементов.
Проверка на правильность ввода позиции и количества вставляемых / удаляемых элементов.*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int i, k, n, z, ins, choice, seq;
	z = 15;
	int const N = 300;
	int Arr[N];

	cout << "Массив: " << endl;
	for (i = 0; i < z; i++)
	{
		Arr[i] = i + 1;
		cout << Arr[i] << setw(5);
	}
	cout << endl;
	
	while (true)
	{
		cout << "Для того, чтоб вставить элементы нажмите 1 --> " << endl;
		cout << "Для того, чтоб удалить элементы нажмите 0 --> " << endl;
		cin >> choice;

		if (choice == 0)
		{
			cout << "Введите номер элемента(min=1), начиная с которого хотите удалить значения --> ";
			cin >> k;
			cout << "Введите количество элементов, которое хотите удалить --> ";
			cin >> n;

			if (k <= z && k > 0)
			{
				k = k - 1;
				for (i = k; i < n + k; i++)
				{
					Arr[i] = 0; //удаление элемента
				}
				cout << "Новый массив: " << endl;
				for (i = 0; i < z; i++)
				{
					if (Arr[i] != 0)
					{
						cout << Arr[i] << setw(5);
					}
				}
				cout << endl;
			}
			else
				cout << "Вы ввели неправильное значение, попробуйте ещё раз";
		}
		if (choice == 1)
		{
			cout << endl << "Введите число(элемент) для вставки --> ";
			cin >> ins;
			cout << endl << "Введите количество --> ";
			cin >> n;
			cout << endl << "Введите номер позиции(min=1), на которую будем вставлять новые значения -->";
			cin >> k;

			int Arr2[N];
			for (i = 0; i < N; i++)
			{
				Arr2[i] = Arr[i];
			}
			z = z + n;
			k--;
			seq = k + n;
			int i2 = 0;
			for (i = 0; i < N; i++)
			{
				if (i >= k && i < seq)
				{
					Arr[i] = ins;
				}
				else
				{
					Arr[i] = Arr2[i2];
					i2++;
				}
			}
			cout << "Новый массив: " << endl;
			for (int x = 0; x < z; x++)
				cout << setw(5) << Arr[x];
			cout << endl;
		}
	}
}