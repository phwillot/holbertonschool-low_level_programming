#include "lists.h"

/**
  * sum_listint - Return the sum of all the data of a listint_t linked list
  * @head: Pointer of struct list_t
  *
  * Return: Return 0 if list is empty, otherwise the sum.
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
