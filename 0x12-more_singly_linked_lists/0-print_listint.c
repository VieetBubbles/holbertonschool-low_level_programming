#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the beginning of the linked list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		if (!h->n)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%i\n", h->n);
		}
		h = h->next;
		count++;
	}
	return (count);
}
