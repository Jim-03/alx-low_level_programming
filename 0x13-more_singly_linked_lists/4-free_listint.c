#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the list
 */

void free_listint(listint_t *head)
{
	listint_t *delete;

	while(head)
	{
		delete = head->next;
		free(head);
		head = delete;
	}
}
