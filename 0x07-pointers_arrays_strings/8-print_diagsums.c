#include "main.h"

/**
 * print_diagsums - print the diag sums of a matrix
 * @a: matrix input
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i * size + i];
	}
	for (i = 1; i <= size; i++)
	{
		sum1 += a[i * size - i];
	}

	printf("%d, %d\n", sum, sum1);
}
