#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: parameter pointer
 * Return: int
 */

int _atoi(char *s)
{
	int r;
	int s;
	int i;
	int c;

	i = 0;
	r = 0;
	s = 1;
	c = 0;
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			s = -s;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit;

		digit = s[i] - '0';
		if (r > (2147483647 - digit) / 10)
		{
			if (s == 1)
			{
				return (2147483647);

			} else
			{
				return (-2147483648);
			}
		}
		r = r * 10 + digit;
		i++;
	}
	c = r * s;
	return(c);
}
