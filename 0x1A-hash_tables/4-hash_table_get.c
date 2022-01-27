#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: hash table
 * @key: key looking for
 *
 * Return: Value associated with the key, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL || !key[0])
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[i];

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
