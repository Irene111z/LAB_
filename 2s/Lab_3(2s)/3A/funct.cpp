#pragma once
#include "funct.h"

void menu()
{
	cout << "--- ���������� ����� � ���. ������������� ��. ������� ---" << endl;
	cout << "1. ����� ������������� ����� " << endl;
	cout << "2. ����� ���������� ����� " << endl;
	cout << "3. ��� ������������� ���������" << endl;
	cout << "4. ����� ������ ����������" << endl;
	cout << "5. ����� ��������� �� ���������" << endl;
	cout << "6. �������� � ���� ������� � ����������� �����������" << endl;
	cout << "7. �����" << endl;
	cout << "��� ����� --> ";
}
void fill(int* P, int Size, int Choice)
{
	if (Choice == 1)
	{
		cout << "������� �������� �������:" << endl;

		for (int i = 0; i < Size; i++)
		{
			int j = 0;
			cin >> j;
			*(P + i) = j;
		}
		system("cls");
	}
	else if (Choice == 2)
		for (int i = 0; i < Size; i++)
			*(P + i) = rand() % 21 - 10;

}
void print(int* P, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		cout << *(P + i) << setw(4);
	}

	cout << endl << endl;
}

void sum_count(int* P, int Size, int* Sum, int* Count)
{
	for (int i = 0; i < Size; i++)
	{
		if (*P < 0) {
			*Sum += *P;
			(*Count)++;
		}
		P++;
	}
}
