#include "main.h"

/**
* tims_table - prints the times table from 0 - 9.
*
* Return: void
*/

int main(void)
{
	int i;
	int b;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (b = 0; b <= 9; b++)
		{
			n = (i * b);
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n < 10 && b != 0)
			{
				_putchar(' ');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
