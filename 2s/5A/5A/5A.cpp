#include "f.h"

void main()
{
	setlocale(0, "");
	srand(time(NULL));

	int size;
	cout << "Введите размер матрицы: "; cin >> size;

	int* min_cols = new int[size];
	int* max_rows = new int[size];

	int** matrix = new int* [size];
	for (int i = 0; i < size; i++)
		*(matrix + i) = new int[size];

	int product_pd = 1;
	int sum_gd = 0;
	int* result;

	fill_matrix(matrix, size);
	cout << "Матрица:" << endl << setw(4);
	print_matrix(matrix, size); cout << endl;

	result = fun(size, matrix, min_cols, max_rows, &sum_gd, &product_pd);
	cout << "Минимальные значение в колонках:" << endl;
	print_array(min_cols, size); cout << endl;
	cout << "Максимальные значения в строках:" << endl;
	print_array(max_rows, size); cout << endl;

	cout << "Сумма по ГД: " << *result; cout << endl;
	cout << "Произведение по ПД: " << *(result+1);
	cout << endl << endl << endl;

	delete[] min_cols, max_rows, result;
	for (int i = 0; i < size; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

}