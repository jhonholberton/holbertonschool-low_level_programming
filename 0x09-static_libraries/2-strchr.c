#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s:source string
 * @c:constant character to compare
 * Return: return pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int lenght = 0;
	char *p;

	while (s[lenght])
	{
		lenght++;
	}

	while (i <= lenght)
	{
		if (s[i] != c)
		{

			if (lenght == i)
			{
				return (NULL);
			}

			i++;
		}
		else if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
	}
	return (s);
}
