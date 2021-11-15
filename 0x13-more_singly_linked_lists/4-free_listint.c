#include "lists.h"

/**
  * free_listint - Frees a listint_t list.
  * @head: Pointer of struct list_t
  *
  * Return: Void.
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
