#pragma once

#include <iostream>
#include <time.h>
#include <iomanip>
#include <conio.h>

using namespace std;

void fill(int* arr, int size);
void print(int* arr, int size);
void buble_sort(int* arr, int size);
void insertion_sort(int* arr, int size);
void selection_sort(int* arr, int size);
void sort(int* arr, int size, void(*p)(int*,int));

