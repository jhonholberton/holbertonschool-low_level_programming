#include "main.h"

/**
 *_strcmp - Compares two strings
 *@s1: String to compare
 *@s2: String to compare
 *Description: Function that compares two strings
 *Return: An integer less than, equal to, or greater
 *than zero if s1 is found, respectively, to be less than,
 *to match, or be greater than s2
 *
 **/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
