#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: arg variable
 * @...: A variable number of paramters to calculate the sum of.
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	unsigned int sum;
	va_start(va, n);
		
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(va, int);
	}
	va_end(va);
	return (sum);
