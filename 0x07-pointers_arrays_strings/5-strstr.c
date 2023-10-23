#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: parameter pointer
 * @needle: parameter pointer
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c;
		char *cnt;

		*c = haystack;
		*cnt = needle;

		while (*c == *cnt && *cnt != '\0')
		{
			c++;
			cnt++;
		}
		if (*cnt == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
