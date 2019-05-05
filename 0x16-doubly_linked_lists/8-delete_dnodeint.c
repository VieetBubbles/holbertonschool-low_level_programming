#include "lists.h"
#include <stdio.h>

/**
 * delete_dnodeint_at_index - function that deletes the node at index index of
 * a doubly linked list
 * @head: a pointer to the head of a linked list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *current = *head;

	if (!head)
		return (-1);

	if (!index)
	{
		if (!current)
			return (-1);
		if (current->next)
		{
			(current->next)->prev = NULL;
		}
		current = current->next;
		free(current);
		return (1);
	}

	while (current)
	{
		if (count == index)
			break;
		count++;
		current = current->next;
	}
	if (count != index)
	{
		return (-1);
	}
	(current->prev)->next = current->next;
	if (current->next)
	{
		(current->next)->prev = current->prev;
	}
	free(current);
	return (1);
}
