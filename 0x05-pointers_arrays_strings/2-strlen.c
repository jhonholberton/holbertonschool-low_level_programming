#include "main.h"

#include "main.h"

/**
 * _strlen - that returns the length of a string.
 * @s : character value
 * Return: 0
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
