#include "main.h"

/**
 * array_range -function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *j;
	int k;
	int c;

	if (min > max)
	{
		return (NULL);
	}
	c = max - min;
	j = malloc(sizeof(int) * (c + 1));
	if (j == NULL)
	{
		return (NULL);
	}
	for (k = 0; k <= c; k++)
	{
		j[k] = min;
		min++;
	}
	return (j);
}
