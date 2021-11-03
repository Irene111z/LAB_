#include <iostream>
#include "windows.h"
#include <time.h>
#include<iomanip>
#define N 100
using namespace std;
int main(void) 
{
    
    setlocale(LC_ALL, "Russian");
   int array[N],    i,            sequence,       max_sequence,             sum ,       max_sum,                length,                 max_length;
   //массив,     номер эл.,   текущая послед.,  максимальная послед.,  текущая сума, максимальная сума,  текущая длинна послед.,  максимальная длинна послед.
        srand(time(NULL));

        for (i = 0; i < N; ++i)
            array[i] = rand() % 201 - 100;

        cout<<"Массив:"<<endl;
        for (i = 0; i < N; ++i)
            cout<< array[i] << setw(4);

        max_sequence = sequence = -1;
        max_sum = sum = 0;
        max_length = length = 0;

        for (i = 0; i <= N; ++i) 
        {
            if (i == N || array[i] <= 0)
            {
                if (sequence >= 0)
                {
                    if (sum > max_sum)
                    {
                        max_sequence = sequence;
                        max_length = length;
                        max_sum = sum;
                    }
                    sequence = -1;
                    length = 0;
                    sum = 0;
                }
            }
            else
            {
                if (sequence < 0)
                    sequence = i;
                length += 1;
                sum += array[i];
            }
        }

        cout<<endl<<"Последовательность положительных чисел, сумма элементов в которой максимальная"<<endl;
        for (i = max_sequence; i < max_sequence + max_length; ++i)
            cout << array[i] << setw(4);
        cout<<endl<<"Сума элементов: "<< max_sum;

        return 0;
    }

   