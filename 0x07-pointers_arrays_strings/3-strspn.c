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
	int found;
	int cnt;

	count = 0;
	found = 1;

	while (*s && found)
	{
		found = 0;

		for (int cnt = 0; accept[cnt]; cnt++)
		{
			if (*s == accept[cnt])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (found)
		{
			s++;
		}
	}
	return count;
}
