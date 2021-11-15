#include "lists.h"

/**
  * pop_listint - Deletes the head node of a listint_t.
  * @head: Pointer of pointer of struct list_t
  *
  * Return: 0 if linked list is empty, or head node's data (n)
  */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *ptr = *head;

	if (head == NULL)
		return (0);

	i = ptr->n;
	*head = (&(**head))->next;

	free(ptr);
	return (i);
}
