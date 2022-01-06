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
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (idx > sizeLinkedList(*h))
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = temp->next;
		(*h)->next->prev = new;
		*h = new;
		return (new);
	}
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp;
	temp->next->prev = new;
	temp = *h;
	i = 0;
	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	new->prev = temp;
	temp->next = new;
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
