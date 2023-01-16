#include "matrix.h"
#include <iostream>
using namespace std;


int main()
{
	double arr[] = {1,2,3,4,5,6,7,8,9};
	int i = 3;
	int j = 3;
	int size = i * j;
	Matrix A, B, C;
	A.input(i,j);
	B.input(i, j, arr);

	A.print();
	B.print();

	if (C.sum(arr, size, A))
	{
		C.print();
	}

	if (C.mult(arr, size, A))
	{
		C.print();
	}
	
}