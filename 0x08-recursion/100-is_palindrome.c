#include "main.h"

/**
 * recInt - gets string length
 * @i: parameter variable
 * @c: parameter variable
 * Return: 1 IF (palindrome) ELSE 0 (otherwise)
 */

int recInt(char *i, int c)
{
	if (*i == 0)
	{
		return (c - 1);
	}
return (recInt(i + 1, c + 1));
}

/**
 * comp - compares strings
 * @n: parameter variable
 * @b: parameter variable
 * Return: 1 IF (palindrome) ELSE 0 (otherwise)
 */

int comp(char *n, int b)
{
	if (*n != *(n + b))
	{
		return (0);
	} else if (*n == 0)
	{
		return (1);
	}
return (comp(n + 1, b - 2));
}

/**
 * is_palindrome - a function that returns 1 if
 * a string is a palindrome and 0 if not.
 * @s: parameter pointer
 * Return: 1 IF (palindrome) ELSE 0 (otherwise)
 */

int is_palindrome(char *s)
{
	int l;

	l = recInt(s, 0);
	return (comp(s, l));
}
