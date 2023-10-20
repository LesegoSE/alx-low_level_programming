#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: parameter pointer
 *
 * Return: char variable s
 */

char *cap_string(char *s)
{
	int b;
	int n;

	b = 0;
	n = 0;

	while (*(s + b) != '\0')
	{
		if (*(s + b) >= 'a' && *(s + b) <= 'z')
		{
			if (b == 0)
			{
				*(s + b) = *(s + b) - 32;
			} else
			{
				for (; n <= 12; n++)
				{
					if (a[n] == *(s + b - 1))
					{
						*(s + b) = *(s + b) - 32;
					}
				}
			}
		}
		b++;
	}
	return (s);
}
