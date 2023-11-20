#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: arg variable
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int m;

	m = 0;

	listint_t *temp = head;

	while (temp)
	{
		m += temp->n;
		temp = temp->next;
	}

	return (m);
}
