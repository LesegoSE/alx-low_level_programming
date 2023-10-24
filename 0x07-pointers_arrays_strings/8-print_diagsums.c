#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: parameter pointer
 * @size: parameter variable
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int cnt;
	int cnt1;
	int n;

	cnt = 0;
	cnt1 = 0;

	for (n = 0; n < size; n++)
	{
		cnt = cnt + a[n * size + n];
	}
	for (n = size - 1; n >= 0; n--)
	{
		cnt1 += a[n * size + (size - n - 1)];
	}
	printf("%d, %d\n", cnt, cnt1);
}
