#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: arguments var
 * @argv: arguments var
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int b;
	int n;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (n = 0; n < b; n++)
	{
		if (n == b - 1)
		{
			printf("%02hhx\n", arr[n]);
			break;
		}
		printf("%02hhx ", arr[n]);
	}
	return (0);
}
