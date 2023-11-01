#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc - counts the number of args passed.
 * @argv: array that contains the program command line arguments.
 */
int main(int argc, char *argv[])
{
	int num1;
	int result;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	switch (argc)
	{
		case 3:
			result = num1 * num2;
			printf("%d\n", result);
			break;
		default:
			printf("Error\n");
			return (1);
	}
	return (0);
}
