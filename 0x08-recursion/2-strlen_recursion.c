#include "main.h"

/**
 * _strlen_recursion - returns the length
 * @s: pointer the array
 * Return: return the length
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')

		return (0);
		return (1 + _strlen_recursion(s + 1));

}
