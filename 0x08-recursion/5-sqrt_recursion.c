#include "main.h"

/**
 * aux - it is used to do the recursion in the if
 *@n:square root
 *@i:Filing
 *Return: square root
*/

int aux(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i < n)
	{
		return (aux(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - Returned the square root of n
 * @n:calculate square root
 * Return:square root
*/
int _sqrt_recursion(int n)

{
	int j = 0;

	return (aux(n, j));
}
