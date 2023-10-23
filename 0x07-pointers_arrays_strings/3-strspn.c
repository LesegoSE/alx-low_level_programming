#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: parameter pointer
 * @accept: parameter pointer
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int cnt;

	count = 0;

	for (; *s; s++)
	{
		int found;

		found = 0;

		for (cnt = 0; accept[cnt]; cnt++)
		{
			if (*s == accept[cnt])
			{
				found = 1;
				break;
			}
		}

		if (found)
		{
			count++;
		} else
		{
			break;
		}
	}
	return count;
}
}
