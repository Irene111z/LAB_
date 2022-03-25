#pragma once

#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

#define TYPE 1	//1-rand, 2=screen input

void fill( int Size, int* P);
void print(int* P, int Size);
double aver(int* P, int Size);
int size_of_new_mas(int* P, int Size, double Av);
void fill_new_mas(int* P, int Size, double Av, int* NP, int Size2);
