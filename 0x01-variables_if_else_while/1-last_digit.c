#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int ldig = n % 10;

	srand (time(0));
	n = rand() - RAND_MAX / 2;
	if(ldig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldig);
	}
	else if(ldig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldig);
	}
	else if(ldig < 6 && ldig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldig);
	}
	
	return (0);
}
