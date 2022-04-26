#include "foo.h"

void main()
{
	FILE* f;
	char fname[] = "file.bin";

	fill_file(fname);
	cout << "File: " << endl;
	print_file(fname);

	int Sum = sum(fname);
	cout << "sum = " << Sum << endl;

	foo(fname);
	cout << "File after foo(): " << endl;
	print_file(fname);
	
	fopen_s(&f, fname, "w");
	if (f != NULL)
		fclose(f);
}