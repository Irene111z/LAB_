#pragma once

#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

#define TYPE 1	//1-rand, 2=screen input

void fill(int *Mas, int Size);
void print(int* Mas, int Size);
double aver(int* Mas, int Size);
int size_of_new_mas(int* Mas, int Size, double Av);
void fill_new_mas(int* Mas, int Size, double Av, int* New_Mas, int Size2);
