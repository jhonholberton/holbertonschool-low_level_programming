#include "main.h"

/**
 * main - coins to make change for an amount of money.
 * @argc: argument counter
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int coins;
	int i;

	if (argc != 2)

	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	if (coins < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; coins > 0; i++)
	{
	if (coins >= 25)
	{
		coins = coins - 25;
	}
	else if
	(coins >= 10)
	{
		coins = coins - 10;
	}
	else if
	(coins >= 5)
	{
		coins = coins - 5;
	}
	else if
	(coins >= 2)
	{
		coins = coins - 2;
	}
	else if
	(coins >= 1)
	{
		coins = coins - 1;
	}

	}
	printf("%d\n", i);
	return (0);
}
