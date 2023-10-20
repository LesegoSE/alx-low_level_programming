#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: parameter pointer
 * Return: void
 */

void puts2(char *str)
{
	int l;
	int i;

	l = 0;
	while (str[len] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
