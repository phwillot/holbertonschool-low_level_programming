#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list_t list.
  * @head: Pointer of pointer of struct list_t
  * @str: string
  *
  * Return: Adress of the new element or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);

	new_node->next = NULL;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
	}

	temp->next = new_node;

	return (new_node);
}
