#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
int main() {
    setlocale(LC_ALL, "ru");
    int z;
    int answer;
    int n = 10;//count of tasks
    int ones = 0;
    int grade = 0;
    for (; ones < n; ones++) {

        srand(time(0));
        int number = rand() % 10 + 1;
        int factor = rand() % 10 + 1;

        printf("%d) Решите пример > %d * %d = \n\n", ones, number, factor);

        printf("Ваш ответ >");

        scanf_s("%d", &answer);

        if (answer == number * factor) {

            printf("Твой ответ правильный, идем дальше\n\n");
            grade++;
        }
        else
            printf("Неправильно, идем дальше\n\n");
    }

    printf("Хотите узнать оценку?\n");
    printf("1-да, 2- нет");
    scanf_s("%d", &z);

    if (z == 1)
        printf("Оценка = %d", grade);
    else
        printf("Досвидания");
    return 0;
}