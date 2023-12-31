#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: counts the number of args passed.
 * @argv: array that contains the program command line arguments.
 * Return: 0 if no number passed, else 1
 */

int main(int argc, char *argv[])
{
	int add;
	int i;
	int j;

	add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
