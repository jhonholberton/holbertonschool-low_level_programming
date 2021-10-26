#include "main.h"

/**
 * create_array- function that creates an array of chars
 * @size: size array of chars
 * @c: variable
 * Return: null or 0
 */
char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i;

	if (size == 0)
	return (NULL);

	j = malloc(size * sizeof(char));

	if (j == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}
	return (j);

}
