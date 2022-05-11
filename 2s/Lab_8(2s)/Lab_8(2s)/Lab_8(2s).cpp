#include "fun.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	struct book* Begin = nullptr;

	while(true)
	{
		short a;
		int x; short item;
		cout << "MENU:" << endl;
		cout << " 1.CREATE LIST\n 2.PRINT LIST\n 3.ADD INFORMATION IN THE TAGGED SPACE";
		cout << "\n 4.DELETE INFORMATION FROM THE TAGGED SPACE \n 5.SORT \n 6.FILL FILE FROM LIST ";
		cout << "\n 7.CREATE NEW LIST FROM FILE \n 8.SEARCH \n 9.EXIT \n >>> ";
		cin >> item;
		switch (item)
		{
			case 1:
			
			cout << " 1 - SCREEN INPUT \n 2 - RANDOM \n   >>> "; cin >> a;
			cout << "Number of nodes in the list = "; cin >> x;
			if (a == 1)
			{
				Begin = CreateList1(x);
			}
			if (a == 2)
			{
				Begin = CreateList2(x);
			}
			cout << "List was created\n" << endl;
			system("pause");
			system("cls");
			break;

			case 2:
			PrintList(Begin);
			system("pause");
			system("cls");
			break;

			case 3:
			
				cout << " 1.BEGIN\n 2. TAG\n 3. END\n >>> "; cin >> a;
				if (a == 1)
				{
					AddInfoBegin(&Begin);
				}
				if (a == 2)
				{
					AddInfoTag(Begin);
				}
				if (a == 3)
				{
					AddInfoEnd(Begin);
				}
				cout << "Information was added\n";
				system("pause");
				system("cls");
				break;

			case 4:

				cout << "Information was deleted\n";
				system("pause");
				system("cls");
				break;

			case 5:
				Sort(Begin);
				cout << "Sorted\n";
				system("pause");
				system("cls");
				break;

			case 6: 
				FillFile(Begin);
				cout << "File was filled\n";
				system("pause");
				system("cls");
				break;

			case 7:
				Begin = CreateListFromFile();
				cout << "List was created\n" << endl;
				system("pause");
				system("cls");
				break;

			case 8:
				short a;
				cout << " 1.AUTHOR\n 2.NAME\n 3.YEAR\n 4.TYPE\n >>> "; cin >> a;
				cout << endl;
				if (a == 1)
				{
					SearchAut(Begin);
				}
				if (a == 2)
				{
					SearchName(Begin);
				}
				if (a == 3)
				{
					SearchYear(Begin);
				}
				if (a == 4)
				{
					SearchType(Begin);
				}
				system("pause");
				system("cls");
				break;

			case 9:
				exit(0);
		}
	}
	return 0;
}