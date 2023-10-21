#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0)
 * @dest: parameter pointer
 * @src: parrameter pointer
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	char *og_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (og_dest);
}
