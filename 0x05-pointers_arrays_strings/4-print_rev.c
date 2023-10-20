#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: parameter variable
 * Return: void
 */

void print_rev(char *s)
{
	int n;
	int b;
	int l;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	l = n;
	for (b = l - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
_putchar('\n');
}
