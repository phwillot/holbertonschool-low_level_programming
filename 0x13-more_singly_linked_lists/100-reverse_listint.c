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
	listint_t *node = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		node = *head;
		previous = *head;
		*head = (*head)->next;
		node->next = previous;

	}
	*head = node;
	return (node);
}
