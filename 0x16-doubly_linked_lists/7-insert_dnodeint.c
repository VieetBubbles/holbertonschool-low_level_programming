#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: a pointer to the head of a doubly linked list
 * @idx:the index of the list where the new node should be added
 * @n: the number inside the new_node to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	size_t count = 1;

	if (!h)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	while (current)
	{
		if (count == idx)
			break;
		count++;
		current = current->next;
	}
	if (count != idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;

	if (current->next)
	{
		(current->next)->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}
