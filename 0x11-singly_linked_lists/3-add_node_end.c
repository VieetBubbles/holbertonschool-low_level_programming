#include "lists.h"

/**
* _strlen - function that returns the length of a string
* @s: pointer to a char
*
* Return: the string length
*/

int _strlen(const char *s)
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
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: A pointer to the beginning of the linked list
 * @str: A pointer to a char/string inside the linked list
 *
 * Return: a pointer to the new node added at the end of the list.
 * Or the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;

	/* Allocate new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	if (str)
	{
		/* Put in the data/string && len */
		new_node->len = _strlen(str);
		new_node->str = strdup(str);
	}
	else
	{
		/* Put in the data if str is NULL */
		new_node->str = NULL;
		new_node->len = 0;
	}
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
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
