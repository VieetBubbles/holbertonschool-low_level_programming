#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: a pointer to the head of a doubly linked list
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node of a dlistint_t linked list
 * if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	size_t count = 1;

	if (!head || !index)
	{
		return (head);
	}

	while (current)
	{
		if (count == index)
		{
			return (current->next);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
