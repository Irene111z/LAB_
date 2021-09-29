// Lab1_6.cpp

#include <iostream>

int main()
{
	int sec_in_min = 60;
	int sec_in_hour = sec_in_min * 60;
	int sec_in_day = sec_in_hour * 24;
	int sec_in_2021 = sec_in_day * 365;//невисокосный год
	int sec_in_2024 = sec_in_day * 366;//високосный год
	double sec_in_100_years = sec_in_day * 365.2425 * 100;
	double sec_in_1000_years = sec_in_day * 365.2425 * 1000;
}

/*Земля делает полный оборот за 365,2425 суток. Для простоты значение округлили до 365 дней,
при этом  прибавляя каждые 4 года 1 день.
Для расчёта больших значений я буду использовать это число:365.2425,
чтоб также учесть високосные года. */
