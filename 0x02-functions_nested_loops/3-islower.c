#include "main.h"
/**
 *_islower - checks if char is in lowercase
 *@i: variable to be checked
 *Return: 1 if char is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
