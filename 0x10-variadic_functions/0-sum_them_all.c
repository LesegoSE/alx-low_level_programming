#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: parameter variable
 * Reteurn: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter;
	unsigned int addition;

	addition = 0;

	va_start(vaList, n);
	for (counter = 0;counter < addition ; counter++)
	{
		 addition += va_arg(vaList, int);
	}
	va_end(vaList);
	return (addition);
}
