#pragma once

#include <iostream>
#include <conio.h>
#include<iomanip>
#include <Windows.h>
#include <time.h>

using namespace std;

void fill_matrix(int** Matrix, int Size);
void print_matrix(int** Matrix, int Size);
void print_array(int* Arr, int Size);
int*& fun(int Size, int** Matrix, int* Min_cols, int* Max_rows, int* Sum_gd, int* Product_pd);
