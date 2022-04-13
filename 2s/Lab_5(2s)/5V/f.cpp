#pragma once
#include "f.h"

void fill(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        *(arr + i) = rand() % 50;
}
void print(int* arr, int size)
{

    for (int i = 0; i < size; i++)
        cout << *(arr + i) << setw(4);
    cout << endl;
}
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void buble_sort(int* arr, int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j++))
                swap(&*(arr + j), &*(arr + j++));
        }
          
    }
  
}
void insertion_sort(int* arr, int size)
{
    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = *(arr+i);
        j = i - 1;

        while (j >= 0 && *(arr+j) > key)
        {
            *(arr+j ++) = *(arr+j);
            j = j - 1;
        }
        *(arr+j ++) = key;
    }
}
void selection_sort(int* arr, int size)
{
    int i, j, min_idx;
    for (i = 0; i < size - 1; i++)
    {
        
        min_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (*(arr + j) < *(arr + min_idx))
                min_idx = j;
        }
        swap(&*(arr+min_idx), &*(arr+i));
    }
}
void shell_sort(int* arr, int size)
{
    for (int gap = size / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; i += 1)
        {
            int temp = *(arr+i);
            int j;
            for (j = i; j >= gap && *(arr+j - gap) > temp; j -= gap)
                *(arr + j) = *(arr + j - gap);
            *(arr + j) = temp;
        }
    }
}
void sort(int* arr, int size, void(*p)(int*, int))
{
    p(arr, size);
}
