#include "main.h"

/**
 * rec - Iterates through 1 to n value
 * @i: prameter variable
 * @c: prameter variable
 * Return: int
 */

int rec(int i, int c);

/**
 * is_prime_number - a function that returns the natural square root of a number.
 * @n: prameter variable
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (rec(n, 2));
}

int rec(int i, int c)
{
	if (i == c)
	{
		return (1);
	} else if (i % c == 0)
	{
		return (0);
	}
	return (rec(i, c + 1));
}
