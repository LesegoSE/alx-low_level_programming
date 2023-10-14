#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints numbers from n to 98
* followed by a new line
* @n: print from this number
*/

void print_to_98(int n)
{
	int i;
	int b;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
			{
				printf("%d, ", b);
			}
			else if (b == 98)
			{
				printf("%d\n", b);
			}
		}
	}
}
