#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to a char
 *
 * Return: the string length
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length])
	{
		length++;
	}
	return (length);
}

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: A pointer to the beginning of the linked list
 * @str: A pointer to a char/string inside the linked list
 *
 * Return: a pointer to the new node added at the end of the list.
 * Or the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Allocate new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	if (str)
	{
		/* Put in the data/string && len */
		new_node->len = _strlen(str);
		new_node->str = strdup(str);
	}

	/* Make next of new node as head */
	new_node->next = *head;

	/* Move the head to point to the new node */
	*head = new_node;
	return (*head);
}
