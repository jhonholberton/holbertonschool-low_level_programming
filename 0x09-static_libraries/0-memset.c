#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s:array to modify
 * @b:character that modifies the string
 * @n:number the byte modify
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
