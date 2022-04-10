#pragma once
#include "funct.h"

void fill(int* matrix, int n)
{
    int i, j, row = 0, col = 0, q = 1;
    while (col <= (n - 1))
    {
        i = row;
        j = col;

        while ((j < n) && (i >= 0))
            *(matrix+(i*n + j)) = q++;

        if (row < (n - 1))
            ++row;
        else
            ++col;
    }
}
void print(int* matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(matrix + (i * n + j)) << setw(4);
        }
        cout << endl;
    }
}