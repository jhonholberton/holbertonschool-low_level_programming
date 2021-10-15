#include "main.h"

/**
 *_strncpy - Copy a string
 *@dest: String final
 *@src: String to copy
 *@n: bytes to copy
 *Description: Function for copies a string
 *Return: A pointer to string copied
 *
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((*(src + i) != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
