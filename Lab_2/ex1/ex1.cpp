
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;
int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	char author1[9] = "Сенкевич", author2[9] = "Ландау", author3[9] = "Дойль";
	char name1[9] = "Потоп", name2[9] = "Механика", name3[9] = "Сумчатые";
	int year1 = 1978, year2 = 1989, year3 = 1990;
	char type1 = 'Х', type2 ='У', type3 = 'С';

	//введение фактических данных
	printf("1. Введите: автора книги, название, год выпуска, группу >");                                                              //Сенкевич Потоп 1978 Х
	scanf("%s %s %d %c", author1, name1, &year1, &type1);
	printf("2. Введите: автора книги, название, год выпуска, группу >");                                                              //Ландау Механика 1989 У
	scanf("%s %s %d %c", author2, name2, &year2, &type2);
	printf("3. Введите: автора книги, название, год выпуска, группу >");                                                              //Дойль	Сумчатые 1990 C
	scanf("%s %s %d %c", author3, name3, &year3, &type3);
	//вывод таблицы
	printf("-----------------------------------------------\n");
	printf("|Каталог библиотеки                           |\n");
	printf("|---------------------------------------------|\n");
	printf("|Автор книги  |Название  |Год выпуска |Группа |\n");
	printf("|             |          |            |       |\n");
	printf("|-------------|----------|------------|-------|\n");
	//вывод строк фактических данных
	printf("| %-11s | %-8s | %-10d | %-5c |\n", author1, name1, year1, type1);
	printf("| %-11s | %-8s | %-10d | %-5c |\n", author2, name2, year2, type2);
	printf("| %-11s | %-8s | %-10d | %-5c |\n", author3, name3, year3, type3);
	//вывод примечний
	printf("|---------------------------------------------|\n");
	printf("| Примечание: Х - художественная литература;  |\n");
	printf("| У - учебная литература;                     |\n");
	printf("| С - справочная литература                   |\n");
	printf("-----------------------------------------------\n");
	return 0;

	printf("\n\n\n\n\n\n");
}
