//#include <iostream>
//#include "windows.h"
//
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	unsigned char t;   //тип сдвига
//	unsigned char d;   //направление сдвига
//	unsigned short n;  //количество разрядов сдвига
//	unsigned short  shift_command_format;  //формат команды сдвига
//
//	printf("Введите формат команды сдвига\n");
//	printf("(16-ричное число от 0 до 0xFFFF) ->");
//	scanf("%ux", shift_command_format);
//
//	t = (shift_command_format >> 10) & 0x3;
//	d = (shift_command_format >> 9) & 1;
//	n = shift_command_format & 0x1ff;
//
//	printf("тип сдвига = %u/n", t);
//	printf("направление сдвига = %u/n", d);
//	printf("количество разрядов сдвига = %u/n", n);
//	return 0;
//}