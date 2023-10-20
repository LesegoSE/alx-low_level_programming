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
	int b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; b[n] != '\0'; n++)
	{
		for (b = 0; b < 52; b++)
		{
			if (b[n] == data1[b])
			{
				b[n] = datarot[b];
				break;
			}
		}
	}
return (b);
}
