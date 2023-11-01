#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: parameter variable.
 * @c: parameter variable
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *r;

	if (size == 0)
	{
		return (NULL);
	}
	r = malloc(sizeof(c) * size);
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		r[i] = c;
	}
	return (r);
}
