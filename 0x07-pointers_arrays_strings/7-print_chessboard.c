#include "main.h"

/**
 * print_chessboard - Print a chessboard on screen
 * @a: Array of chess board
 */

void print_chessboard(char (*a)[8])
{

	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar(10);
	}
}
