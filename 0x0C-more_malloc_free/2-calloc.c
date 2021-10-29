#include "main.h"

/**
 * _calloc -function allocates memory for an array each byte
 * returns a pointer to the allocated memory.
 * @nmemb: bytes of type of data elements
 * @size: size of an array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *pointer1;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer1 = malloc(nmemb * size);
	if (pointer1 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= (nmemb * size); i++)
	{
		pointer1[i] = 0;
	}

	return (pointer1);
}
