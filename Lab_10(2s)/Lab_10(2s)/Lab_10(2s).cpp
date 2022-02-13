#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>

using namespace std;

struct book
{
	char aut[9];
	char name[10];
	int year;
	char type;
}arr_b[3];

int first(book mas[],int ROWs);
int second(book mas[], int ROWs);
void print(book mas[],int N);
void sort(book mas[],int N);
int main()
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	
	while(true)
	{
		system("cls");
		cout << "Заполнение списка" << endl
			<< "Ввод с экрана - 1, случайным образом - 2"
			<< endl << "-> ";
		int answer;
		cin >> answer;

		if (answer == 1)
		{
			answer == 0;
			cout << "Сколько позиций хотите ввести?(max=10) = ";
			int rows;
			cin >> rows;
			int n = first(arr_b, rows);
			cout << "Хотите распечатать таблицу - нажмите 3";
			cout << endl << "Хотите отсортировать таблицу - нажмите 4 -> ";
			cin >> answer;
			if(answer==3)
			{
				print(arr_b, n);
				answer = 0;
				cout << endl << "Хотите отсортировать таблицу - нажмите 4 -> ";
			/*	cout << "Начать заново - нажмите любую клавишу...";*/
				cin >> answer;
				if (answer == 4)
					sort(arr_b, n);
				else
					answer = 0;
			}
			if(answer==4)
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
			
		
		}
		if(answer == 2)
		{
			answer = 0;
			cout << "Сколько позиций хотите ввести?(max=10) = ";
			int rows1;
			cin >> rows1;
			int k = second(arr_b,rows1);
						
			cout << "Хотите распечатать таблицу - нажмите 3";
			cout << endl << "Хотите отсортировать таблицу - нажмите 4 -> ";
			cin >> answer;
			if (answer == 3)
			{
				print(arr_b, k);
				answer = 0;
				cout << endl << "Хотите отсортировать таблицу - нажмите 4 -> ";
				/*	cout << "Начать заново - нажмите любую клавишу...";*/
				cin >> answer;
				if (answer == 4)
					sort(arr_b, k);
				else
					answer = 0;
			}
			if (answer == 4)
			{
				sort(arr_b, k);
				answer = 0;
				cout << "Хотите распечатать таблицу - нажмите 3 -> ";
				cin >> answer;
				if (answer == 3)
					print(arr_b, k);
				else
					answer = 0;
			}

		}
		printf("\n\n\n\n\nДля продолжения нажмите любую клавишу...");
		_getch();
	}
	

	//Сенкевич Потоп 1978 Х
	//Ландау Механика 1989 У
	//Дойль Сумчатые 1990 C
	
}
	int first(book mas[], int ROWs)//ввод с экрана
	{
		int n;

		for (n = 0; n < ROWs; n++)
		{
			printf("%d. Введите: автора книги, название, год выпуска, группу -> ",
				n + 1);
			scanf_s("%s", mas[n].aut, sizeof(mas[n].aut));
			if (!strcmp(mas[n].aut, "***")) break;

			scanf_s("%s", mas[n].name, sizeof(mas[n].aut));
			if (!strcmp(mas[n].aut, "***")) break;

			scanf_s("%d", &mas[n].year);

			scanf_s("%s", &mas[n].type, sizeof(mas[n].aut));

		}
		return n;
	}
	int second(book mas[], int ROWs)//случайное заполнение
	{
		int n,i;
		srand(time(NULL));
		const int C = 10;

		string aut_[C] = { "Сенкевич","Дойль","Пушкин","Ландау","Гоголь","Чехов","Толстой","Саган","Брэдбери","Маркс"};
		string name_[C]{"Потоп","Сумчатые","Недоросль","Механика","Шинель","Тоска","Детство","Космос","Убийство","Капитал"};
		char type[3] = { 'Х','У','С' };

		int random[C];
		for( i=0; i<C; i++)
		{
			random[i] = i;
		}
		for ( i=0; i<C; i++)
			swap(random[i], random[rand() % C]);

		for (n = 0, i=0; n < ROWs; n++, i++)
		{
			strcpy_s(mas[n].aut, aut_[random[i]].c_str());
			strcpy_s(mas[n].name, name_[random[i]].c_str());
			mas[n].type = type[rand() % 3];
			mas[n].year = rand()% 200 + 1800;
		}
		
		return n;
	}

	void print(book mas[], int N)
	{
		printf("------------------------------------------------\n");
		printf("|Каталог библиотеки                            |\n");
		printf("|----------------------------------------------|\n");
		printf("|Автор книги  |Название  |Год выпуска |Группа  |\n");
		printf("|             |          |            |        |\n");
		printf("|-------------|----------|------------|--------|\n");
		//вывод строк фактических данных
		for (int i = 0; i < N; i++)
			printf("| %-11s | %-9s | %-10d | %-5c |\n",
				mas[i].aut, mas[i].name, mas[i].year, mas[i].type);

		//вывод примечний
		printf("|----------------------------------------------|\n");
		printf("| Примечание: Х - художественная литература;   |\n");
		printf("| У - учебная литература;                      |\n");
		printf("| С - справочная литература                    |\n");
		printf("------------------------------------------------\n");
	}
	void sort(book mas[], int N)
	{
		struct book x;
		int i, j;
		int min;

		for (i = 0; i < N-1; i++)
		{
			min = i;
			for (j = i + 1; j < N; j++)
			{
				if (strcmp(mas[min].aut, mas[j].aut) > 0) min = j;
			}
			if (min > i)
			{
				x = mas[i];
				mas[i] = mas[min];
				mas[min] = x;
			}

		}
	}
	
