#include "main.h"
/**
 *print_triangle - prints a triangle, followed by a new line
 *@size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar("\n");
	}
	else
	{
		int i, b;
		for (i = 1; i <= size; i++)
		{
			for (b = i; b < size; b++)
			{
				_puthcar(' ');
			}

			for (b = 1; j <= i; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
