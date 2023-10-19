#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers.
 * @a: parameter pointer
 * @n: the number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b;
	int i;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
