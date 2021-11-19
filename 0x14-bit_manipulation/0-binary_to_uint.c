#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if.
 */
unsigned int binary_to_uint(const char *b)
{
	int counter = 0, exp = 1, change = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[counter] != '\0')
	{
		counter++;
	}
	counter -= 1;
	while (counter >= 0)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
		change += ((b[counter] - 48) * exp);
		exp = exp * 2;
		counter--;
	}
	return (change);
}
