#define _CRT_SECURE_NO_WARNINGS
#include "fun.h"


void print_menu()
{
	system("cls");
	cout << "МЕНЮ:" << endl;
	cout << "1. Ввод с экрана и запись в файл." << endl;
	cout << "2. Ввод случайным образом и запись в файл." << endl;
	cout << "3. Печать одной записи из файла по номеру." << endl;
	cout << "4. Чтение всех структур последовательно из файла и печать." << endl;
	cout << "5. Очистить файл." << endl;
	cout << "6. Выход из программы." << endl;
	
}
void file_cleaning(char* fname) 
{
	FILE* f;
	fopen_s(&f, fname, "w");
	if (f != NULL)
		fclose(f);
}
void rand_end(FILE* f)
{

	
	book arr;
	fseek(f, 0, SEEK_END);
	int ROWs;
	cout << "Сколько позиций хотите ввести?(max=10) = "; cin >> ROWs;
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
		strcpy_s(arr.aut, aut_[random[i]].c_str());
		strcpy_s(arr.name, name_[random[i]].c_str());
		arr.type = type[rand() % 3];
		arr.year = rand() % 200 + 1800;
		fprintf(f, "\n%-11s	 %-9s  %-10d  %-5c", arr.aut, arr.name, arr.year, arr.type);
	}
	
}
void rand_begin(FILE* f, char* fname)
{
	FILE* temp;
	book arr;
	book t;
	int ROWs;
	cout << "Сколько позиций хотите ввести?(max=10) = "; cin >> ROWs;
	int n, i;
	srand(time(NULL));
	const int C = 10;
	fopen_s(&temp, "Temp.txt", "w+");

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
		strcpy_s(arr.aut, aut_[random[i]].c_str());
		strcpy_s(arr.name, name_[random[i]].c_str());
		arr.type = type[rand() % 3];
		arr.year = rand() % 200 + 1800;
		fprintf(temp, "\n%-11s	 %-9s  %-10d  %-5c", arr.aut, arr.name, arr.year, arr.type);
	}
	fseek(f, 0, SEEK_SET);
	while (!feof(f))
	{
		fscanf(f, "%s   %s   %d   %c", &t.aut, &t.name, &t.year, &t.type);
		fprintf(temp, "\n%-11s	 %-9s  %-10d  %-5c", t.aut, t.name, t.year, t.type);
	}
		fclose(f);
		fclose(temp);
	remove(fname);
	rename("Temp.txt", fname);
}
void screen_input_end(FILE* f)
{
	
	book arr;
	fseek(f, 0, SEEK_END);
	int ROWs;
	cout << "Сколько позиций хотите ввести?(max=10) = "; cin >> ROWs;
	int n, i;
	for (i = 0; i < ROWs; i++)
	{
		cin >> arr.aut;
		if (strcmp(arr.aut, "***") == 0)
			break;
		cin >> arr.name >> arr.year >> arr.type;
		fprintf(f, "\n%-11s	 %-9s  %-10d  %-5c", arr.aut, arr.name, arr.year, arr.type);
	}
	
}
void screen_input_begin(FILE* f, char* fname)
{
	FILE* temp;
	book arr;
	book t;
	fopen_s(&temp, "Temp.txt", "w+");
	int ROWs;
	cout << "Сколько позиций хотите ввести?(max=10) = "; cin >> ROWs;
	int n, i;
	for (i = 0; i < ROWs; i++)
	{
		cin >> arr.aut;
		if (strcmp(arr.aut, "***") == 0)
			break;
		cin >> arr.name >> arr.year >> arr.type;
		fprintf(temp, "\n%-11s	 %-9s  %-10d  %-5c", arr.aut, arr.name, arr.year, arr.type);
	}
	fseek(f, 0, SEEK_SET);
	while (!feof(f))
	{
		fscanf(f, "%s   %s   %d   %c", &t.aut, &t.name, &t.year, &t.type);
		fprintf(temp, "\n%-11s	 %-9s  %-10d  %-5c", t.aut, t.name, t.year, t.type);
	}
	fclose(f);
	fclose(temp);
	remove(fname);
	rename("Temp.txt", fname);
}
void rand(char* fname, short q)
{
	FILE* f;
	fopen_s(&f, fname, "r+t");
	if (!f)
	{
		fopen_s(&f, fname, "w+");
		q = 2;
	}
	if (q == 1)
		rand_begin(f, fname);
	if (q == 2)
		rand_end(f);
	if (f != NULL)
		fclose(f);
}
void screen_input(char* fname, short q)
{
	FILE* f;
	fopen_s(&f, fname, "r+");
	if (!f)
	{
		fopen_s(&f, fname, "w+");
		q = 2;
	}
	if (q == 1)
		screen_input_begin(f, fname);
	if (q == 2)
		screen_input_end(f);
	if (f != NULL)
		fclose(f);
}
void print_book(char* fname)
{
	book mas;
	FILE* f;
	int N;
	fopen_s(&f, fname, "r+t");
	cout << "Какую строку хотите вывести: ";
	cin >> N;

	printf("------------------------------------------------\n");
	printf("|Каталог библиотеки                            |\n");
	printf("|----------------------------------------------|\n");
	printf("|Автор книги  |Название  |Год выпуска |Группа  |\n");
	printf("|             |          |            |        |\n");
	printf("|-------------|----------|------------|--------|\n");

	for (; N - 1 >= 0; ) 
	{

		fscanf(f, "%s  %s  %d  %c", &mas.aut, &mas.name, &mas.year, &mas.type);
		N--;
	}

		printf("| %-11s | %-9s| %-10d | %-5c  |\n",
			mas.aut, mas.name, mas.year, mas.type);

	printf("|----------------------------------------------|\n");
	printf("| Примечание: Х - художественная литература;   |\n");
	printf("| У - учебная литература;                      |\n");
	printf("| С - справочная литература                    |\n");
	printf("------------------------------------------------\n");

	if (f != NULL)
		fclose(f);
}
void print_books(char* fname)
{
	book mas;
	FILE* f;
	fopen_s(&f, fname, "r+t");

	printf("------------------------------------------------\n");
	printf("|Каталог библиотеки                            |\n");
	printf("|----------------------------------------------|\n");
	printf("|Автор книги  |Название  |Год выпуска |Группа  |\n");
	printf("|             |          |            |        |\n");
	printf("|-------------|----------|------------|--------|\n");

	while (!feof(f))
	{
		fscanf(f, "%s  %s  %d  %c", &mas.aut, &mas.name, &mas.year, &mas.type);
		printf("| %-11s | %-9s| %-10d | %-5c  |\n",
			mas.aut, mas.name, mas.year, mas.type);
	}
	printf("|----------------------------------------------|\n");
	printf("| Примечание: Х - художественная литература;   |\n");
	printf("| У - учебная литература;                      |\n");
	printf("| С - справочная литература                    |\n");
	printf("------------------------------------------------\n");

	if (f != NULL)
		fclose(f);

}


