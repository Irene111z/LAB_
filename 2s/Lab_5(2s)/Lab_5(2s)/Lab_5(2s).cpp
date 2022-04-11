#include "funct.h"

void main()
{
		#if VARIANT==2

	int N;
	cout << "Enter size of matrix ->  "; cin >> N;

	int** Matrix2 = new int*[N];
	for (int i = 0; i < N; i++)
	{
		*(Matrix2 + i) = new int[N];
	}

	fill2(Matrix2, N);
	print2(Matrix2, N);

	for (int i = 0; i < N; i++)
		delete[] Matrix2[i];
		delete[] Matrix2;

		#endif

		#if VARIANT==1

	int N;
	cout << "Enter size of matrix ->  "; cin >> N;

	int* Matrix1 = new int[N * N];

	fill1(Matrix1, N);
	print1(Matrix1, N);

	delete[] Matrix1;

		#endif


}