#ifndef MAIN_H
#define MAIN_H

/**
 * main - check the code.
 * 
 * Return: Always 0.
 */
int _isupper(int c)
{
	int l;

	if (isupper(c))
	{
		l = 1;
	}
	else
	{
		l = 0;
	}

	return _putchar(l);
}

#endif
