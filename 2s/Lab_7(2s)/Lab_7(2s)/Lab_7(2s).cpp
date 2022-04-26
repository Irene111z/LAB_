#include "fun.h"


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	
	char fname[] = "book.txt";
	short item, q;
	do
	{
		system("cls");
		print_menu();
		cin >> item;
		switch (item)
		{
		case 1:
		{
			cout << endl;
			cout << "3. Добавить запись в начало файла." << endl;
			cout << "4. Добавить запись в конец файла." << endl; 
			cin >> q;
			if (q == 3 || q == 4)
				screen_input(fname, q);
			else
				break;
		}break;
		case 2:
		{
			cout << endl;
			cout << "3. Добавить запись в начало файла." << endl;
			cout << "4. Добавить запись в конец файла." << endl;
			cin >> q;
			if (q == 3 || q == 4)
				rand(fname, q);
			else
				break;

		}break;
		case 3:
		{

		}break;
		case 4:
		{

		}break;
		case 5:
		{

		}break;
		case 6:
		{

		}break;
		if (item != 7)
			system("pause");
		}


	} while (item != 7);
}