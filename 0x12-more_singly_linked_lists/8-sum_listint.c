#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: a pointer to the beginning of the linked list
 *
 * Return: the sum or if the linked list is empty, zero.
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (!ptr)
	{
		return (0);
	}

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
