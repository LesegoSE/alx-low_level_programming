#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: parameter variable
 * Return: cahr
 */

char *_strdup(char *str)
{
	char *ou;
	unsigned int n;
	unsigned int c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		ou = (char *)malloc(sizeof(char) * (n + 1));
	}
	if (ou == NULL)
	{
		return (NULL);
	}
	for (c = 0; c <= n; c++)
	{
		ou[c] = str[c];
	}
	return (ou);
}
