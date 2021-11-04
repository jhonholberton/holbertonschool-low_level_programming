#include "function_pointers.h"
/**
 * int_index - print index of the array
 * @array: array of integer
 * @size: size
 * @cmp: pointer to function
 * Return: (i) or (-1) success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, com;
	int (*j)(int) = cmp;

	if (!size || !cmp || !array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		com = (*j)(array[i]);
		if ((com) != 0)
			return (i);
	}
	return (-1);
}
