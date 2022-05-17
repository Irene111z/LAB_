#pragma once
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <iomanip>
#include <string.h>
#include <conio.h>

using namespace std;

struct book
{
	char aut[9];
	char name[10];
	int year;
	char type;
	struct book* Next;
	struct book* Prev;
};
void CreateList1();
void CreateList2(int x);
void PrintList1(book* Begin);
void PrintList2(book* End);
void AddInfoTag();
void Sort();
void FillFile();
void CreateListFromFile();
void SearchAut(book* x);
void SearchName(book* x);
void SearchYear(book* x);
void SearchType(book* x);
void AddInfoBegin();
void AddInfoEnd();
void DeleteInfoEnd();
void DeleteInfoTag();
void DeleteInfoBegin();