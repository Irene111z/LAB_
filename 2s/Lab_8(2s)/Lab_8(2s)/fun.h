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
};

 book* CreateList1(int x);
 book* CreateList2(int x);
 void PrintList(book* Begin);
 void AddInfoTag(book* Begin);
 void Sort(book* Begin);
 void FillFile(book* Begin);
 book* CreateListFromFile();
 void SearchAut(book* Begin);
 void SearchName(book* Begin);
 void SearchYear(book* Begin);
 void SearchType(book* Begin);
 void AddInfoBegin(book** Begin);
 void AddInfoEnd(book* Begin);