 /*Дополнительная лабораторная работа 8_А
 Задача авиадиспетчера по бронированию мест*/
#include <iostream>
#include <iomanip>
using namespace std;

bool k(int M[], const int N)
{
	for (int i = 0; i < N; i++)
		if (M[i] == 0)
			return true;

	return false;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	int answer1; int answer2;
	const int N = 10;  int M[N] = {0};
	
	while (k( M, N))
	{
		cout << "Вы курите?" << endl << "ДА -- 1	НЕТ--0" << endl;
		cin >> answer1;
		if (answer1 == 1)
		{
		
			for (int i = 0; i < 5; i++)
			{
				if (M[i] == 0)
				{
					M[i] = 1;
					cout << "Номер вашего места: " << i + 1 << endl << "Отдел для курящих" << endl << endl;
					break;
				}
				if (i == 4 && M[i] == 1)
				{
					cout << "К сожалению, места в этом отделе заняты" << endl << "Бронируем место в другом ?" << endl << "ДА -- 1	НЕТ--0" << endl;;
					cin >> answer2;
					if (answer2 == 1)
						answer1 = 0;
					if (answer2 == 0)
						cout << "Хорошо"<<endl;

				}
			}

		}
		if (answer1 == 0)
		{
			
			for (int i = 5; i < 10; i++)
			{
				if (M[i] == 0)
				{
					M[i] = 1;
					cout << "Номер вашего места: " << i + 1 << endl << "Отдел для некурящих" << endl << endl;
					break;
				}
				if (i == 9 && M[i] == 1)
				{
					cout << "К сожалению, места в этом отделе заняты" << endl << "Бронируем место в другом ?" << endl << "ДА -- 1	НЕТ--0" << endl;;
					cin >> answer2;
					if (answer2 == 1)
						answer1 = 1;
					if (answer2 == 0)
						cout << "Хорошо" << endl;

				}
			}
		}
		if(answer1 != 1 && answer1 != 0)
		{
			cout << "Вы ввели что-то не то..." << endl; 
		}
		
	}
	cout << "МЕСТ НЕТ" <<endl ;
	return 0;
}