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
	listint_t *temp = *head;

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;

	if (head == NULL)
	{
		new_node->next = NULL;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = temp;
		return (new_node);
	}

	while (idx - 2 > 0)
	{
		temp = temp->next;
		idx--;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (*head);
}
