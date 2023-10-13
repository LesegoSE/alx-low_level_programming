#include <ctype.h>

/**
*_isupper - function that checks if value is in upper case..
*@c: tested variable
*Return: returns 0 if its not a capital and 1 if it is.
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
