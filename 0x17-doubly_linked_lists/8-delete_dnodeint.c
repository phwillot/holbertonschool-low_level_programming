#include "lists.h"

size_t sizeLinkedList(const dlistint_t *h);
/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: pointer of pointer to struct dlistint_t
 * @index: index of the node that should be deleted
 *
 * Return: 1 on success, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *last = *head;
	unsigned int i = 0;

	if (*head == NULL || index > sizeLinkedList(*head) || !head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		temp->next = NULL;
		temp->prev = NULL;
		free(last);
		return (1);
	}

	while (i < index)
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
	last->next = temp->next;
	free(temp);


	return (1);
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
