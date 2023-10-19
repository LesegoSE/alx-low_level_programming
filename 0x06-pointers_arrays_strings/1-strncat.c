#include "main.h"

/**
* _strncat - concatenate two strings using at most n bytes from src
* @dest: parameter pointer
* @src: parameter pointer
* @n: parameter varibale
*
* Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;

	i = 0;
	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
