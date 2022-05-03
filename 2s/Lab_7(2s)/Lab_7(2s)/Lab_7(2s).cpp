#define _CRT_SECURE_NO_WARNINGS
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
			cout << "1. Добавить запись в начало файла." << endl;
			cout << "2. Добавить запись в конец файла." << endl; 
			cin >> q;
			if (q == 1 || q == 2)
				screen_input(fname, q);
			else
			{
				system("cls");
				break;
			}
		}break;
		case 2:
		{
			cout << endl;
			cout << "1. Добавить запись в начало файла." << endl;
			cout << "2. Добавить запись в конец файла." << endl;
			cin >> q;
			if (q == 1 || q == 2)
				rand(fname, q);
			else
			{
				system("cls");
				break;
			}
				

		}break;
		case 3:
		{
			print_book(fname);
			system("pause");
			system("cls");
		}break;
		case 4:
		{
			print_books(fname);
			system("pause");
			system("cls");
		}break;
		case 5:
		{
			file_cleaning(fname);
		}break;
		case 6:
		{

		}break;
		if (item != 7)
			system("pause");
		}


	} while (item != 7);
}