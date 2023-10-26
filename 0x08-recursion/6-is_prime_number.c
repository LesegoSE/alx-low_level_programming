#include "main.h"

/**
 * rec - loops between 1 and n value
 * @i: parameter variable
 * @c: parameter variable
 * Return: 1 IF (success) ELSE 0 (otherwise).
 */

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

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: parameter variable
 * Return: int 1 IF (success) ELSE 0 (otherwise).
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
return (rec(n, 2));
}
