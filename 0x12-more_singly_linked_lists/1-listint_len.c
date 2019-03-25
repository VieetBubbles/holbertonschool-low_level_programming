#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: the beginning of the linked list
 *
 * Return: the number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
