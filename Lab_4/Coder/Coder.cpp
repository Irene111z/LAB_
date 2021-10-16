#include <iostream>
#include "windows.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//CODER   CODER   CODER   CODER   CODER   CODER   CODER   CODER  CODER

	unsigned char t;   //тип сдвига
	unsigned char d;   //направление сдвига
	unsigned short n;  //количество разрядов сдвига
	unsigned short  shift_command_format;  //формат команды сдвига
	printf("\t\tУПАКОВКА КОДА\t\t\n\n");
	printf("Введите тип сдвига (0 - 3) --> ");
	scanf_s("%u", &t);
	printf("Введите направление сдвига (0 / 1) --> ");
	scanf_s("%u", &d);
	printf("Введите количество разрядов сдвига (0 - 511) --> ");
	scanf_s("%u", &n);

	shift_command_format = (t & 0x3) << 10;
	shift_command_format |= (d & 1) << 9;
	shift_command_format |= n & 0x1ff;
	shift_command_format |= 1 << 12;
	shift_command_format |= 1 << 14;
	shift_command_format |= 1 << 15;
	
	printf("\n Формат команды сдвига = %x \n\n ", shift_command_format);

	//DECODER   DECODER   DECODER   DECODER   DECODER   DECODER   DECODER   
	printf("\t\tРАСПАКОВКА КОДА\t\t\n\n");
	printf(" Введите формат команды сдвига \n ");
	printf("(16-ричное число от 0 до 0xFFFF)--> ");
	scanf_s("%ux", shift_command_format);

	t = (shift_command_format >> 10) & 0x3;
	d = (shift_command_format >> 9) & 1;
	n = shift_command_format & 0x1ff;

	printf("\nТип сдвига = %u \n", t);
	printf("Направление сдвига = %u \n", d);
	printf("Количество разрядов сдвига = %u \n", n);
	return 0;
}