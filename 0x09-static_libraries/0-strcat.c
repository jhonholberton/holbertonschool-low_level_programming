#include "main.h"

/**
 *_strcat - Concatenates two strings
 *@dest: String final
 *@src: String to concat
 *Description: Function for concatenates two strings
 *Return: A pointer to string concat
 *
 **/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (*(src + j) != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
