#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "History.h"

void fill_file_all_history(double n1, char *value1, double n2, char *value2)
{
	FILE* f;
	fopen_s(&f, "History.txt", "a");
	fprintf(f, "%.3f %s = %.3f %s\n", n1, value1, n2, value2);
	fclose(f);
}

void clear_file(char* fname)
{
	FILE* f;
	fopen_s(&f, fname, "w");
	fclose(f);
}

int  count_lines(char* fname)
{
	int i = 0;
	FILE* f = fopen("History.txt", "r");
	fseek(f, 0, SEEK_SET);
	char item[100];
	while (fgets(item, 100, f) != NULL)
	{
		i++;
	}
	fclose(f);

	return i;
}
