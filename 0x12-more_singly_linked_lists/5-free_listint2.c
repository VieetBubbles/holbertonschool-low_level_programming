#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: a double pointer to the head of the linked list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp;

	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
