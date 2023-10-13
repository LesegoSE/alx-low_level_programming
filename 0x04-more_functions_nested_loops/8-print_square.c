#include "main.h"
/**
*print_square - prints a square and a new line
*@size: input variable
*Return: draws square
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int b;

		for (i = 0; i < size; i++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
