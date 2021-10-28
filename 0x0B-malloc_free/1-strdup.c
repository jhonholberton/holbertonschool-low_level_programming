#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: pointer the string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *j;
	int k;
	int c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; str[k] != '\0'; k++)
	;
	j = malloc(sizeof(char) * k + 1);
	if (j == NULL)
	{
		return (NULL);
	}
	for (c = 0; c <= k; c++)
	j[c] = str[c];
	return (j);
}
