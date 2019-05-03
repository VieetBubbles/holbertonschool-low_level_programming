#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - function that adds a new node at the end of
 * a dlistint_t list.
 * @head: a pointer to the head of a doubly linked list
 * @n: the number inisde the new node to be inserted into the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/* NULL <- new_node -> NULL */

	if (*head)
	{
		/* increment to the end of the linked list */
		while (current->next)
		{
			current = current->next;
		}
		/* make the end of the linked list point to the new_node */
		current->next = new_node;
		/* current -> new_node -> NULL */

		/* make the nn prev pointer point to the end of the list*/
		new_node->prev = current;
		/* current -> <- new_node -> */
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
