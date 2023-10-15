#include <stdio.h>

/**
 *main - locates and prints the sum of the even valued nums
 *follwed by a new line
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int n;
	unsigned long int b;
	unsigned long int nxt;
	unsigned long int sum;

	n = 1;
	b = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (n < 4000000 && (n % 2) == 0)
		{
			sum = sum + n;
		}
		nxt = n + b;
		n = b;
		b = nxt;
	}
	printf("%lu\n", sum);
	return (0);
}
