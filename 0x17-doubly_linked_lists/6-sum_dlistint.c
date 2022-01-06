#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of the linked list
 * @head: pointer of struct dlistint_t
 *
 * Return: sum or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
