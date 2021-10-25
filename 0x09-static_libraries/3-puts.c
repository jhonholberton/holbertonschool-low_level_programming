#include "main.h"

/**
 * _puts - that prints a string, followed by a new line, to stdout.
 * @str: pointer.
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != 0; j++)

	_putchar(str[j]);

	_putchar('\n');
}
