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
	int cnt;
	int c;

	c = n;

	for (cnt = 0; cnt < c; cnt++)
	{
		s[cnt] = b;
		n--;
	}
	return (s);
}
