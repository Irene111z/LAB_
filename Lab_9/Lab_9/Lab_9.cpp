/*                      Лабораторная работа № 9 из методички
Заполнить матрицу ЛП, от левого верхнего угла по диагонали: вправо - вверх.	*/
#include <iostream>
#include<iomanip>
using namespace std;

int main(void) 
{
    const int ROWS = 9;
    const int COLS = 9;
    int Matrix[ROWS][COLS];
    cout << "\tOur matrix: " << endl<<endl;

    int i, j, row = 0, col = 0, n = 1;
    while (col <= (ROWS - 1)) 
    {
        i = row;
        j = col;

        while ((j < ROWS) && (i >= 0))
            Matrix[i--][j++] = n++;

        if (row < (COLS - 1))
            ++row;
        else
            ++col;
    }
    cout << setw(3);
    for (i = 0; i < ROWS; ++i)
    {
        for (j = 0; j < COLS; ++j) 
        {
            cout << Matrix[i][j]<< setw(3);
        }
        cout << endl;
    }
    return 0;
}