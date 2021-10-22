#include "main.h"

/**
 * main -   prints the number of arguments passed into it.
 * @argc: argument counter
 * @argv: argument
 * Return: 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
