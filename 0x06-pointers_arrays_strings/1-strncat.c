#include "main.h"

/**
 *_strncat - Concatenates n char to two strings
 *@dest: String final
 *@src: String to concat
 *@n: most bytes from src
 *Description: Function for concatenates two strings
 *Return: A pointer to string concat
 *
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;
	while ((*(src + j) != '\0') && (j < n))
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
