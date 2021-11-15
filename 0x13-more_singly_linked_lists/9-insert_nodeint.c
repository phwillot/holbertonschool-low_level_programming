#include "lists.h"

/**
  * insert_nodeint_at_index - Inserts a new node at a given position.
  * @head: Pointer of pointer of struct list_t
  * @idx: Index where the node should be added.
  * @n: int n of the node.
  *
  * Return: Adress of the new node, or NULL if it failed.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, sizeList;
	listint_t *newNode;
	listint_t *temp = *head;

	sizeList = listint_len(*head);
	if (idx > sizeList)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	i = 0;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	newNode->next = temp;

	temp = *head;
	i = 0;

	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	temp->next = newNode;

	return (newNode);
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
