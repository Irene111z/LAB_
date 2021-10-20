#include <iostream>
#include "windows.h"

int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	long n; //параметр ряда
	double n1; //параметр ряда в форме с плавающей точкой
	double sum = 0; //сумма членов ряда
	double term; //значение текущего члена
	short k1 = 1; //первый множитель
	const double eps = 0.000001; //предел точности

	for (n = 0; ; n++, k1 = -k1) {
		n1 = n;
		//long k2 = 1 - (pow(n1 + 1, 2) / pow(n1 + 2, 2)); //второй множитель
		term = k1 * (1 - (pow(n1 + 1, 2) / pow(n1 + 2, 2)));
		if (fabs(term) >= eps)
			sum += term;
		else break;
		if (n == 9)
			printf("Сумма 10 членов ряда = %10.7lf\n", sum);
	}
	printf("Полная сумма ряда = %10.7lf\n", sum);
	return 0;
}
