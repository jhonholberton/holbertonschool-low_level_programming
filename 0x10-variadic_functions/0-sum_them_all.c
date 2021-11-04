#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n:variable
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int t;

	if (n == NULL)
		return (0);
	va_start(ap, n);
	t = 0;
	for (i = 0; i < n ; i++)
	{
		t += va_arg(ap, int);
	}
	va_end(ap);
	return (t);
}
