#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// a≠ 0, n≠ 0, x ≠ 0
	double a = 5.5, b = 2.3;
	int n = 3;
	double x;       //parameter which you need to enter
	double t1, t2;  //our result

	printf("Введите: x (обратите внимание, что x не может принимать значение 0) >");//x=4
	scanf("%lf", &x);

	double G2 = pow(x, n - 2) * (n - 2);//temporary var
	double G1 = pow(x, n - 1) * (n - 1);//temporary var

	t1 = (1 / a) * ((-1 / G2) + (b / G1));//-0,32 (x=4)

	double ax = (a * x)*3.14/180;//temporary var
	double k = ((pow(x, 2) / a) - (2 / pow(a, 3)));//temporary var
	
	t2 = ((2 * x) / pow(a, 2)) * sin(ax) - k * cos(ax);//2,89 (x=4)

	printf("t1 = %lg\n", t1);
	printf("t2 = %lg\n", t2);
		return 0;
}
