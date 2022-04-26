#pragma once
#include <iostream>
#include <iomanip>
#include<time.h>

using namespace std;

#define N 10

void fill_arr(int* mas, int n);
void print_arr(int* mas, int n);
void clean_file(char* fname);
void fill_file(char* fname, int* mas, const int n);
void fill_new_arr(char* fname, int* mas, const int n, int* sum);