#include "main.h"
/**
*print_diagonal - prints a diagonal line
*@n: input integer
*Return: diagonal line
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int b;

		for (i = 0; i < n; i++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == i)
				{
					_putchar('\\');
				}
				else if (b < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
