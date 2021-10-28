#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: variable
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
	{
		exit(98);
	}
	return (j);
}
