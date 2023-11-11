#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: parameter variable
 * @size: parameter variable
 * @cmp: parameter variable
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (n = 0; n < size; n++)
	{
		if ((*cmp) (array[n]))
		{
			return (n);
		}
	}
	return (-1);
}
