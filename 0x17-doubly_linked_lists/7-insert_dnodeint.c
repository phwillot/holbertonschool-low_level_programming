#include "lists.h"

size_t sizeLinkedList(const dlistint_t *h);

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: pointer of pointer to struct dlistint_t
 * @idx: index to place the new node
 * @n: integer
 *
 * Return: Adress of new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);
	if (idx > sizeLinkedList(*h))
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	temp = *h;
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (temp != NULL)
	{
		temp->prev = new;
		new->next = temp;
	}
	else
		new->next = NULL;

	temp = *h;
	i = 0;

	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	temp->next = new;
	new->prev = temp;
	return (new);
}

/**
 * sizeLinkedList - Return the size of linked list
 * @h: pointer of struct dlistint_t
 *
 * Return: number of nodes
 */

size_t sizeLinkedList(const dlistint_t *h)
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
