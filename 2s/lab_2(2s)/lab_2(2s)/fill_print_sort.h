#pragma once

#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string.h>
#include <conio.h>

#include"struct book.h"

#define PRINT_TYPE	//def -> screen input,undef -> random
#define DEBUG
#define INDENT "\n\n"

using namespace std;

void print(book mas[], int N);
void sort(book mas[], int N);
int fill(book arr_b[], int N);
