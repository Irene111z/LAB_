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

int first(book mas[]);
int second(book mas[]);
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
			<< "Ввод с экрана - 1, случайным образом - любая другая цифра"
			<< endl << "-> ";
		int answer;
		cin >> answer;

		if (answer == 1)
		{
			int n = first(arr_b);

			print(arr_b,n);
			sort(arr_b,n);
			cout << endl;
			print(arr_b,n);

		}
		else
		{
			int k = second(arr_b);
			print(arr_b,k);
			sort(arr_b, k);
			print(arr_b, k);
		}
		printf("\n\n\n\n\nДля продолжения нажмите любую клавишу...");
		_getch();
	}
	

	//Сенкевич Потоп 1978 Х
	//Ландау Механика 1989 У
	//Дойль Сумчатые 1990 C
	
}
	int first(book mas[])
	{
		int n;

		for (n = 0; n < 3; n++)
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
	int second(book mas[])
	{
		int N = 3;
		srand(time(NULL));
		int b = rand() % N;
			mas[b] = { "Сенкевич","Потоп",1978, 'Х' };
			int b1 = rand() % N;
			if (b1 == b & b == 1)
				b1 = 0;
			else if (b1 == b & b == 2)
				b1 = 1;
			else if (b1 == b & b == 0)
				b1 = 2;
		
				mas[b1] = { "Ландау","Механика",1989, 'У' };
			
			mas[3-b-b1] = { "Дойль","Сумчатые",1990, 'С' };
			return N;
	}

	void print(book mas[], int N)
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
				mas[i].aut, mas[i].name, mas[i].year, mas[i].type);

		//вывод примечний
		printf("|---------------------------------------------|\n");
		printf("| Примечание: Х - художественная литература;  |\n");
		printf("| У - учебная литература;                     |\n");
		printf("| С - справочная литература                   |\n");
		printf("-----------------------------------------------\n");
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
	
