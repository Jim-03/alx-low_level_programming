#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: the first element
 */

void free_listint2(listint_t **head)
{
	listint_t *delete;

	while (*head)
	{
		delete = (*head)->next;
		free(*head);
		*head = delete;
	}
	*head = NULL;
}
