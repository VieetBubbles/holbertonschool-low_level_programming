#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	size_t i;
	hash_node_t *cur = NULL;
	int flag = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];
		while (cur)
		{
			if (flag == 0)
			{
				printf("'%s': '%s'", cur->key, cur->value);
				flag = -1;
			}
			else
			{
				printf(", '%s': '%s'", cur->key, cur->value);
			}
			cur = cur->next;
		}
	}
	printf("}\n");
}
