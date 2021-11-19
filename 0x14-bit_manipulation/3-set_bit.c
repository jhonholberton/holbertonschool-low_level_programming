#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n:bit
 * @index:  is the index
 * Return:1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
