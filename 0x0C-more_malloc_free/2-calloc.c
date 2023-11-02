#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: parameter variable
 * @size: parameter variable
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory_block;
	unsigned int total_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	memory_block = (char *)malloc(total_size);
	if (memory_block == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		memory_block[i] = 0;
	}
	return memory_block;
}
