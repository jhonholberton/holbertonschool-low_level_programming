#include "main.h"

/**
 * prime - funtion aux
 * @x: variable
 * @div: divisor
 * Return: 1 or 2 depending on the case
 */

int prime(int x, int div)
{
	if (x % div == 0 && x > div)
		return (1 + prime(x, div + 1));
	if (x % div == 0 && x == div)
		return (1);
	return (prime(x, div + 1));
}

/**
 * is_prime_number - function that returns number prime.
 * @n: variable
 * Return:  1 or 2 depending on the case
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (prime(n, 1) == 2)
		return (1);
	return (0);

}
