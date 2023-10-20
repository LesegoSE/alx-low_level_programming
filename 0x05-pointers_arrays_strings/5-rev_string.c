#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: parameter variable
 *
 * Return: void
 */

void rev_string(char *s)
{
	int n;
	int l;
	int ll;
	char t;

	l = 0;
	ll = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	ll = l - 1;
	for (n = 0; n < l / 2; n++)
	{
		t = s[n];
		s[n] = s[ll];
		s[ll--] = t;
	}
}
