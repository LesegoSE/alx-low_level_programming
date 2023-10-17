#include <stdio.h>
/**
 * _strlen - returns the size of a variable.
 * @s: variable which we must get its size.
 * Return: the strings length
 */

int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}
