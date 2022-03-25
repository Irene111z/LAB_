#include"foo.h"

void main()
{
	setlocale(0, "");
	while (1)
	{ 
		system("cls");

		cout << "Заполнить массив самостоятельно - 1;" << endl << "Случайным образом - 2; ----> ";
		int choice;
		cin >> choice;

		cout << "Количество елементов в массиве = ";
		int size;
		cin >> size;

		int mas[N]; int* p = mas;

		arr_A(p, size, choice);

		cout << "Массив A:" << endl;
		print(p, size);

		int size_b = s_b(p, size);
		int size_c = s_c(p, size);
		int size_d = s_d(p, size);

		int mas_b[N]; int* bp = mas_b;
		int mas_c[N]; int* cp = mas_c;
		int mas_d[N]; int* dp = mas_d;

		if (size_b > 0)
		{
			cout << "Массив B:" << endl;
			f_b(p, size, bp);
			print(bp, size_b);
		}
		else
			cout << " Отрицательные числа в массиве \"А\" не обнаружены..." << endl;

		if (size_c > 0)
		{
			cout << "Массив C:" << endl;
			f_c(p, size, cp);
			print(cp, size_c);
		}
		else
			cout << " Положительные числа в массиве \"А\" не обнаружены..." << endl;

		if (size_d > 0)
		{
			cout << "Массив D:" << endl;
			f_d(p, size, dp);
			print(dp, size_d);
		}
		else
			cout << " Нули в массиве \"А\" не обнаружены..." << endl;

		int position = 0;

		new_arr_A(p, size_d, dp, &position);
		new_arr_A(p, size_b, bp, &position);
		new_arr_A(p, size_c, cp, &position);

		cout << "Массив A:" << endl;
		print(p, size);

		cout << endl << "Для продолжения нажмите любую клавишу...";
		_getch();
	}
	
}