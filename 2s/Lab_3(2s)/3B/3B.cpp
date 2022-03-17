#include"foo.h"

void main()
{
	setlocale(0, "");

	cout << "Заполнить массив самостоятельно - 1;"<<endl<<"Случайным образом - 2; ----> "; 
	int choice;
	cin >> choice;

	cout << "Количество елементов в массиве = ";
	int size; 
	cin >> size;
	int* mas = new int[size];

	arr_A(mas, size, choice);

	cout << "Массив A:" << endl;
	print(mas, size);

	int size_b=s_b(mas, size);
	int size_c=s_c(mas, size);
	int size_d=s_d(mas, size);

	int* mas_b = new int[size_b];
	int* mas_c = new int[size_c];
	int* mas_d = new int[size_d];

	if (size_b > 0)
	{
		cout << "Массив B:" << endl;
		f_b(mas, size, mas_b, size_b);
		print(mas_b, size_b);
	}
	else
		cout << " Отрицательные числа в массиве \"А\" не обнаружены..." << endl;

	if (size_c > 0)
	{
		cout << "Массив C:" << endl;
		f_c(mas, size, mas_c, size_c);
		print(mas_c, size_c);
	}
	else
		cout << " Положительные числа в массиве \"А\" не обнаружены..." << endl;
	
	if (size_d > 0)
	{
		cout << "Массив D:" << endl;
		f_d(mas, size, mas_d, size_d);
		print(mas_d, size_d);
	}
	else
		cout << " Нули в массиве \"А\" не обнаружены..." << endl;

	int position = 0;
	
	new_arr_A(mas, size_d, mas_d, &position);
	new_arr_A(mas, size_b, mas_b, &position);
	new_arr_A(mas, size_c, mas_c, &position);

	cout << "Массив A:" << endl;
	print(mas, size);
}