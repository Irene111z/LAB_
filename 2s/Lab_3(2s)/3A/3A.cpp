#include "funct.h"

int main()
{
	setlocale(0, "rus");
	srand(time(NULL));

	while (1)
	{
		system("cls");
		int size;

		cout << "Заполнить массив самостоятельно - 1;" << endl << "Случайным образом - 2; ----> ";
		int choice;
		cin >> choice;

		cout << "Количество елементов в массиве = ";
		cin >> size;

		int* mas = new int[size];
		int* p = mas; int sum = 0; int count;
		fill(mas, size, choice);
		print(mas, size);

		int item;
		do
		{
			menu();
			cin >> item;

			switch (item)
			{
			case 1:
			{
				system("cls");
				cout << "1. Через относительный адрес " << endl;
				mas = p;
				sum = 0; count = 0;
				print(mas, size);
				cout << endl;
				for (int i = 0; i < size; i++)
				{
					if (*(mas + i) < 0)
						sum += *(mas + i), count++;
				}

				cout << "Сумма отрицательных эл. = " << sum << endl;
				cout << "Количество отрицательных эл. = " << count << endl;

				system("pause");
				system("cls");
			}break;
			case 2:
			{
				system("cls");
				cout << "2. Через абсолютный адрес " << endl;
				mas = p;
				sum = 0; count = 0;
				print(mas, size);
				cout << endl;

				for (int i = 0; i < size; i++)
				{
					if (*mas < 0)
						sum += *mas, count++;
					mas++;
				}
				cout << "Сумма отрицательных эл. = " << sum << endl;
				cout << "Количество отрицательных эл. = " << count << endl;

				system("pause");
				system("cls");
			}break;
			case 3:
			{
				system("cls");
				cout << "3. Без использования адресации" << endl;
				mas = p;
				sum = 0; count = 0;
				print(mas, size);
				cout << endl;

				for (mas = p; mas < p + size; mas++)
				{
					if (*mas < 0)
						sum += *mas, count++;
				}

				cout << "Сумма отрицательных эл. = " << sum << endl;
				cout << "Количество отрицательных эл. = " << count << endl;

				system("pause");
				system("cls");
			}break;
			case 4:
			{
				system("cls");
				cout << "4. Через массив указателей" << endl;
				mas = p;
				sum = 0; count = 0;
				print(mas, size);
				cout << endl;

				int* ptr_arr[N];

				for (int i = 0; i < size; i++)
				{
					ptr_arr[i] = &mas[i];
				}

				for (int i = 0; i < size; i++)
				{
					if (*ptr_arr[i] < 0)
						sum += (*ptr_arr[i]), count++;
				}

				cout << "Сумма отрицательных эл.: " << sum << endl;
				cout << "Кол-во отрицательных эл.: " << count << endl;

				system("pause");
				system("cls");
			}break;

			case 5:
			{
				system("cls");
				cout << "5. Через указатель на указатель" << endl;
				mas = p;
				sum = 0; count = 0;
				print(mas, size);
				cout << endl;
				int** pp = &mas;

				for (int i = 0; i < size; i++)
				{
					if (**pp < 0)
						sum += **pp, count++;
					mas++;
				}

				cout << "Сумма отрицательных эл. = " << sum << endl;
				cout << "Количество отрицательных эл. = " << count << endl;

				system("pause");
				system("cls");
			}break;
			case 6:
			{
				system("cls");
				cout << "6. Оформить в виде функции с параметрами указателями" << endl;
				mas = p;
				sum = 0; count = 0;;
				print(mas, size);
				cout << endl;
				sum_count(mas, size, &sum, &count);

				cout << "Сумма отрицательных эл. = " << sum << endl;
				cout << "Количество отрицательных эл. = " << count << endl;
				system("pause");
				system("cls");;
			}break;
			if (item != 7)
				system("pause");
			}

		} while (item != 7);

		delete[] mas;
	}

	
}