#include "main.h"
/**
 *print_triangle - prints a triangle
 *@size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int b;

		for (i = 1; i <= size; i++)
		{
			for (b = i; b < size; b++)
			{
				_putchar(' ');
			}

			for (b = 1; b <= i; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
