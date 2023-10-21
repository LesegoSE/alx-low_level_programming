#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: parameter pointer
 * Return: integer
 */

void puts_half(char *str)
{
	int l;
	int start_index;
	int i;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}

	start_index = (l - 1) / 2;
	for (i = start_index; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
