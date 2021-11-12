#include "lists.h"

/**
  * free_list - Frees a list_t list
  * @head: Pointer of struct list_t
  *
  * Return: Adress of the new element or NULL if it failed
  */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
