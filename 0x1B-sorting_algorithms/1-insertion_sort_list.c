#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: a pointer to the head of a linked list.
 *
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cur = NULL, *ptr = NULL, *prev_node = NULL;

	if (list == NULL)
		return;
	cur = *list;
	while (cur)
	{
		prev_node = cur->prev;
		while (prev_node)
		{
			if (prev_node->n > cur->n)
			{
				if (cur->next)
					cur->next->prev = prev_node;
				prev_node->next = cur->next;
				ptr = prev_node->prev;
				prev_node->prev = cur;
				cur->next = prev_node;
				cur->prev = ptr;
				if (ptr)
				{
					ptr->next = cur;
				}
				else
				{
					*list = cur;
				}
			}
			else
			{
				break;
			}
			print_list(*list);
			prev_node = prev_node->prev;
			prev_node = prev_node->prev;
		}
		cur = cur->next;
	}
}
