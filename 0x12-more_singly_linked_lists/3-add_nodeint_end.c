#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list.
 * @head: the head/beginning of the linked list
 * @n: the data placed inside the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	/* Allocate new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	if (n)
	{
		/* Put in the data/integer */
		new_node->n = n;
	}
	else
	{
		/* Put in the data of int is NULL */
		new_node->n = 0;
		if (!new_node->n)
                {
                        free(new_node);
                        return (NULL);
                }
	}
	/* This new node is going to  be the last last node, */
	/* So make next of it as NULL*/
	new_node->next = NULL;
	if (last)
	{
		/* Traverse through the linked list until the last node */
		while (last->next)
		{
			last = last->next;
		}
		last->next = new_node;
	}
	else
		/* If the linked list is empty, then make the new node as head*/
		*head = new_node;
	return (new_node);
}
