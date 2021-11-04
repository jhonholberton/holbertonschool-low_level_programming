#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n:variable
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j = 0;
	int k = 0;
	va_list op;

	if (n == 0)
	{
		return (0);
	}
	va_start(op, n);
	while (j < n)
	{
		k = k + va_arg(op, int);
		j++;
	}
	va_end(op);
	return (k);
}
