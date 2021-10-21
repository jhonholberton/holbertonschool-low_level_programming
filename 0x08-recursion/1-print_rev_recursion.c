#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer, an array*
 * Return: void, returns nothing
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		putchar(*s);
		_putchar('\n');

	}
	

}
