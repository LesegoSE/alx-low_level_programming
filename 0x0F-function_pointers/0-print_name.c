#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: parameter variable
 * @f: parameter variable
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(f) (name);
	}
}
