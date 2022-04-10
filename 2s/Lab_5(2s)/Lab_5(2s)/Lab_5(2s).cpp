#include "funct.h"

void main()
{
	
	

	
		#ifdef VARIANT1

	int N;
	cout << "Enter size of matrix ->  "; cin >> N;

	int* Matrix1 = new int[N * N];

	fill(Matrix1, N);
	print(Matrix1, N);

        #else
	cout << " ";
		#endif

}