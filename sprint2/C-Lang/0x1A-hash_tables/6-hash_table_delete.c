#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: head pointer
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node, *next;

	if (!ht)
		return;
	if (!(ht->array))
	{
		free(ht);
		return;
	}
	while (idx < ht->size)
	{
		node = (ht->array)[idx];
		while (node)
		{
			next = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			node->key = NULL;
			node->value = NULL;
			free(node);
			node = next;
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}