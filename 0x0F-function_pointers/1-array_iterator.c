#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an carray
 * @size: parameter variable
 * @action: parameter variable
 * @array: parameter variable
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array && action != NULL)
	{
		for (n = 0; n < size; n++)
		{
			(action) (array[n]);
		}
	}
}
