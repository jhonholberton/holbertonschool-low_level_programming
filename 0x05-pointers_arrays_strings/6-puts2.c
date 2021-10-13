#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: character value
 */
void puts2(char *str)
{
	int j, k;

	for (j = 0; str[j] != '\0'; j++)
		;
	for (k = 0; k < j; k += 2)

		_putchar(str[k]);
	    _putchar('\n');
}
