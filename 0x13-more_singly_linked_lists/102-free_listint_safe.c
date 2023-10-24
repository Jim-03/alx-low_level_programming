#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a list
 * @h: the head of the list
 * Return: the size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	
	while (*h != NULL)
	{
		listint_t *n = (*h)->next;
		free(*h);
		*h = n;
		i++;
	}

	*h = NULL;

	return (i);
}
