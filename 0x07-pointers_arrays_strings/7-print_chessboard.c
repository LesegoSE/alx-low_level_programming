#include "main.h"

/**
 * print_diagsums - a function that prints the chessboard.
 * @a: parameter pointer
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int n;
	int n1;

	for (n1 = 0; n1 <= 7; n1++)
	{
		for (n = 0; n <= 7; n++)
		{
			_putchar(a[n1][n]);
		}
		_putchar('\n');
	}
}
