#include "lists.h"

/**
  * free_listint2 - Frees a listint_t list.
  * @head: Pointer of pointer of struct list_t
  *
  * Return: Void.
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	if (*head)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
