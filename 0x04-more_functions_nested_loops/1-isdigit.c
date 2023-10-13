#include "main.h"
/**
 * _isdigit - checks if variable is intiger returns 0 if not and 1 if id
 *@c: varibel to be checked
 *Return: 0 if false 1 if true
*/
int _isdigit(int c)
{
	int i;

	if ((c <= 9) && (c >= 0))
	{
		i = 0;
	}
	else
	{
		i = 1;
	}

	return (i);
}
