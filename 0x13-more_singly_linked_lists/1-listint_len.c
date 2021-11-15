#include "lists.h"

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
