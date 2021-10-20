#include "main.h"

/**
 * _memcpy -  function that copies memory area
 * @dest:variable where memory is copied
 * @src:memory to copy
 * @n:number de bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
