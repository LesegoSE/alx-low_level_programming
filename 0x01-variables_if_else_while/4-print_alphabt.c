#include <stdio.h>
/**
*main - Entry point
*
*Return: Always (Success)
*/
int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		if (t != 'e' && t != 'q')
		{
			putchar(t);
		}
	}

	putchar('\n');

	return (0);
}
