#include "main.h"

/**
 * puts_half - a function that prints half of a string.
 * @str: character value
 */
void puts_half(char *str)
{
	int j, n;

	for (j = 0; str[j] != '\0'; j++)
		;
	if ((j % 2) == 0)
	{
		for (n = j / 2; n < j; n++)
			_putchar(str[n]);
	} else if ((j % 2) != 0)
	{
		for (n = (j + 1) / 2; n < j; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
