#include "fun.h"

#define _CRT_SECURE_NO_WARNINGS_

void FillArr(int* mas, int n)
{
	for (int i = 0; i < n; i++)
	{
		*(mas + i) = rand() % 21 - 10;
	}
}
void PrintArr(int* mas, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(mas + i) << setw(4);
	}
	cout << endl;
}
void FillFile1(char* fname, int* mas, int n)
{
	FILE* f;
	fopen_s(&f, fname, "r+t");
	if (!feof(f))
	{
		for (int i = 0; i < n; i++)
			fprintf_s(f, "%d  ", *(mas + i));
	}
	fclose(f);
}
void FillFile2(char* fname1, char* fname2, int* mas, int n)
{
	FILE* f1;
	FILE* f2;

	fopen_s(&f1, fname1, "r+t");
	fopen_s(&f2, fname2, "r+t");

	for (int i = 0; i < n; i++) 
	{
		fscanf_s(f1, "%d", &*(mas + i));
		fprintf_s(f2, "%d  ", *(mas + i));
	}
	fclose(f1);
	fclose(f2);

}
void Print_X(char* fname, int n, int x)
{
	FILE* f2;
	fopen_s(&f2, fname, "r+t");
	cout << endl;
	for(int i=0; i < n; i++ )
	{
		fscanf_s(f2, "%d", &x);
		cout << "x = " << x << endl;
	}
	fclose(f2);
}
void CleanFile(char* fname) 
{
	FILE* f;
	fopen_s(&f, fname, "w");
	if (f != NULL)
		fclose(f);
}