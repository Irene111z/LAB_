#define _CRT_SECURE_NO_WARNINGS
#include "fun.h"

book* CreateList1(int x)//screen input
{

	 book* Begin ,* Previos,* Current;
	 Current = Begin = Previos = (book*)malloc(sizeof(book));

	if (x == 1)
	{
		cout << "Enter author, name, year and type of book >" << endl;
		cin >> Current->aut >> Current->name >> Current->year >> Current->type;
	}
	if (x > 1)
	{
		int n = 0;

		cout << "Enter author, name, year and type of book >" << endl;
		cin >> Current->aut >> Current->name >> Current->year >> Current->type;
		--x;
		while (n < x)
		{
			
			Current = (book*)malloc(sizeof(book));
			if (Begin == nullptr)
				Begin = Current;
			else
				Previos->Next = Current;
			Previos = Current;
			cin >> Current->aut >> Current->name >> Current->year >> Current->type;
			n++;
		}
	}
	Previos->Next = nullptr;
	return Begin;
}
book* CreateList2(int x) 
{
	book* Begin, * Previos, * Current;
	Current = Begin = Previos = (book*)malloc(sizeof(book));
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
	if (x == 1)
	{
		int i = rand() % 10;
		strcpy_s(Current->aut, aut_[random[i]].c_str());
		strcpy_s(Current->name, name_[random[i]].c_str());
		Current->type = type[rand() % 3];
		Current->year = rand() % 200 + 1800;
	}
	if (x > 1)
	{
		int k = 0;
		int i = 0;
		strcpy_s(Current->aut, aut_[random[i]].c_str());
		strcpy_s(Current->name, name_[random[i]].c_str());
		Current->type = type[rand() % 3];
		Current->year = rand() % 200 + 1800;
		
		--x;
		while (k < x)
		{
			i++;
			Current = (book*)malloc(sizeof(book));
			if (Begin == nullptr)
				Begin = Current;
			else
				Previos->Next = Current;
			Previos = Current;
			strcpy_s(Current->aut, aut_[random[i]].c_str());
			strcpy_s(Current->name, name_[random[i]].c_str());
			Current->type = type[rand() % 3];
			Current->year = rand() % 200 + 1800;
			k++;
		}
	}
	Previos->Next = nullptr;
	return Begin;
}
void PrintList(book* Begin)
{
	book* Current = Begin;
	while (Current != nullptr)
	{
		printf("\n %-11s %-9s %-10d %c", Current->aut, Current->name, Current->year, Current->type);
		Current=Current->Next;
	}
	cout << endl;
}
void Sort(book* Begin)
{
	book* left = Begin;
	book* right = Begin->Next;
	while (left->Next)
	{ 
		while (right) 
		{
			if ((strcmp(left->aut, right->aut) > 0)) 
			{ 
				swap(left->aut, right->aut);
				swap(left->name, right->name);
				swap(left->year, right->year);
				swap(left->type, right->type);
			}
			right = right->Next; 
		}
		left = left->Next; 
		right = left->Next;
	}
	
}
void FillFile(book* Begin)
{
	book* Current = Begin;
	FILE* f;
	fopen_s(&f, "book.txt", "w+t");
	while (Current)
	{
		fprintf(f, "\n %-11s %-9s %-10d %c", Current->aut, Current->name, Current->year, Current->type);
		Current = Current->Next;
	}
	fclose(f);
}
book* CreateListFromFile()
{
	book* Begin, * Previos, * Current;
	Current = Begin = Previos = (book*)malloc(sizeof(book));
	FILE* f;
	fopen_s(&f, "book.txt", "r+t");
	fscanf(f, "%s %s %d %c ", &Current->aut, &Current->name, &Current->year, &Current->type);
	while (!feof(f))
	{
		Current = (book*)malloc(sizeof(book));
		fscanf(f, "%s %s %d %c ", &Current->aut, &Current->name, &Current->year, &Current->type);
		Previos->Next = Current;
		Previos = Current;
	}
	Current->Next = nullptr;
	fclose(f);

	return Begin;
}
void SearchAut(book* Begin)
{
	book* Current = Begin;
	char tag[9]; 
	cout << "Enter author >>> "; cin >> tag;
	while (Current)
	{
		if (strcmp(Current->aut, tag) == 0)
		{
			cout << "[" << Current->aut << " " << Current->name << " " << Current->year << " " << Current->type << "]";
			cout << endl;
		}
		Current = Current->Next;
	}
}
void SearchName(book* Begin)
{
	book* Current = Begin;
	char tag[10];
	cout << "Enter name >>> "; cin >> tag;
	while (Current)
	{
		if (strcmp(Current->name, tag) == 0)
		{
			cout << "[" << Current->aut << " " << Current->name << " " << Current->year << " " << Current->type << "]";
			cout << endl;
		}
		Current = Current->Next;
	}
}
void SearchYear(book* Begin)
{
	book* Current = Begin;
	int tag;
	cout << "Enter year >>> "; cin >> tag;
	while (Current)
	{
		if (tag == Current->year)
		{
			cout << "[" << Current->aut << " " << Current->name << " " << Current->year << " " << Current->type << "]";
			cout << endl;
		}
		Current = Current->Next;
	}
}
void SearchType(book* Begin)
{
	book* Current = Begin;
	char tag;
	cout << "Enter type >>> "; cin >> tag;
	while (Current)
	{
		if (tag == Current->type)
		{
			cout << "[" << Current->aut << " " << Current->name << " " << Current->year << " " << Current->type << "]";
			cout << endl;
		}
		Current = Current->Next;
	}
}
void AddInfoBegin(book** Begin)
{
	book* Current = (book*)malloc(sizeof(book));
	cout << "Enter author, name, year and type of book >" << endl;
	cin >> Current->aut >> Current->name >> Current->year >> Current->type;
	Current->Next = *Begin;
	*Begin = Current;
}
void AddInfoEnd(book* Begin)
{
	book* Current = Begin;
	book* Previos = nullptr;

	while (Current)
	{
		Previos = Current;
		Current = Current->Next;
	}
	Current = (book*)malloc(sizeof(book));
	cout << "Enter author, name, year and type of book >" << endl;
	cin >> Current->aut >> Current->name >> Current->year >> Current->type;
	Previos->Next = Current;
	Current->Next = nullptr;
}
void AddInfoTag(book* Begin)
{
	struct book* Current = Begin, * Previos = Current;
	char tag[9];
	cout << "Enter author >>> "; cin >> tag;

	while (Current)
	{
		if (strcmp(Previos->aut, tag) == 0)
		{
			Current = (book*)malloc(sizeof(book));
			Current->Next = Previos->Next;
			Previos->Next = Current; 
			cout << "Enter author, name, year and type of book >" << endl;
			cin >> Current->aut >> Current->name >> Current->year >> Current->type;
			break;
		}
		Previos = Current;
		Current = Current->Next;
	}
}