#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: parameter variable
 * @max: parameter variable
 * Return: int
 */

int *array_range(int min, int max)
{
	int *n;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	n = malloc(sizeof(*n) * ((max - min) + 1));
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		n[i] = min;
	}
	return (n);
}
