#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - unction that returns the number of elements in a
 * linked dlistint_t list
 * @h: a pointer to the head of a doubled linked list
 *
 * Return: the length of the doubley linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
