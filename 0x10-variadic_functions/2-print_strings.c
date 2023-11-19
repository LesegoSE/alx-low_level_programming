#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: arg var
 * @n: arg var
 * @...: A variable number of strings to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *c;
	unsigned int i;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (c == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", c);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(strings);
}
