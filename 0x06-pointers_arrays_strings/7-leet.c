#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @b: parameter pointer
 *
 * Return: variable b
 */

char *leet(char *b)
{
	int n;
	int c;
	char st1[] = "aAeEoOtTlL";
	char st2[] = "4433007711";

	n = 0;
	c = 0;
	for (; b[n] != '\0'; n++)
	{
		for (; c < 10; c++)
		{
			if (b[n] == st1[c])
			{
				b[n] = st2[c];
			}
		}
	}
	return (b);
}
