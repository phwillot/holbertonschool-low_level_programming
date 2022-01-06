#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: pointer of struct dlistint_t list
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	if (head)
	{
		while (head)
		{
			ptr = head;
			head = head->next;
			free(ptr);
		}
	}
}
