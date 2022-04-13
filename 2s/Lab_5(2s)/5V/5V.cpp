#include "f.h"

void main()
{
	setlocale(0, "");
	srand(time(0));

	int item;
	
	while (1)
	{
		system("cls");
		int n;
		cout << "N= "; cin >> n;
		int* mas = new int[n];

		do
		{
			fill(mas, n);
			print(mas, n);

			cout << "\t\t" << "--MENU--" << endl;
			cout << "1.buble sort" << endl;
			cout << "2.selection sort" << endl;
			cout << "3.insertion sort" << endl;
			cout << "4.shell sort" << endl;
			cout << "5.exit" << endl;
			cout << "--> ";
			cin >> item;

			switch (item)
			{
				case 1:
				{
					system("cls");
					print(mas, n);
					cout << "1.buble sort" << endl;
					sort(mas, n, buble_sort);
					print(mas, n);
					system("pause");
					system("cls");
				}
				break;
				case 2:
				{
					print(mas, n);
					cout << "2.selection sort" << endl;
					sort(mas, n, selection_sort);
					print(mas, n);
					system("pause");
					system("cls");
				}break;
				case 3:
				{	
					print(mas, n);
					cout << "3.insertion sort" << endl;
					sort(mas, n, insertion_sort);
					print(mas, n);
					system("pause");
					system("cls");
				}break;
				case 4:
				{
					print(mas, n);
					cout << "4.shell sort" << endl;
					sort(mas, n, shell_sort);
					print(mas, n);
					system("pause");
					system("cls");
				}
				if(item!=5)
					system("pause");
			}

		} while (item != 5);
	}
}