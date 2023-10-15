#include <stdio.h>

/**
 *main - lists all natural numbs that are below 1024
 *which are multiples of 3 or either 5
 *
 *Return: Always 0
 */

int main(void)
{
	int n;
	int add;

	add = 0;
	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			add += n;
	}

	printf("%d\n", sum);
	return (0);
}
