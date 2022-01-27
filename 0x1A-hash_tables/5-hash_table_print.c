#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: hash table
 *
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;
	char *separator = "";

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp)
		{
			printf("%s", separator);
			separator = ", ";
			if (temp->value)
				printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
		index++;
	}
	printf("}\n");
}
