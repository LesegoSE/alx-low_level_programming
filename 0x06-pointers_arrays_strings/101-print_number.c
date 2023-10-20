#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n parameter variable
 * 
 * Return: void
 */

void print_number(int n)
{
	int c;
	int b;
	int di;
	int d;
	int power;
	unsigned int temp;
	unsigned int numch;
	unsigned int num;

	di = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	} else
	{
		temp = n;
	}
	num = temp;
	while (num >= 10)
	{
		num = num / 10;
		di++;
	}
	d = di + 1;
	power = 1;
	c = 1;
	while (c < d)
	{
		ex = ex * 10;
		c++;
	}
	b = ex;
	while (b >= 1)
	{
		numch = (temp / b) % 10;
		_putchar(numch + '0');
		b = b / 10;
	}
}
