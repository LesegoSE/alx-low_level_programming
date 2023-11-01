#include "main.h"
#include <stdlib.h>

/**
   * str_concat - concatenates two strings.
   * @s1: parameter variable.
   * @s2: parameter variable.
   * Return: char
   */

char *str_concat(char *s1, char *s2) 
{
	unsigned int n;
	unsigned int c;
	unsigned int k;
	char *out;

	n = 0;
	c = 0;
	k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[c] != '\0')
	{
		c++;
	}
	*out = (char *)malloc(n + c + 1);
	if (out == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < n; k++)
	{
		out[k] = s1[k];
	}
	for (c = 0; c < k + c; c++)
	{
		out[k + c] = s2[c];
	}
	out[k + c] = s2[c];
}
