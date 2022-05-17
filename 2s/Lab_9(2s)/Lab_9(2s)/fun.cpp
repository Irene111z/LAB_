#define _CRT_SECURE_NO_WARNINGS
#include "fun.h"

extern struct book* Begin, * End;
void CreateList1()//screen input
{
	book* Current, * Previous;
	Previous = nullptr;
	do
	{
		Current = (book*)malloc(sizeof(book));
		cout << "Enter author, name, year and type of book >" << endl;
		cin >> Current->aut >> Current->name >> Current->year >> Current->type;

		Current->Prev = Previous;
		if (Previous != nullptr)
			Previous->Next = Current;
		else
			Begin = Current;
		Previous = Current;
		puts("Прекратить заполнение - <esc>");
	} while (_getch() != 27);

	End = Current;
	End->Next = nullptr;
}
void CreateList2(int x)//random
{
	book* Previos, * Current;
	Begin=Current = Previos = (book*)malloc(sizeof(book));
	Previos = nullptr;
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

		for (int i = 0; i < x; i++)
		{
			Current = (book*)malloc(sizeof(book));
			strcpy_s(Current->aut, aut_[random[i]].c_str());
			strcpy_s(Current->name, name_[random[i]].c_str());
			Current->type = type[rand() % 3];
			Current->year = rand() % 200 + 1800;
			Current->Prev = Previos;
			if (Previos != nullptr)
				Previos->Next = Current;
			else
				Begin = Current;
			Previos = Current;
		}
		End = Current;
		End->Next = nullptr;
}
void PrintList1(book* Begin)
{
	book* Current = Begin;
	while (Current != nullptr)
	{
		printf("\n %-11s %-9s %-10d %c", Current->aut, Current->name, Current->year, Current->type);
		Current = Current->Next;
	}
	cout << endl;
}
void PrintList2(book* End)
{
	book* Current = End;
	while (Current != nullptr)
	{
		printf("\n %-11s %-9s %-10d %c", Current->aut, Current->name, Current->year, Current->type);
		Current = Current->Prev;
	}
	cout << endl;
}
void Sort()
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
void FillFile()
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
void CreateListFromFile()
{
	book * Previos, * Current;
	Current = Begin = Previos = (book*)malloc(sizeof(book));
	Begin->Prev = nullptr;
	FILE* f;
	fopen_s(&f, "book.txt", "r+t");
	fscanf(f, "%s %s %d %c ", &Current->aut, &Current->name, &Current->year, &Current->type);
	while (!feof(f))
	{
		Current = (book*)malloc(sizeof(book));
		fscanf(f, "%s %s %d %c ", &Current->aut, &Current->name, &Current->year, &Current->type);
		Previos->Next = Current;
		Current->Prev = Previos;
		Previos = Current;
	}
	Current->Next = nullptr;
	End = Current;
	fclose(f);
}
void SearchAut(book* x)
{
	book* Current = x;
	char tag[9];
	cout << "Enter author >>> "; cin >> tag;
	if (Current == Begin)
	{
		while (Current)
		{
			if (strcmp(Current->aut, tag) == 0)
			{
				printf("\n %-11s %-9s %-10d %c", Current->aut, Current->name, Current->year, Current->type);
				cout << endl;
			}
			Current = Current->Next;
		}
	}
	else
	{
		while (Current)
		{
			if (strcmp(Current->aut, tag) == 0)
			{
				printf("\n %-11s %-9s %-10d %c", Current->aut, Current->name, Current->year, Current->type);
				cout << endl;
			}
			Current = Current->Prev;
		}
	}
}
void SearchName(book* x)
{
	book* Current = x;
	char tag[10];
	cout << "Enter name >>> "; cin >> tag;
	if (Current == Begin)
	{
		while (Current)
		{
			if (strcmp(Current->name, tag) == 0)
			{
				printf("\n %-11s %-9s %-10d %c", Current->aut, Current->name, Current->year, Current->type);
				cout << endl;
			}
			Current = Current->Next;
		}
	}
	else
	{
		while (Current)
		{
			if (strcmp(Current->name, tag) == 0)
			{
				printf("\n %-11s %-9s %-10d %c", Current->aut, Current->name, Current->year, Current->type);
				cout << endl;
			}
			Current = Current->Prev;
		}
	}
}
void SearchYear(book* x)
{
	book* Current = x;
	int tag;
	cout << "Enter year >>> "; cin >> tag;
	if (Current == Begin)
	{
		while (Current)
		{
			if (tag == Current->year)
			{
				printf("\n %-11s %-9s %-10d %c", Current->aut, Current->name, Current->year, Current->type);
				cout << endl;
			}
			Current = Current->Next;
		}
	}
	else
	{
		while (Current)
		{
			if (tag == Current->year)
			{
				printf("\n %-11s %-9s %-10d %c", Current->aut, Current->name, Current->year, Current->type);
				cout << endl;
			}
			Current = Current->Prev;
		}
	}
}
void SearchType(book* x)
{
	book* Current = x;
	char tag;
	cout << "Enter type >>> "; cin >> tag;
	if (Current == Begin)
	{
		while (Current)
		{
			if (tag == Current->type)
			{
				printf("\n %-11s %-9s %-10d %c", Current->aut, Current->name, Current->year, Current->type);
				cout << endl;
			}
			Current = Current->Next;
		}
	}
	else
	{
		while (Current)
		{
			if (tag == Current->type)
			{
				printf("\n %-11s %-9s %-10d %c", Current->aut, Current->name, Current->year, Current->type);
				cout << endl;
			}
			Current = Current->Prev;
		}
	}
}
void AddInfoBegin()
{
	book* Current = (book*)malloc(sizeof(book));
	cout << "Enter author, name, year and type of book >" << endl;
	cin >> Current->aut >> Current->name >> Current->year >> Current->type;
	Current->Prev = nullptr;
	Current->Next = Begin;
	Begin->Prev = Current;
	Begin = Current;
}
void AddInfoEnd()
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
	Current->Prev = Previos;
	Current->Next = nullptr;
	End = Current;
}
void AddInfoTag()
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
			Previos->Next->Prev = Current;
			Current->Prev = Previos;
			Previos->Next = Current;
			cout << "Enter author, name, year and type of book >" << endl;
			cin >> Current->aut >> Current->name >> Current->year >> Current->type;
			break;
		}
		Previos = Current;
		Current = Current->Next;
	}
}
void DeleteInfoBegin() 
{
	book* Current = Begin;
	Begin = Current->Next;
	Begin->Prev = nullptr;
	free(Current);
	Current = Begin;
}
void DeleteInfoEnd() 
{
	book* Current = Begin;
	book* Previos = nullptr;
	while (Current->Next) {
		Previos = Current;
		Current = Current->Next;
	}
	if (Previos == nullptr) {
		DeleteInfoBegin();
		return;
	}
	Previos->Next = nullptr;
	End = Previos;
	free(Current);
}
void DeleteInfoTag()
{
	book* Current = Begin;
	book* Previos = nullptr;
	char tag[9];
	cout << "Enter author >>> "; cin >> tag;
	
	if (strcmp(Current->aut, tag) == 0)
	{
		DeleteInfoBegin();
		system("cls");
		return;
	}
	while (Current) 
	{
		if (strcmp(Current->aut, tag) == 0) 
		{
			if (Current->Next == nullptr) 
			{
				Previos->Next = nullptr;
				End = Previos;
				free(Current);
				system("cls");
				return;
			}
			Current->Next->Prev = Current->Prev;
			Current->Prev->Next = Current->Next;
			free(Current);
			system("cls");
			return;
		}
		else {
			Previos = Current;
			Current = Current->Next;
		}
	}
}