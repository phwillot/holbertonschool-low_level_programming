#include "lists.h"

/**
  * print_listint - Prints all the elements of a listint_t list.
  * @h: Pointer to struct listint_s
  *
  * Return: The number of nodes.
  */

size_t print_listint(const listint_t *h)
{
	unsigned int n = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			n++;
			h = h->next;
		}
	}

	return (n);
}
