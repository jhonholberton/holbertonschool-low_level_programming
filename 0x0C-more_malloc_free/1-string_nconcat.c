#include "main.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @n: variable
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int long1 = 0, long2 = 0, total = 0, con1 = 0, con2 = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for ( ; s1[long1] != '\0'; long1++)
	;
	while (s2[long2] != '\0')
	{
		long2++;
	}
	if (n >= long2 + 1)
	{
		total = long1 + long2;
	}
	else
	{
		total = long1 + n;
	}
	p = malloc(sizeof(char) * total + 1);
	if (p == NULL)
		return (NULL);
	for ( ; s1[con1] != '\0'; con1++)
	{
		p[con1] = s1[con1];
	}
	for ( ; con1 <= total; con2++, con1++)
	{
		p[con1] = s2[con2];
	}
	p[total] = '\0';
	return (p);
}
