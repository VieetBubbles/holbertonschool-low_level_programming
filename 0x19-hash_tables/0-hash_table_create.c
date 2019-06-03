#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 *
 * Return: a pointer to the newly created hash table or
 * if something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (!size)
	{
		return (NULL);
	}

	ht = calloc(1, sizeof(hash_table_t));
	if (!ht)
	{
		free(ht);
		return (NULL);
	}

	ht->array = calloc(1, sizeof(hash_node_t *));
	if (!ht->array)
	{
		free(ht->array);
		return (NULL);
	}

	ht->size = size;

	return (ht);
}
