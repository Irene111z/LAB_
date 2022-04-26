#include "fun.h"

void main()
{
	srand(time(0));
	int mas[N];
	fill_arr(mas, N);
	cout << "mas1:" << endl;
	print_arr(mas, N);
	char fname[] = "mas.bin";
	fill_file(fname, mas, N);
	int mas2[N]; int sum = 0;
	fill_new_arr(fname, mas2, N, &sum);
	cout << "mas2:" << endl;
	print_arr(mas2, N);
	cout << "sum = " << sum;
	clean_file(fname);
}