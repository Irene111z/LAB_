#pragma once

#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

#define VARIANT 2	
//1 - одномерный, 2 - двумерный

void print2(int **matrix, int size);
void fill2(int **matrix, int n);

void print1(int* matrix, int size);
void fill1(int* matrix, int size);

