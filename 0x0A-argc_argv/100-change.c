#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: counts the number of args passed.
 * @argv: array that contains the program command line arguments.
 * Return: 0 Always success.
 */

int main(int argc, char *argv[])
{
	int i;
	int cents;
	int ncoins;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	ncoins = 0;

	for (i = 0; cents > 0; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			ncoins++;
		}
	}

	printf("%d\n", ncoins);
	return (0);
}
