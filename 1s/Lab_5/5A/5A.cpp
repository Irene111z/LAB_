#include <conio.h>
#include "windows.h"
#include <iostream>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x1; double x2; double a; double b; double c;
	// a=4 b=-20 c=25    //x=2.5
	//a=3 b=-13 c=-5     //x1=5 x2=-0.333
	//a=2 b=1 c=7        //корней нет  
	while (true)
	{//ввод значений
		system("cls"); 
		printf("Введите коеффициент a = ");
		scanf_s("%lf", &a); 
		if (a == 0)//дополнение
		{
			printf("Данное уравнение не является квадратным :(\n"); 
			printf("Подсказка: а не можеть принимать значение 0");
			printf("\n\n\n\n\nДля повторной попытки нажмите любую клавишу...");
			_getch();
			system("cls"); 
			printf("Введите коеффициент a = ");
			scanf_s("%lf", &a); 
		}
		printf("Введите коеффициент b = ");
		scanf_s("%lf", &b);
		printf("Введите коеффициент c = ");
		scanf_s("%lf", &c);

		double D = pow(b, 2) - 4*a*c; //дискриминант
		if (D < 0)
			printf("\nКорней уравнения нет");
		else
		{
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a); 
			if (x1 != x2)
			{
				printf("\n x1 = %lf", x1);
				printf("\n\n x2 = %lf", x2);
			}

			else
				printf("x = %lf", x1); 
			
			
			

		}
		printf("\n\n\n\n\nДля продолжения нажмите любую клавишу...");
		_getch();

	}
	return 0;
}