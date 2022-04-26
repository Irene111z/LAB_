#include "fun.h"
#define _CRT_SECURE_NO_WARNINGS_

void fill_arr(int* mas, int n)
{
	for (int i = 0; i < n; i++)
	{
		*(mas + i) = rand() % 21 - 10;
	}
}
void print_arr(int* mas, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(mas + i) << setw(4);
	}
	cout << endl;
}
void clean_file(char* fname)
{
	FILE* f;
	fopen_s(&f, fname, "w");
	if (f != NULL)
		fclose(f);
}
void fill_file(char* fname, int* mas,  const int n)
{
	FILE* f;
	fopen_s(&f, fname, "w+b");
	fwrite(mas, sizeof(int), n, f);
	fclose(f);
}
void fill_new_arr(char* fname, int* mas, const int n, int* sum)
{
	FILE* f;
	fopen_s(&f, fname, "r+b");
	for (int i = 0; i < n; i++)
	{
		fread(&*(mas + i), sizeof(int), 1, f);
		if (*(mas + i) % 2 == 0)
			*sum += *(mas + i);
	}
	fclose(f);
}

