#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: a pointer to the head of the linked list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
