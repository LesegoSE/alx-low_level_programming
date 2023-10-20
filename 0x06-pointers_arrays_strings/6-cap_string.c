#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @b - parameter pointer
 *
 * Return: pointer s
 */

char *cap_string(char *b)
{
	int n;

	n = 0;
	while (b[n])
	{
		while (!(b[n] >= 'a' && str[n] <= 'z'))
		{
			n++;

			if (b[n- 1] == ' ' || b[n- 1] == '\t' || b[n- 1] == '\n' || b[n- 1] == ',' || b[n- 1] == ';' || b[n- 1] == '.' || b[n- 1] == '!' || b[n- 1] == '?' || b[n- 1] == '"' || b[n- 1] == '(' || b[n- 1] == ')' || b[n- 1] == '{' || b[n- 1] == '}' || n == 0)
			{
				b[n] -= 32;
			}
			n++;
		}
		return (b);
	}
}
