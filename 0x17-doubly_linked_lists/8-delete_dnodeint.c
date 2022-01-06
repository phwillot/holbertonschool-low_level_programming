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
	dlistint_t *temp = *head, *temp2 = *head;
	unsigned int i = 0;

	if (*head == NULL || index > sizeLinkedList(*head))
		return (-1);

	if (index == 0)
	{
		temp => temp->next;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		return (1);
	}

	while (i < (index - 1))
	{
		temp = temp->next;
		i++;
	}

	temp->next = temp->next->next;
	temp = *head;
	i = 0;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp)
	{
		temp2 = temp->prev;
		temp = temp->next;
		temp->prev = temp2;
	}
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
