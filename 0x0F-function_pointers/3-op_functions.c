#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: arg variable
 * @b: arg variable
 * Return: int
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: arg variable
 * @b: arg variable
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: arg variable
 * @b: arg variable
 * Return: int
 */
 
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: arg variable
 * @b: arg variable
 * Return: int
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: arg variable
 * @b: arg variable
 * Return: The remainder of the division of a by b.
 */
 
int op_mod(int a, int b)
{
	return (a % b);
}
