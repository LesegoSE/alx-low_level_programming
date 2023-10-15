#include <stdio.h>

/**
 *main - Prints first 50 Fibonacci numbers, starting with 1 and 2
 *with them being separated by a comma followed by a empty space
 *
 *Return: Always 0
 */

int main(void)
{
	int n;
	unsigned long f;
	unsigned long f1;
	unsigned long add;

	f = 0;
	f1 = 1;

	for (n = 0; n < 50; n++)
	{
		add = f + f;
		printf("%lu", add);

		f = f1;
		f1 = add;

		if (n == 49)
		{
			printf("\n");
		} else
		{
			printf(", ");
		}
	}
		return(0);
}
