// Lab1_2.cpp 

#include <iostream>
using namespace std;

int main()
{
	double a = 3;
	double b = 4;
	double c = 5;
	double p = (a + b + c) / 2;
	double area = sqrt(p * (p - a) * (p - b) * (p - c));
}