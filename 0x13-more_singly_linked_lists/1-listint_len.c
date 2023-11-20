#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: arg varible
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}

	return (m);
}
