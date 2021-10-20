#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer, an array
 * Return: void
 */
void _puts_recursion(char *s)

{
	if (*s != '\0')
	{
		putchar(*s);
	s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
