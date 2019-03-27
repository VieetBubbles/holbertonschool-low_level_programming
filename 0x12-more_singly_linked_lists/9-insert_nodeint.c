#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position.
 * @head: a double pointer to the beginning of the linked list
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: an integer
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h = *head;
	listint_t *prev = NULL;
	listint_t *new_node;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i < idx)
	{
		prev = h;
		h = h->next;
		i++;
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = h;

	if (prev)
	{
		prev->next = new_node;
	}
	if (*head == h)
	{
		*head = new_node;
	}
	return (new_node);
}

/* When inserting a node in the middle of a linked list, you need to update */
/* the next field of the previous node that is before the position to point */
/* at the new node. */

/* When inserting a node in the front of a linked list, you need to update */
/* the list's head pointer to point at the new node, which now points at the */
/* old head in its next field. */
