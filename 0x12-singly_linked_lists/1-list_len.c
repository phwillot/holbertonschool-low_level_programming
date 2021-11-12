#include "lists.h"

/**
  * list_len - Returns number of elements in a linked list
  * @h: Pointer of structer list_t
  *
  * Return: the number of nodes
  */

size_t list_len(const list_t *h)
{
	int count = 0;

	if (h)
	{
		while (h)
		{
			count++;
			h = h->next;
		}
	}

	return (count);
}
