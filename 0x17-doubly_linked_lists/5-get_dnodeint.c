#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
 * @head: pointer of struct dlistint
 * @index: index (integer)
 *
 * Return: Adress of the node, otherwise not found NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	if (head)
	{
		while (i != index)
		{
			head = head->next;
			if (head == NULL)
				return (NULL);
			i++;
		}
		if (head != NULL)
			return (head);
		else
			return (NULL);
	}
}
