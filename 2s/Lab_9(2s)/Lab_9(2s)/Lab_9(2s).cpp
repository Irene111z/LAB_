#include "fun.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	book* Begin = nullptr;
	book* End = nullptr;

	while (true)
	{
		short a;
		int x; short item;
		cout << "MENU:" << endl;
		cout << " 1.CREATE LIST\n 2.PRINT LIST FROM BEGIN\n 3.PRINT LIST FROM END\n 4.ADD INFORMATION IN THE TAGGED SPACE";
		cout << "\n 5.DELETE INFORMATION FROM THE TAGGED SPACE \n 6.SORT \n 7.FILL FILE FROM LIST ";
		cout << "\n 8.CREATE NEW LIST FROM FILE \n 9.SEARCH \n 10.EXIT \n >>> ";
		cin >> item;
		switch (item)
		{
		case 1:

			cout << " 1 - SCREEN INPUT \n 2 - RANDOM \n   >>> "; cin >> a;
			
			if (a == 1)
			{
				 CreateList1;
			}
			if (a == 2)
			{
				cout << "Number of nodes in the list = "; cin >> x;
				CreateList2(x);
			}
			cout << "List was created\n" << endl;
			system("pause");
			system("cls");
			break;

		case 2:
			PrintList1(Begin);
			system("pause");
			system("cls");
			break;
		case 3:
			PrintList2(End);
			system("pause");
			system("cls");
			break;
		case 4:

			cout << " 1.BEGIN\n 2. TAG\n 3. END\n >>> "; cin >> a;
			if (a == 1)
			{
				AddInfoBegin();
			}
			if (a == 2)
			{
				AddInfoTag();
			}
			if (a == 3)
			{
				AddInfoEnd();
			}
			cout << "Information was added\n";
			system("pause");
			system("cls");
			break;

		case 5:
			cout << " 1.BEGIN\n 2. TAG\n 3. END\n >>> "; cin >> a;
			if (a == 1)
			{
				DeleteInfoBegin();
			}
			if (a == 2)
			{
				DeleteInfoTag();
			}
			if (a == 3)
			{
				DeleteInfoEnd();
			}
			cout << "Information was deleted\n";
			system("pause");
			system("cls");
			break;

		case 6:
			Sort();
			cout << "Sorted\n";
			system("pause");
			system("cls");
			break;

		case 7:
			FillFile();
			cout << "File was filled\n";
			system("pause");
			system("cls");
			break;

		case 8:
			CreateListFromFile();
			cout << "List was created\n" << endl;
			system("pause");
			system("cls");
			break;

		case 9:
			short a; short b;
			cout << " 1.AUTHOR\n 2.NAME\n 3.YEAR\n 4.TYPE\n >>> "; cin >> a;
			cout << endl;
			if (a == 1)
			{
				cout << " 1.FROM BEGIN\n 2.FROM END\n >>> "; cin >> b;
				if (b == 1)
				{
					SearchAut(Begin);
				}
				if (b == 2)
				{
					SearchAut(End);
				}
			}
			if (a == 2)
			{
				cout << " 1.FROM BEGIN\n 2.FROM END\n >>> "; cin >> b;
				if (b == 1)
				{
					SearchName(Begin);
				}
				if (b == 2)
				{
					SearchName(End);
				}
			}
			if (a == 3)
			{
				cout << " 1.FROM BEGIN\n 2.FROM END\n >>> "; cin >> b;
				if (b == 1)
				{
					SearchYear(Begin);
				}
				if (b == 2)
				{
					SearchYear(End);
				}
			}
			if (a == 4)
			{
				cout << " 1.FROM BEGIN\n 2.FROM END\n >>> "; cin >> b;
				if (b == 1)
				{
					SearchType(Begin);
				}
				if (b == 2)
				{
					SearchType(End);
				}
			}
			system("pause");
			system("cls");
			break;

		case 10:
			exit(0);
		}
	}
	return 0;
}
