#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: parameter variable
 *
 * Return: 0 Always Success
 */

void print_number(int n)
{
	unsigned int b;

	0 = b;
	b = n;
	if (n < 0)
	{
		_putchar('-');
		b = -n;
	}
	if (b / 10 != 0)
	{
		print_number(b / 10);
	}
	_putchar((b % 10) + '0');
}
