#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: a pointer to the head of a doubly linked list
 * @n: the data inside our doubly linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

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
		/*  make new_node point to the head */
		new_node->next = *head;
		/* NULL <- new_node -> head */

		/* make the head prev point the new_node */
		(*head)->prev = new_node;
		/* NULL <- new_node -> <- head */

		*head = new_node;
		/* NULL <- head -> <- new_node -> */
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
