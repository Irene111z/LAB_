/*Вставить в массив в любое место k элементов.Удалить из массива из любого места k элементов.
Проверка на правильность ввода позиции и количества вставляемых / удаляемых элементов.*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int i, k, n, z, ins, choice, seq;
	int const N = 300;
	int Arr[N];
	cout << "Введите количество элементов для массива --> ";
	cin >> z;

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
		int n1, k1, i;
		if (choice == 0)
		{

			cout << "Введите номер элемента(min=1), начиная с которого хотите удалить значения --> ";
			cin >> k1;
			cout << "Введите количество элементов, которое хотите удалить --> ";
			cin >> n1;

			if (k1 >= z || k1 <= 0)
			{
				cout << "Невозможно удалить с этой позиции, поробуйте ввести другое значение... " << endl << endl;
			}
			else
			{
				if (n1 > z || n1 == 0)
				{
					cout << "Невозможно удалить даное количество элементов, поробуйте ввести другое значение... " << endl << endl;
				}
				else
				{
					k1 = k1 - 1;
					for (i = k1; i < k1 + n1; i++)
					{
						Arr[i] = 0;
					}

					for (i = 0; i < z; i++)
					{
						if (Arr[i] != 0)
						{
							cout << Arr[i] << setw(5);
						}
					}
					cout << endl;
				}
			}
		}

		if (choice == 1)
		{

			cout << endl << "Введите число(элемент) для вставки --> ";
			cin >> ins;
			cout << endl << "Введите количество --> ";
			cin >> n;
			cout << endl << "Введите номер позиции(min=1), на которую будем вставлять новые значения -->";
			cin >> k;

			if (k > z || k <= 0)
				cout << "С этой позиции невозможно вставить элементы, попробуйте ввести другое значение ... " << endl << endl;

			else
			{
				int Arr2[300];

				for (int i = 0; i < 300; i++)
				{
					Arr2[i] = Arr[i];
				}
				z += n;

				k--;
				int seq = k + n;
				int i1 = 0;
				for (int i = 0; i < 300; i++)
				{
					if (i >= k && i < seq)
					{
						Arr[i] = ins;
					}
					else
					{
						Arr[i] = Arr2[i1];
						i1++;
					}
				}

				cout << "Новый массив: " << endl;
				for (int x = 0; x < z; x++)
					cout << Arr[x] << setw(5);

				cout << endl;
			}

		}
	}
}