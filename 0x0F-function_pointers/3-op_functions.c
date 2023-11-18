#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - opperaon function
 * @a: argument varibale
 * @b: argument varibale
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - dif
 * @a: argument varibale
 * @b: argument varibale
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multi
 * @a: argument varibale
 * @b: argument varibale
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: argument varibale
 * @b: argument varibale
 * Return: int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - rem
 * @a: argument varibale
 * @b: argument varibale
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
