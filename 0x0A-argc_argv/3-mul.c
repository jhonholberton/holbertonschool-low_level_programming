#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: argument counter
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int j = 0;
	int k = 0;

	if (argc == 3)
	{
		j = atoi(argv[1]), k = atoi(argv[2]);
		printf("%d\n", j * k);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
