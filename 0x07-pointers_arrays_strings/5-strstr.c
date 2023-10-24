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
		char *C;
		char *CNT;

		*C = haystack;
		*CNT = needle;

		while (*C == *CNT && *CNT != '\0')
		{
			C++;
			CNT++;
		}
		if (*CNT == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
