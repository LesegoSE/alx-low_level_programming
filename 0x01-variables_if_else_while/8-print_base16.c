#include <stdio.h>
/**
*main - Entry point
*
*Return: Always (Success)
*/
int main(void)
{
	char t;

	for (t = '0'; t <= '9'; t++)
	{
		putchar(t);
	}

	for (t = 'a'; t <= 'f'; t++)
	{
		putchar(t);
	}

	putchar('\n');

	return (0);
}
