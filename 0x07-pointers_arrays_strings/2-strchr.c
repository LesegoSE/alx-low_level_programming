#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: parameter pointer
 * @c: parameter variable
 * Return: pointer 
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++
	}
	return (NULL);
}
