#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: the head/beginning of the linked list
 * @n: the data added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	if (!head)
	{
		return (NULL);
	}
	/* Put in the data/integer */
	new_node->n = n;

	/* Make next of new node as head */
	new_node->next = *head;

	/* Move the head to point to the new node */
	*head = new_node;
	return (new_node);
}
