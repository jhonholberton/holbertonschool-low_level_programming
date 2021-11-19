#include "main.h"
/**
 * flip_bits - count bites comparate
 * @n: integer
 * @m: integer
 * Return: count bites
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comp;
	unsigned int ret = 0;

	comp = n ^ m;

	for (; comp != 0; comp = (comp >> 1))
		ret = ret + (comp & 1);
	return (ret);
}
