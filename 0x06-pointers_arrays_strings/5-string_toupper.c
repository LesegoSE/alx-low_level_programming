#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase.
 * @b : parameter pointer
 * 
 * Return: b
 */

char *string_toupper(char *b)
{
	int i;

	i = 0;
	while(*(b + i) != '\0')
	{
		if(*(b + i) >= 'a' && *(b + i) <= 'z')
		{
			*(b + i) = (*(b + i) - 32);
		}
		i++;
	}
	return (b);
}
