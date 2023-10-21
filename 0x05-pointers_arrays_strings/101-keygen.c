#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords for the program 101-crackme
 * Return: Always 0
 */

int main()
{
	srand(time(NULL));

	char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int num_chars = strlen(valid_chars);

	char password[PASSWORD_LENGTH + 1];

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int random_index = rand() % num_chars;
		password[i] = valid_chars[random_index]
	}
	password[PASSWORD_LENGTH] = '\0';
	_putchar("Generated password: %s\n", password);
	return (0);
}
