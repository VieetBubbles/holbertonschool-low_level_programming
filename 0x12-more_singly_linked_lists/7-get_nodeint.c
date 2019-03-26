#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 * @head: a pointer to the beginnin of the linked list
 * @index: is the index of the node, starting at 0
 *
 * Return: the nth node or if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* the index of the node we're currently looking at */
	unsigned int count = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		if (count == index)
		{
			return (ptr);
		}
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
