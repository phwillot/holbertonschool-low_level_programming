#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list.
 * @h: struc dlistint_t
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nbNodes = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			nbNodes++;
		}
	}
	return (nbNodes);
}
