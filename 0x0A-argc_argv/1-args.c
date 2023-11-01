#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc - counts the number of args passed.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d/n", argc);
	return (0);
}