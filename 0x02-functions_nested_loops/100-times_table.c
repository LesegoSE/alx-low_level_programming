#include "main.h"

/**
*print_times_table - prints the n times table, starting with 0
*@n: defines the number of the times table
*/

void print_times_table(int n)
{
	int i;
	int b;
	int j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (b = 0; b <= n; b++)
			{
				j = i * b;
				if (b == 0)
				{
					_putchar(j + '0');
				}
				else if (j < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(j + '0');
				}
				else if (j >= 10 && j < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((j / 10) + '0');
					_putchar((j % 10) + '0');
				}
				else if (j >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((j / 100) + '0');
					_putchar(((j / 10) % 10) + '0');
					_putchar((j % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
