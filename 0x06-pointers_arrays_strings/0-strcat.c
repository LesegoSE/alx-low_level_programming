#include "main.h"

/**
 * _strcat - function that concatenates text in variables named dest and src
 * @dest: pointer passing string to be concatenated.
 * @src: pointer passing string to be concatenated.
 *
 * Return: concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int n;
	int i;

	n = 0;
	i = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';

	return (dest);
}
