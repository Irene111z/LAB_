#include "funct.h"


void main()
{
	setlocale(0, "");

	while (1)
	{
		int mas[N];
		cout << "Заполнить массив самостоятельно - 1;" << endl << "Случайным образом - 2; ----> ";
		int choice;
		cin >> choice;

		cout << "Количество елементов в массиве = ";
		int size;
		cin >> size;

		int* p = mas; int sum; int count;
		fill(p, size, choice);
		print(p, size);
		 
		int item;
		do
		{
			menu();
			cin >> item;

			switch(item)
			{
				case 1:
				{
					cout << "1. Через относительный адрес " << endl;

					sum, count = 0;
					for (int i = 0; i < size; i++)
					{
						if (*(p + i) < 0)
							sum += *(p + i), count++;
					}

					cout << "Сумма отрицательных эл. = " << sum << endl;
					cout << "Количество отрицательных эл. = " << count << endl;

					system("pause");
				}break;
				case 2:
				{
					cout << "2. Через абсолютный адрес " << endl;

				}break;
				case 3:
				{
					cout << "3. Без использования адресации" << endl;
				}break;
				case 4:
				{
					cout << "4. Через массив указателей" << endl;
				}break;
				
				case 5:
				{
					int** pp = &p;
					cout << "5. Через указатель на указатель" << endl;
					for (int i = 0; i < size; i++)
					{
						if (**pp < 0)
							sum += **pp, count++;
						
					}
				}break;
				case 6:
				{
					cout << "6. Оформить в виде функции с параметрами указателями" << endl;

					sum, count = 0;

					sum_count(p, size, &sum, &count);

					cout << "Сумма отрицательных эл. = " << sum << endl;
					cout << "Количество отрицательных эл. = " << count << endl;

					system("pause");
				}break;
				if (item != 7)
					system("pause");
			}
	
		} while (item != 7);
	}
	




}