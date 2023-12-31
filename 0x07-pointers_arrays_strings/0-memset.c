#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: parameter pointer
 * @b: parameter pointer
 * @n: parameter pointer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		*(s + cnt) = b;
	}
	return (s);
}
