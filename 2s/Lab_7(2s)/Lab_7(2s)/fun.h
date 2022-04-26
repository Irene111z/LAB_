#pragma once
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

using namespace std;

struct book
{
	char aut[9];
	char name[10];
	int year;
	char type;
};

void print_menu();
void file_cleaning(char* fname);
void rand_end(FILE* f);
void screen_input_end(FILE* f);
void rand_begin(FILE* f, char* fname);
void screen_input_begin(FILE* f, char* fname);
void rand(char* fname, short q);
void screen_input(char* fname, short q);
