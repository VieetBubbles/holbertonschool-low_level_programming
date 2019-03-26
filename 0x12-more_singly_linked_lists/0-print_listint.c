#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the beginning of the linked list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count;

	count = 0;

	while (ptr)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
