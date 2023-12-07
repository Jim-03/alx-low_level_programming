#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: the starting point
 * @idx: the index to insert
 * @n: the value of the new node
 * Return: The address of the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h, *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	if (idx >= i)
		return (NULL);
	new->n = n;
	i = 0;
	temp = *h;
	while (temp)
	{
		if (i == idx)
			break;
		i++;
		temp = temp->next;
	}
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
