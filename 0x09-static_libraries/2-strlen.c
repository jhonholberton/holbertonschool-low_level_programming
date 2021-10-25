#include "main.h"

#include "main.h"

/**
 * _strlen - that returns the length of a string.
 * @s : character value
 * Return: 0
 */
int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		;
	return (j);
}
