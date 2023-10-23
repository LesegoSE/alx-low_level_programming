#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: parameter pointer
 * @accept: parameter pointer
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt;
	int c;

	cnt = 0;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
			{
				cnt++;
				break;
			}else if (accept[c + 1] == '\0')
			{
				return (cnt);
			}
		}
			s++;
	}
		return (cnt);
}

