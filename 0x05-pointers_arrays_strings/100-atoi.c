#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: parameter pointer
 * Return: integer
 */

int _atoi(char *s)
{
	int num;
	int f;
	int i;
	int j;

	f = 1;
	i = 0;
	j = 0;
	num  = 0;

	if (s[0] == '-')
	{
		f = -1;
		i++;
	} else if (s[0] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	j = num * f;
	return (j);
}
