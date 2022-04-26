#include "fun.h"

void main()
{
	
		srand(time(0));

		char fname1[] = "f1.txt";
		char fname2[] = "f2.txt";
		int mas1[N];
		int mas2[N];
		int x = 0;

		FillArr(mas1, N);
		cout << "mas1:" << endl;
		PrintArr(mas1, N);

		FillFile1(fname1, mas1, N);

		FillFile2(fname1, fname2, mas2, N);
		cout << "mas2:" << endl;
		PrintArr(mas2, N);

		Print_X(fname2, N, x);

		CleanFile(fname1);
		CleanFile(fname2);
	
	
}