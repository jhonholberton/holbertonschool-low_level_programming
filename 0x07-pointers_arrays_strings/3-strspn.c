#include "main.h"

/**
 * _strspn - gets the length of a substring
 * @s: 1st string to compare
 * @accept: bytes of comparisson
 * Return: Number of bytes on both strings.
 */



unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0;
	char *p1 = accept;

	while (*s && *s != ' ')
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				result++;
			}
			accept++;
		}
		accept = p1;
		s++;
	}

	return (result);
}
