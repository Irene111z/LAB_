#include "windows.h"
#include <iostream>
#include<conio.h>
#pragma warning(disable: 4996)
int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned int pc;
	pc = rand() % 101 + 1;
	unsigned int gamer;
	unsigned int tries = 0;
	int a;
	printf("Не хотите сыграть в игру \"Больше-меньше\"?\n");
	printf("Если нет - нажмите 0...\n");
	printf("Если да - нажмите любую другую цифру...\n");
	scanf("%d", &a);
	system("cls");
							//ПРИГЛАШЕНИЕ ПОИГРАТЬ
	if (a == 0)
	{
	printf("Жаль, так хотелось с вами поиграть:(\n\n\n\n\n\n");
	}
	else {
	printf("Ура:)\n");
	printf("Правила игры таковы: я загадываю число от 1 до 100\n");
	printf("А ваша задача - его отгадать с помощью моих подсказок\n\n");
									//ИГРА																					
	while (true)
	{
		tries += 1; 
		/*for (tries = 0; ; tries++)*/

		printf("Ваше число ---> \n");
		scanf("%u", &gamer);
		if (gamer == pc)
		{
			printf("Ух-ты! У вас получилось меня переиграть:)\n");
			printf("Так держать!\n\n");
			printf("Количество попыток--> %u\n\n\n\n\n\n\n\n\n", tries);
			break;
		}
		else if (gamer > pc)
		{
			printf("Попробуйте выбрать число поменьше  \n");
			//scanf("%u", &gamer);

		}
		else if (gamer < pc)
		{
			printf("Попробуйте выбрать число побольше  \n");
			//scanf("%u", &gamer);

		}
		else
		{
			printf("Вы ввели что-то не то...");
		}
		

				
					////ПОВТОРНОЕ ПРИГЛАШЕНИЕ
					//printf("Если хотите сыграть ещё раз нажмите любую клавишу...");
					//_getch();
					//system("cls");
	}
}

	return 0;
}




