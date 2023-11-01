#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: counts the number of args passed.
 * @argv: array that contains the program command line arguments.
 * Return: 0 Always success.
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
