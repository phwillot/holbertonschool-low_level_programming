#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: struct dlistint_t
 *
 * Return: Number of nodes
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t numberNodes = 0;

	if (h)
	{
		while (h)
		{
			numberNodes++;
			h = h->next;
		}
	}
	return (numberNodes);
}
