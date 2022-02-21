#include "fill_print_sort.h"
book arr_b[10];
int main()
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");

	while (true)
	{
		system("cls");

		cout << "Заполнение списка" << endl;
		int answer;
		cout << "Сколько позиций хотите ввести?(max=10) = ";
		int rows;
		cin >> rows;
		int n;

		n=input(arr_b, rows);
	
		cout << "Хотите распечатать таблицу - нажмите 3";
		cout << endl << "Хотите отсортировать таблицу - нажмите 4 -> ";
		cin >> answer;
		if (answer == 3)
		{
			print(arr_b, n);
			answer = 0;
			cout << endl << "Хотите отсортировать таблицу - нажмите 4 -> ";
			cin >> answer;
		}
		if (answer == 4)
		{
			sort(arr_b, n);
			answer = 0;
			cout << "Хотите распечатать таблицу - нажмите 3 -> ";
			cin >> answer;
			if (answer == 3)
				print(arr_b, n);
			else
				answer = 0;
		}
		cout<< INDENT <<"Для продолжения нажмите любую клавишу...";
		_getch();
		}

}