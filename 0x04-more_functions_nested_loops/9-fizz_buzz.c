#include "main.h"
#include <stdio.h>
/**
*main - prints num 1 - 100 and new line
*but prints Fizz for multiples of three
*Return: Alwasy 0 (Success)
*/
int main(void)
{
	int i;

i	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			print("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", i);
		}		
	}

	printf("\n");

	return (0);
}
