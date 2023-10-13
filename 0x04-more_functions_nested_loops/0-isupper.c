#include "main.h"
/**
*_isupper - function that checks if value is in upper case..
*@c: tested variable
*Return: returns 0 if its not a capital and 1 if it is.
*/
int _isupper(int c)
{
	if ((c <= 'Z') && (c >= 'A'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
