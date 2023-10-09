#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int a;
	int n;

	for (i = '0'; i <= '9'; i++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			for (n = '0'; n <= '9'; a++)
			{
				if (i < a && a < n)
				{
					putchar(i);
					putchar(a);
					putchar(n);

					if (i != '7')
					{
						putchar(',');
						putchar(',');
					}
				}
			}
		}
	}
	
		putchar('\n');

		return (0);
}
