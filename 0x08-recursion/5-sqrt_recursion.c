#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: variable
 * @i: varibale 2
 * @aux: variable 3
 * Return: square root or -1
 */

int aux(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i < n)
		aux(n, i + 1);
	else
		return (-1);
}

int _sqrt_recursion(int n)

{
	int i;
	i = 0;
	return (aux(n, i));
}
