/*ЛАБОРАТОРНАЯ РАБОТА № 9А
В двумерном массиве (каждый раз работать с исходным массивом):
а) найти максимальный в каждой строке и поменять его местами с первым элементом этой же строки;
б) найти минимальный в каждом столбце и поменять его местами с последним элементом этого же столбца;*/

#include "windows.h"
#include <iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A1[100][100];
    int cols, rows;
    while (true)
    {
    cout << "Введите количество строк матрицы M1 --> ";
    cin >> rows;
    cout << "Введите количество столбцов матрицы M1 --> ";
    cin >> cols;
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            A1[i][j] = rand() % 100;
        }
    }
    cout << "Исходный массив:" << endl;
    cout << setw(4);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << A1[i][j] << setw(4);
        }
        cout << endl;
    }
    
        cout << "1) найти максимальный в каждой строке и поменять его местами с первым элементом этой же строки" << endl;
        cout << "2) найти минимальный в каждом столбце и поменять его местами с последним элементом этого же столбца" << endl;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            int max; int temp;
            for (int i = 0; i < cols; i++)
            {
                max = 0;
                for (int j = 1; j < rows; j++)
                {
                    if (A1[i][j] > A1[i][max])
                        max = j;
                }
               
                temp = A1[i][0];
                A1[i][0] = A1[i][max];
                A1[i][max] = temp;
            }

            cout << endl;
            cout << "Новый массив:" << endl;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols - 1; j++)
                {
                    cout << setw(4) << A1[i][j];
                }
                cout << setw(4) << A1[i][cols - 1] << endl;;
            }
            cout << endl;

        }

        if (choice == 2)
        {
            int min;
            int temp;
            for (int j = 0; j < rows; j++)
            {

                min = 0; int k = 0;
                for (int i = 1; i < cols; i++)
                {
                    k++;
 
                    if (A1[i][j] < A1[min][j])
                    {
                        min = i;
                    }
                }

              
                temp = A1[k][j];
                A1[k][j] = A1[min][j];
                A1[min][j] = temp;
            }
            cout << endl;
            cout << "Новый массив:" << endl;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols - 1; j++)
                {
                    cout << setw(4) << A1[i][j];
                }
                cout << setw(4) << A1[i][cols - 1] << endl;;
            }
            cout << endl;
        }
        
    }
}