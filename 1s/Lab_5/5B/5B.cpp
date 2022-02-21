#include <conio.h>
#include "windows.h"
#include <iostream>
int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned int k;
	while(true){
		system("cls"); 

		printf("Введите количество грибов (k) --> ");
		scanf_s("%u", &k);
		if (k % 10 == 5 || k % 10 == 6 || k % 10 == 7 || k % 10 == 8 || k % 10 == 9 || k % 10 == 0)
			printf("У меня %u грибов \n", k);
		else if (k % 100 == 11 || k == 11)
			printf("У меня %u грибов \n", k);
		else if (k % 10 == 1 && k != 11)
			printf("У меня %u гриб \n", k);
		else if (k % 10 == 2 || k % 10 == 3 || k % 10 == 4)
			printf("У меня %u гриба \n", k);
		else
			printf("Количество не может быть отрицательным, попробуйте ещё раз");
	   
		printf("\n\n\n\n\n\t\t\tДля продолжения нажмите любую клавишу...");
		_getch();
	}
	
}