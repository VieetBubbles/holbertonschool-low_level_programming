#include "lists.h"

/**
 * list_len - function that returns the number of elements in a
 * linked list_t list
 * @h: a pointer to the beginning of the the linked list
 *
 * Return: the number of elements in a lined list_t list
 */

size_t list_len(const list_t *h)
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
