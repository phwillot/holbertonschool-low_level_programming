#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 If succeed, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *temp;

	if (ht == NULL)
		return (0);
	if (!key || !key[0] || !value)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp((char *)key, temp->key) == 0)
			{
				free(temp->value);
				free(new_node);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		temp = ht->array[index];
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = temp;
		ht->array[index] = new_node;
	}
	else
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	return (1);
}
