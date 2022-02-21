#pragma once

#include "fill_print_sort.h"

void print(book mas[], int N)
{
	printf("------------------------------------------------\n");
	printf("|Каталог библиотеки                            |\n");
	printf("|----------------------------------------------|\n");
	printf("|Автор книги  |Название   |Год выпуска |Группа |\n");
	printf("|             |           |            |       |\n");
	printf("|-------------|-----------|------------|-------|\n");

	for (int i = 0; i < N; i++)
		printf("| %-11s | %-9s | %-10d | %-5c |\n",
			mas[i].aut, mas[i].name, mas[i].year, mas[i].type);

	printf("|----------------------------------------------|\n");
	printf("| Примечание: Х - художественная литература;   |\n");
	printf("| У - учебная литература;                      |\n");
	printf("| С - справочная литература                    |\n");
	printf("------------------------------------------------\n");

#ifdef DEBUG

	cout << INDENT << "DEBUG определён";
	cout << endl << __FILE__;
	cout << endl << __DATE__;
	cout << endl << __FUNCTION__;
	cout << endl << __TIME__;
	cout << INDENT;

#else

	cout << INDENT << "DEBUG не определён" << endl;

#endif
}
void sort(book mas[], int N)
{
	struct book x;
	int i, j;
	int min;

	for (i = 0; i < N - 1; i++)
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

#ifdef DEBUG

	cout << INDENT << "DEBUG определён";
	cout << endl << __FILE__;
	cout << endl << __DATE__;
	cout << endl << __FUNCTION__;
	cout << endl << __TIME__;
	cout << INDENT;

#else

	cout << INDENT << "DEBUG не определён" << endl;

#endif
}

int input(book mas[], int ROWs)
{
#ifdef PRINT_TYPE

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


#else


	int n, i;
	srand(time(NULL));
	const int C = 10;

	string aut_[C] = { "Сенкевич","Дойль","Пушкин","Ландау","Гоголь","Чехов","Толстой","Саган","Брэдбери","Маркс" };
	string name_[C]{ "Потоп","Сумчатые","Недоросль","Механика","Шинель","Тоска","Детство","Космос","Убийство","Капитал" };
	char type[3] = { 'Х','У','С' };

	int random[C];
	for (i = 0; i < C; i++)
	{
		random[i] = i;
	}
	for (i = 0; i < C; i++)
		swap(random[i], random[rand() % C]);

	for (n = 0, i = 0; n < ROWs; n++, i++)
	{
		strcpy_s(mas[n].aut, aut_[random[i]].c_str());
		strcpy_s(mas[n].name, name_[random[i]].c_str());
		mas[n].type = type[rand() % 3];
		mas[n].year = rand() % 200 + 1800;
	}
	return n;


#endif


#ifdef DEBUG

	cout << INDENT << "DEBUG определён";
	cout << endl << __FILE__;
	cout << endl << __DATE__;
	cout << endl << __FUNCTION__;
	cout << endl << __TIME__;
	cout << INDENT;

#else

	cout << INDENT << "DEBUG не определён" << endl;

#endif
}


