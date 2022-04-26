#pragma once
#include <iostream>
#include <iomanip>
#include<time.h>

using namespace std;

#define N 10

void FillArr(int* mas, int n);
void PrintArr(int* mas, int n);
void FillFile1(char* fname, int* mas, int n);
void FillFile2(char* fname1, char* fname2, int* mas, int n);
void Print_X(char* fname, int n, int x);
void CleanFile(char* fname);
