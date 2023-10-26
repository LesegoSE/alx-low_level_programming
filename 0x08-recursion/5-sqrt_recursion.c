#include "main.h"

/**
 * cube -  loops between 1 to the n value
 * @i: parameter variable
 * @c: parameter variable
 * Return: int value
 */

int cube(int i, int c)
{
	if (c * c == i)
	{
		return (c);
	} else if (c * c > i)
	{
		return (-1);
	}
return (cube(i, c + 1));
}
/**
 * _sqrt_recursion - a function that returns the natural square root of a number.
 * @n: parameter variable
 * Return: square root number
 */

int _sqrt_recursion(int n)
{
	return (cube(n, 1));
}
