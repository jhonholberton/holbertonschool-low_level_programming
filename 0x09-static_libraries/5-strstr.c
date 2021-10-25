#include "main.h"

/**
 * _strstr - finds the first occurrence in the substring
 * @haystack: String to scan
 * @needle: substring
 * Return: String pointer where substring starts
 */

char *_strstr(char *haystack, char *needle)

{
	char *p1 = haystack;
	char *p2 = needle;

	while (*haystack)
	{
		haystack = p1;
		p2 = needle;

		while (*p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (haystack);
		p1 = haystack + 1;
	}
	return (NULL);
}
