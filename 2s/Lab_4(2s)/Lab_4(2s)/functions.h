#pragma once

#include<iostream>
#include<iomanip>
#include<conio.h>
#define N 100
using namespace std;

#define TYPE 1	//1-rand, 2=screen input

void fill(double* Mas, int Size);
int size_(double* Mas, int Size, double* Av);
void fill_new_mas(double* Mas, int Size, double* Mas_, double* Av);
