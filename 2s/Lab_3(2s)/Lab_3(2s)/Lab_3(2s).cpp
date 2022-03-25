//Найти среднее значение из чисел целочисленного массива. 
//Переписать в новый массив значения, которые меньше среднего.

#include"functions.h"
#define N 100
void main()
{ 
	setlocale(0, "");
	while (1)
	{
		system("cls");

		int mas[N]; int* p; p = mas;
		cout << "Количество елементов в массиве (до 100) = ";
		int size;
		cin >> size;

		fill(size, p);

		print(p, size);

		double av;
		av = aver(p, size);
		cout << "Среднее значение = " << av << endl;

		int size2;
		int new_mas[N]; int* np; np = new_mas;
		size2 = size_of_new_mas(p, size, av);

		fill_new_mas(p, size, av, np, size2);

		print(np, size2);

		cout << endl<<endl << "Для продолжения нажмите любую клавишу...";
		_getch();

	}
	
}