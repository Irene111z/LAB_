#include "windows.h"
#include <iostream>
#include<conio.h>
#pragma warning(disable: 4996)
int main(void)
{
	unsigned int g_answer;
	unsigned int correct_answer;
	unsigned int a;
	unsigned int b;
	unsigned int mark;

	srand(time(0));
	a = 1 + rand() % 10;
	b = 1+rand() % 10;
	printf("%u*%u",a,b);
	return 0;
}
