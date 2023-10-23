#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the list
 * @head: the first element
 */

void free_listint(listint_t *head)
{
	listint_t *delete;

	while (head)
	{
		delete = head->next;
		free(head);
		head = delete;
	}
}
