#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line..
 * @s: character value.
 *
 */
void print_rev(char *s)
{
	int j;

	for (j = 0; s[j] != 0; j++)
		;
	j = j - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
