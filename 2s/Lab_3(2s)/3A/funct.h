#pragma once

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
#define N 100

using namespace std;

void menu();
void fill(int* P, int Size, int Choice);
void print(int* P, int Size);
void sum_count(int* P, int Size, int* Sum, int* Count);
