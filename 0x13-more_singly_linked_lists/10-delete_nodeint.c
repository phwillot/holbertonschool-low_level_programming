#include "lists.h"

/**
  * delete_nodeint_at_index - Deletes the node at index of a listint_t linked
  * list.
  * @head: Pointer of pointer of struct list_t
  * @index: Index where the node should be deleted
  *
  * Return: 1 if succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *last = *head;
	unsigned int sizeList = listint_len(temp), i;

	if (*head == NULL || index > sizeList)
		return (-1);

	if (index == 0)
	{
		*head = (&(**head))->next;
		free(temp);
		return (1);
	}

	i = 0;
	while (i < (index + 1))
	{
		temp = temp->next;
		i++;
	}

	i = 0;
	while (i < (index - 1))
	{
		last = last->next;
		i++;
	}
	last->next = temp;

	free(temp);
	return (1);
}

/**
  * listint_len - Return the number of elements of a listint_t list.
  * @h: Pointer to struct listint_s
  *
  * Return: The number of nodes.
  */

size_t listint_len(const listint_t *h)
{
	unsigned int n = 0;

	if (h)
	{
		while (h)
		{
			n++;
			h = h->next;
		}
	}

	return (n);
}
