#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list,
 * and returns the head node’s data (n)
 * @head: a double pointer to the beginning of the linked list.
 *
 * Return: the number or if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *next_node;

	if (!head)
	{
		return (0);
	}

	if (*head)
	{
		data = (*head)->n;
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	return (data);
}

/* You create a temp so you can store the address of element next to head, */
/* which is about to become head. Then you delete whats in head, and declare */
/* head to be temp->next. Now head points to what used to be second element */
/* in the list. */
