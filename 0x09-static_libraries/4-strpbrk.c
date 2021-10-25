#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: String to scan
 * @accept: bytes to compare
 *
 * Return: String pointer
 *
 */

char *_strpbrk(char *s, char *accept)
{

	char *p2 = accept;

	while (*s)
	{
		while (*accept)
		{

			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}

		accept = p2;

		s++;
	}
	return (NULL);
}
