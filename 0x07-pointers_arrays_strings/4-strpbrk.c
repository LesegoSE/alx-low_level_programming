#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: parameter pointer
 * @accept: parameter pointer
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int cnt;
	int c;

	for (cnt = 0; s[cnt] != '\0'; cnt++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[cnt] == accept[c])
			{
				return (s + cnt);
			}
		}
	}
	return (0);
}
