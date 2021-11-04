#include "3-calc.h"

/**
 * main - function
 * @argc: size
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*j)(int, int);
	int c, d;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	j = get_op_func(argv[2]);
	if (j == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = (atoi(argv[1]));
	d = (atoi(argv[3]));
	printf("%d\n", get_op_func(argv[2])(c, d));
	return (0);
}
