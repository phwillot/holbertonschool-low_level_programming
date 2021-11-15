#include "lists.h"

/**
  * add_nodeint_end - Adds a new node at the end of a list_t list.
  * @head: Pointer of pointer of struct list_t
  * @n: string
  *
  * Return: Adress of the new element or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *last = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (last->next)
			last = last->next;

		last->next = newNode;
	}

	return (newNode);
}
