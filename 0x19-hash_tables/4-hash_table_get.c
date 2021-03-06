#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current = NULL;
	unsigned long int index;

	if (!ht || !key)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (!strcmp(key, current->key))
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
