#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "windows.h"
int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y; // координаты точки
	while (true)
	{
		system("cls"); 
		
		printf("\t\t\tВведите координату x для проверки --> ");
		scanf("%lf", &x);
		system("cls");
		printf("\t\t\tВведите координату y для проверки --> ");
		scanf("%lf", &y);
		system("cls");

		printf("\t\t\tx=%lf;\t y=%lf", x, y);

		if ((x >= -1 && x <= 1 && y >= 0 && y <= 1) || (x >= -1 && x <= 0 && y >= -1 && y <= 0))//область
		printf("\n\n\t\t\tВывод: точка попадает в область");
		else printf("\n\n\t\t\tВывод: точка не попадает в область");
		printf("\n\n\n\n\n\t\t\tДля продолжения нажмите любую клавишу...");
		_getch();
		
	}

	return 0;
}