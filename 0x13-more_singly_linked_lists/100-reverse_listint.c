#include "lists.h"

/**
  * reverse_listint - Reverses a listint_t linked list.
  *
  * @head: Pointer of pointer of struct list_t
  *
  * Return: pointer to the first node of the reversed list.
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *previous = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;

	}
	*head = previous;
	return (*head);
}
