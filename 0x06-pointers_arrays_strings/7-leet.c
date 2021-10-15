#include "main.h"

/**
 *leet - Encode to 1337
 *@s: String to encode
 *Description: Function that encodes a string into 1337
 *Return: The string encoded
 **/

char *leet(char *s)
{
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char values[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j] || s[i] == (letters[j] - 32))
			{
				s[i] = values[j];
				break;
			}
		}
	}
	return (s);
}
