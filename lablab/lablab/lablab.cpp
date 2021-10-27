﻿#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(0));

    int number = rand() % 100;
    int guess;
    int tries = 0;

    printf("Введите число от 0 до 100 >\n");

    while (true)
    {
        tries += 1;
        scanf("%d", &guess);

        if (guess < 0)
        {
            printf("Введите число больше\n");
        }

        else if
            (guess > 100)
        {
            printf("Введите число меньше >\n");
        }

        else if (guess == number)
        {
            printf("Вы ввели правильное число! >\n");
            printf("Попыток=%d\n", tries);
        }

        else
        {
            printf("Вы ввели неверное число! >\n");


        }

        /*tries++;
        printf("tries=%d", tries);*/
    }


    return 0;
}