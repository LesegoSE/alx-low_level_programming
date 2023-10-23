#include "main.c"

/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: parameter pointer
 * @b: parameter pointer
 * @n: parameter pointer
 * Return: constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cnt;
	char *c;

	*c = s;

	for (cnt = 0; cnt < n; cnt++)
	{
		*s = b;
		s++;
	}
	return (s);
}
