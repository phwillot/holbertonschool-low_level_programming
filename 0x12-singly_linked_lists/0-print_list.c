#include "lists.h"

/**
  * print_list - Prints all the elements of a list_t list.
  * @h: Pointer of structer list_t
  *
  * Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h)
	{
		while (h)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", h->len, h->str);
			count++;
			h = h->next;
		}
	}

	return (count);
}
