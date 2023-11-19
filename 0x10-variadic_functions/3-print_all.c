#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: argument variable,
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i;
	char *c;
	char *s = "";

	i = 0;
	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(list, double));
					break;
				case 's':
					c = va_arg(list, char *);
					if (!c)
					{
						c = "(nil)";
					}
					printf("%s%s", s, c);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
