#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the start of the list
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		head->prev = NULL;
		head->next = NULL;
		free(head);
		head = head->next;
	}
}
