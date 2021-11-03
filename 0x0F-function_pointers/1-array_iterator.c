#include "function_pointers.h"

/**
  * array_iterator - function given as a parameter on each element of an array
  * @array: array
  * @size: size the array
  * @action: funtion pointer
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int j, k = size;

	if (action != NULL && array != NULL)
	{
		for (j = 0; j < k; j++)
		(*action)(array[j]);
	}
}
