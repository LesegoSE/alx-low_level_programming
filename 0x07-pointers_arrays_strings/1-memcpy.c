#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: parameter pointer
 * @src: parameter pointer
 * @n: parameter variable
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		dest[cnt] = src[cnt];
	}
	return (dest);
}
