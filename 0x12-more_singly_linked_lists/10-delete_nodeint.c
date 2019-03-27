#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list.
 * @head: a pointer to the beginning of the linked list
 * @index: is the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *next_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	/* If head needs to be removed */
	if (index == 0)
	{
		*head = temp->next; /* Change head */
		free(temp); /* free old head  */
		return (1);
	}
	/* Find previous node of the node to be deleted */
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}
	/* If position is more than number of nodes */
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	/* Node temp->next is the node to be deleted */
	/* Store pointer to the next of node to be deleted */
	next_node = temp->next->next;
	/* Unlink the node from linked list */
	free(temp->next);
	/*Unlink the deleted node from list*/
	temp->next = next_node;
	return (1);
}
