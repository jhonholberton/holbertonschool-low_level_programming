#include "main.h"

/**
 * swap_int- swaps the values of two integers
 * @a : pointer value
 * @b : pointer value
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int j;
j = *a;
*a = *b;
*b = j;
}
