#include "fun.h"
#define _CRT_SECURE_NO_WARNINGS

void print_menu()
{
	system("cls");
	cout << "����:" << endl;
	cout << "1. ���� � ������ � ������ � ����." << endl;
	cout << "2. ���� ��������� ������� � ������ � ����." << endl;
	cout << "3. �������� ������ � ������ �����." << endl;
	cout << "4. �������� ������ � ����� �����." << endl;
	cout << "5. ������ ����� ������ �� ����� �� ������." << endl;
	cout << "6. ������ ���� �������� ��������������� �� ����� � ������." << endl;
	cout << "7. ����� �� ���������." << endl;
	
}
void file_cleaning(char* fname) 
{
	FILE* f;
	fopen_s(&f, fname, "w");
	if (f != NULL)
		fclose(f);
}
void rand_end(FILE* f)
{

	
	book arr;
	fseek(f, 0, SEEK_END);
	int ROWs;
	cout << "������� ������� ������ ������?(max=10) = "; cin >> ROWs;
	int n, i;
	srand(time(NULL));
	const int C = 10;

	string aut_[C] = { "��������","�����","������","������","������","�����","�������","�����","��������","�����" };
	string name_[C]{ "�����","��������","���������","��������","������","�����","�������","������","��������","�������" };
	char type[3] = { '�','�','�' };

	int random[C];
	for (i = 0; i < C; i++)
	{
		random[i] = i;
	}
	for (i = 0; i < C; i++)
		swap(random[i], random[rand() % C]);

	for (n = 0, i = 0; n < ROWs; n++, i++)
	{
		strcpy_s(arr.aut, aut_[random[i]].c_str());
		strcpy_s(arr.name, name_[random[i]].c_str());
		arr.type = type[rand() % 3];
		arr.year = rand() % 200 + 1800;
		fprintf(f, "\n%-11s	 %-9s  %-10d  %-5c", arr.aut, arr.name, arr.year, arr.type);
	}
	
}
void rand_begin(FILE* f, char* fname)
{
	FILE* temp;
	book arr;
	book t;
	int ROWs;
	cout << "������� ������� ������ ������?(max=10) = "; cin >> ROWs;
	int n, i;
	srand(time(NULL));
	const int C = 10;
	fopen_s(&temp, "Temp.txt", "w+");

	string aut_[C] = { "��������","�����","������","������","������","�����","�������","�����","��������","�����" };
	string name_[C]{ "�����","��������","���������","��������","������","�����","�������","������","��������","�������" };
	char type[3] = { '�','�','�' };

	int random[C];
	for (i = 0; i < C; i++)
	{
		random[i] = i;
	}
	for (i = 0; i < C; i++)
		swap(random[i], random[rand() % C]);

	for (n = 0, i = 0; n < ROWs; n++, i++)
	{
		strcpy_s(arr.aut, aut_[random[i]].c_str());
		strcpy_s(arr.name, name_[random[i]].c_str());
		arr.type = type[rand() % 3];
		arr.year = rand() % 200 + 1800;
		fprintf(temp, "\n%-11s	 %-9s  %-10d  %-5c", arr.aut, arr.name, arr.year, arr.type);
	}
	fseek(f, 0, SEEK_SET);
	while (!feof(f))
	{
		fscanf_s(f, "%s   %s   %d   %c", &t.aut, &t.name, &t.year, &t.type);
		fprintf(temp, "\n%-11s	 %-9s  %-10d  %-5c", t.aut, t.name, t.year, t.type);
	}
	if (f != NULL)
		fclose(f);
	if (temp != NULL)
		fclose(temp);
	remove(fname);
	rename("Temp.txt", fname);
}
void screen_input_end(FILE* f)
{
	
	book arr;
	fseek(f, 0, SEEK_END);
	int ROWs;
	cout << "������� ������� ������ ������?(max=10) = "; cin >> ROWs;
	int n, i;
	for (i = 0; i < ROWs; i++)
	{
		cin >> arr.aut;
		if (strcmp(arr.aut, "***") == 0)
			break;
		cin >> arr.name >> arr.year >> arr.type;
		fprintf(f, "\n%-11s	 %-9s  %-10d  %-5c", arr.aut, arr.name, arr.year, arr.type);
	}
	
}
void screen_input_begin(FILE* f, char* fname)
{
	FILE* temp;
	book arr;
	book t;
	fopen_s(&temp, "Temp.txt", "w+");
	int ROWs;
	cout << "������� ������� ������ ������?(max=10) = "; cin >> ROWs;
	int n, i;
	for (i = 0; i < ROWs; i++)
	{
		cin >> arr.aut;
		if (strcmp(arr.aut, "***") == 0)
			break;
		cin >> arr.name >> arr.year >> arr.type;
		fprintf(temp, "\n%-11s	 %-9s  %-10d  %-5c", arr.aut, arr.name, arr.year, arr.type);
	}
	fseek(f, 0, SEEK_SET);
	while (!feof(f))
	{
		fscanf_s(f, "%s   %s   %d   %c", &t.aut, &t.name, &t.year, &t.type);
		fprintf(temp, "\n%-11s	 %-9s  %-10d  %-5c", t.aut, t.name, t.year, t.type);
	}
	fclose(f);
	fclose(temp);
	remove(fname);
	rename("Temp.txt", fname);
}
void rand(char* fname, short q)
{
	FILE* f;
	fopen_s(&f, fname, "r+");
	if (!f)
	{
		fopen_s(&f, fname, "w+");
		q = 4;
	}
	if (q == 3)
		rand_begin(f, fname);
	if (q == 4)
		rand_end(f);
	if (f != NULL)
		fclose(f);
}
void screen_input(char* fname, short q)
{
	FILE* f;
	fopen_s(&f, fname, "r+");
	if (!f)
	{
		fopen_s(&f, fname, "w+");
		q = 4;
	}
	if (q == 3)
		screen_input_begin(f, fname);
	if (q == 4)
		screen_input_end(f);
	if (f != NULL)
		fclose(f);
}


