#include <ctype.h>

/**
 * main - check the code.
 * 
 * Return: Always 0.
 */
int _isupper(int c)
{
	int i;

	if (isupper(c) != 0)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}
