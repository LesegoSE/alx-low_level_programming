#include "main.h"
/**
 * _isdigit - checks if variable is intiger returns 0 if not and 1 if id
 *
 *Return: 0 if false 1 if true
*/
int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
