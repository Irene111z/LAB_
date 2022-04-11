#pragma once
#include "funct.h"

void fill2(int** matrix, int size)
{
    int i, j, row = 0, col = 0, n = 1;
    while (col <= (size - 1))
    {
        i = row;
        j = col;

        while ((j < size) && (i >= 0))
            *(*(matrix + j++) + i--) = n++;

        if (row < (size - 1))
            ++row;
        else
            ++col;
    }
}
void print1(int* matrix, int size)
{
    cout << setw(4);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << *(matrix + (i * size + j)) << setw(4);
        }
        cout << endl;
    }
}
void fill1(int* matrix, int size)
{
    int i, j, row = 0, col = 0, n = 1;
    while (col <= (size - 1))
    {
        i = row;
        j = col;

        while ((j < size) && (i >= 0))
            *(matrix + ((i--) * size + j++)) = n++;
          /*  matrix[i--][j++] = n++;*/

        if (row < (size - 1))
            ++row;
        else
            ++col;
    }

}
void print2(int** matrix, int n)
{
    cout << setw(4);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(*(matrix+j)+i) << setw(4);
        }
        cout << endl;
    }
}