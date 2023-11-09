#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: parameter variable
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vaList;

	unsigned int c;
	unsigned int sum;

	sum = 0;

	va_start(vaList, n);

	for (c = 0; c < n; c++)
	{
		sum += va_arg(vaList, int);
	}

	va_end(vaList);
	return (sum);
