#include "main.h"

/**
 *string_toupper - Lower to upper
 *@s: String to change
 *Description: Function that changes all lowercase letters
 *of a string to uppercase
 *Return: The string modified
 **/

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
