#include "windows.h"
#include <iostream>
#include<conio.h>
int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    unsigned int  g_answer,       c_answer,       a, b,        ex,       mark;   unsigned int n = 10;
        //      ответ игрока, правильный ответ, множители, номер теста, оценка, количество заданий
    int z;
    mark = 0;

    printf("\tПРОВЕРКА НА ЗНАНИЕ ТАБЛИЦЫ УМНОЖЕНИЯ\n\n");
    printf("Количество примеров: %u \n", n);
    printf("Чтоб запустить тест нажмите любую клавишу...\n");
    printf("Для выхода закройте консоль...\n");
    _getch();
    system("cls");
    //                      ТЕСТ
    for (ex = 0; ex < n ;ex++ )
    {
        srand(time(0));
        a = 1 + rand() % 9;
        b = 1 + rand() % 9;
        printf("\n\t%u. %u * %u = ",ex+1, a, b);
        scanf_s("%u", &g_answer);
        if (a * b == g_answer)
            mark+=1;
    }
    system("cls");
    printf("Тест пройден\n");
    printf("Хотите узнать результат?\n");
    printf("Да - нажмите 1, нет - 0\n");
    scanf_s("%d", &z);
    system("cls");
    if (z == 0) {
        printf("Спасибо за участие :) \n\n\n");
        return 0;
    }
    //                      ТАБЛИЦА С РЕЗУЛЬТАТОМ
    else if (z == 1){
        printf("---------------------------------\n");
        printf("|                               |\n");
        if (mark % 10 == 5 || mark % 10 == 6 || mark % 10 == 7 || mark % 10 == 8 || mark % 10 == 9 || mark % 10 == 0)
            printf("| Вы набрали %3u баллов из %3u  |\n", mark, n);
        else if (mark % 100 == 11 || mark == 11)
            printf("| Вы набрали %3u баллов из %3u  |\n", mark, n);
        else if (mark == 0)
            printf("| Увы, вы ничего не угадали:(   |");
        else if (mark % 10 == 1 && mark != 11)
            printf("| Вы набрали %3u балл из %3u    |\n", mark, n);
        else if (mark % 10 == 2 || mark % 10 == 3 || mark % 10 == 4)
            printf("| Вы набрали %3u балла из %3u   |\n", mark, n);
        printf("|                               |\n");
        printf("---------------------------------\n\n\n");
    }
  
	return 0;
}
