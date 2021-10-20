#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main(){
	//{//1^2+...+n^2
	//	SetConsoleCP(1251);
	//	SetConsoleOutputCP(1251);
	//	int Sum, n, i;
	//	printf("Введіть n :");
	//	scanf(" %d", &n);
	//	for (Sum = 0, i = 1; i <= n; i++)
	//	{
	//		Sum += i * i;     // Sum = Sum + i * i
	//	}
	//	printf("n = %d S = %d", n, Sum);
	//	return 0;
	//}
	
	SetConsoleOutputCP(1251);
	int S, K, i;
	printf("Введіть К :");
	scanf(" %d", &K);
	S = 0;
	i = 0;
	while (S < K) // цикл с передумовою
	{
		i++;
		S += i * i;
	}
	printf("n = %d S = %d \n", i, S);
	S = 0;
	i = 0;
	do // цикл с постумовою
		i++;
		S += i * i;
	} while (S < K);
	printf("n = %d S = %d \n", i, S);
	return 0; 

}
