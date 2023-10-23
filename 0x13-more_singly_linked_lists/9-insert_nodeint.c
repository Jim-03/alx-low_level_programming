#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: pointer to list
 * @idx: the position
 * @n: the value of new node
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newa = malloc(sizeof(listint_t)), *current = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (idx == 0)
	{
		if (newa == NULL)
			return (NULL);

		newa->n = n;
		newa->next = *head;
		*head = newa;
		return (newa);
	}

	for (i = 0; i < idx - 1 ; i++)
	{
		if (current == NULL)
		{
			return (NULL);
		}

		current = current->next;
	}
	if (current == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current->next;
	current->next = new;

	return (new);
}
