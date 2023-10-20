#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @b: parameter pointer
 *
 * Return: variable b
 */

char *rot13(char *b)
{
	int n;
	int i;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; b[n] != '\0'; n++)
	{
		for (i = 0; i < 52; i++)
		{
			if (b[n] == data1[i])
			{
				b[n] = datarot[i];
				break;
			}
		}
	}
return (b);
}
