#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a list_t list.
  * @head: Pointer of pointer of struct list_t
  * @n: string
  *
  * Return: Adress of the new element or NULL if it failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
