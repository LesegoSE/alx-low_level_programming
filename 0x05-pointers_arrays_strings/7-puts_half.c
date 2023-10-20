#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: parameter variable
 * Return: void
 */

void puts_half(char *str)
{
	int b;
	int i;
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}else if (l % 2)
		{
			for (b = (l - 1) / 2; b < l - 1; b++)
			{
				_putchar(str[b + 1]);
			}
		}
		_putchar('\n');
	}
}
