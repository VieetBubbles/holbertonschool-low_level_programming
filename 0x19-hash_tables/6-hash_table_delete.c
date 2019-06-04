#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	size_t i = 0;
	hash_node_t *head = NULL;
	hash_node_t *current = NULL;

	if (!ht)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			current = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = current;
		}
	}
	free(ht->array);
	free(ht);
}
