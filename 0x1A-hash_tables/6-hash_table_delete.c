#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: hash table to delete
 *
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *temp = NULL;

	if (!ht)
		return;
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			temp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(temp->value);
			free(temp->key);
			free(temp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
