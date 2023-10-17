/**
 * swap_int - swaps the values of two variables through their memory addresses.
 * @a: variable containing value to be swaped with variable @b.
 * @b: vairable containing value to be swaped with variable @a.
 */

void swap_int(int *a, int *b)
{
	int tp;

	tp = *a;
	*a = *b;
	*b = tp;
}
