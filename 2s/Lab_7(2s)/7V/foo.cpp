#include "foo.h"

void fill_file(char* fname)
{
	FILE* f;
	fopen_s(&f, fname, "w+b");
	srand(time(0));
	int x;
	for (int i = 0; i < 20; i++)
	{
		x = rand() % 51 - 25;
		fwrite(&x, sizeof(int), 1, f);
	}
	fclose(f);
}
void print_file(char* fname)
{
	FILE* f;
	int x;
	fopen_s(&f, fname, "r+b");
	for (int i = 0; i < 20; i++)
	{
		fread(&x, sizeof(int), 1, f);
		cout << x << setw(4);
	}
	cout << endl;
	fclose(f);
}
int sum(char* fname)
{
	FILE* f; 
	int sum = 0;
	int temp;

	fopen_s(&f, fname, "r+b");

	fseek(f, 1 * sizeof(int), SEEK_SET);
	fread(&temp, sizeof(int), 1, f);
	sum += temp;

	fseek(f, 4 * sizeof(int), SEEK_SET);
	fread(&temp, sizeof(int), 1, f);
	sum += temp;

	fseek(f, 8 * sizeof(int), SEEK_SET);
	fread(&temp, sizeof(int), 1, f);
	sum += temp;

	fclose(f);
	return sum;
}
void foo(char* fname)
{
	FILE* f;

	fopen_s(&f, fname, "r+b");

	int min = INT_MAX;
	int q = 0;
	int x;


	for (int i = 0; i < 20; i++)
	{
		fread(&x, sizeof(int), 1, f);
		if (x < min)
			min = x, q = i;
	}

	fseek(f, 0, SEEK_SET);

	while (!feof(f)) 
	{
		fread(&x, sizeof(int), 1, f);

		if (x == min)
		{
			fseek(f, q * sizeof(int), SEEK_SET);
			x = 999;
			fwrite(&x, sizeof(int), 1, f);
			fseek(f, 0, SEEK_END);
		}
	}

	fclose(f);
}
