#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: parameter pointer
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int n;
	int n1;

	for (n1 = 0; n1 < 8; n1++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[n1][n]);
			_putchar('\n');
		}
	}
}
