#include "main.h"

/**
*print_numbers - print more numbers
*
*Return: void
*/

void more_numbers(void)
{
	int i = 0;
	int n = 0;

	for (i = 1; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar(i / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
