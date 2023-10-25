#include "main.h"

/**
 * _pow_recursion - a function that returns
 * the value of x raised to the power of y
 * @x: prameter variable
 * @y: prameter variable
 * Return: value of x
 */

int _pow_recursion(int x, int y)
{
	int c;

	c = 0;
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	c = x * _pow_recursion(x, y - 1);
	return (c);
}
