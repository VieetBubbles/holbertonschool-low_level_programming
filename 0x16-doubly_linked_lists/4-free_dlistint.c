#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - function that free a dlistint_t list
 * @head: a pointer to the head of the doubky linked list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
