#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>

using namespace std;

struct book
{
	char aut[9];
	char name[9];
	int year;
	char type;
}arr_b[3];

int first();
int second();
void print(int N);
void sort(int N);
int main()
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	
	while(true)
	{
		system("cls");
		cout << "Заполнение списка" << endl
			<< "Ввод с экрана - 1, случайным образом - любая другая цифра"
			<< endl << "-> ";
		int answer;
		cin >> answer;

		if (answer == 1)
		{
			int n = first();

			print(n);
			sort(n);
			cout << endl;
			print(n);

		}
		else
		{
			int k = second();
			print(k);
			sort(k);
			print(k);
		}
		printf("\n\n\n\n\nДля продолжения нажмите любую клавишу...");
		_getch();
	}
	

	//Сенкевич Потоп 1978 Х
	//Ландау Механика 1989 У
	//Дойль Сумчатые 1990 C

	//сортировка массива
	
}
	int first()
	{
		int n;

		for (n = 0; n < 3; n++)
		{
			printf("%d. Введите: автора книги, название, год выпуска, группу -> ",
				n + 1);
			scanf_s("%s", arr_b[n].aut, sizeof(arr_b[n].aut));
			if (!strcmp(arr_b[n].aut, "***")) break;

			scanf_s("%s", arr_b[n].name, sizeof(arr_b[n].aut));
			if (!strcmp(arr_b[n].aut, "***")) break;

			scanf_s("%d", &arr_b[n].year);

			scanf_s("%s", &arr_b[n].type, sizeof(arr_b[n].aut));

		}
		return n;
	}int second()
	{
		int N = 3;
		srand(time(NULL));
		int b = rand() % N;
			arr_b[b] = { "Сенкевич","Потоп",1978, 'Х' };
			int b1 = rand() % N;
			if (b1 == b & b == 1)
				b1 = 0;
			else if (b1 == b & b == 2)
				b1 = 1;
			else if (b1 == b & b == 0)
				b1 = 2;
		
				arr_b[b1] = { "Ландау","Механика",1989, 'У' };
			
			arr_b[3-b-b1] = { "Дойль","Сумчатые",1990, 'С' };
			return N;
	}

	void print(int N)
	{
		printf("-----------------------------------------------\n");
		printf("|Каталог библиотеки                           |\n");
		printf("|---------------------------------------------|\n");
		printf("|Автор книги  |Название  |Год выпуска |Группа |\n");
		printf("|             |          |            |       |\n");
		printf("|-------------|----------|------------|-------|\n");
		//вывод строк фактических данных
		for (int i = 0; i < N; i++)
			printf("| %-11s | %-8s | %-10d | %-5c |\n",
				arr_b[i].aut, arr_b[i].name, arr_b[i].year, arr_b[i].type);

		//вывод примечний
		printf("|---------------------------------------------|\n");
		printf("| Примечание: Х - художественная литература;  |\n");
		printf("| У - учебная литература;                     |\n");
		printf("| С - справочная литература                   |\n");
		printf("-----------------------------------------------\n");
	}
	void sort(int N)
	{
		struct book x;
		int i, j;
		int min;

		for (i = 0; i < N-1; i++)
		{
			min = i;
			for (j = i + 1; j < N; j++)
			{
				if (strcmp(arr_b[min].aut, arr_b[j].aut) > 0) min = j;
			}
			if (min > i)
			{
				x = arr_b[i];
				arr_b[i] = arr_b[min];
				arr_b[min] = x;
			}

		}
	}
	
