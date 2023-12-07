#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at a given index
 * @head: the start of index
 * @index: the node to be gotten
 * Return: the node at the given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		i++;
		temp = temp->next;
	}
	if (index >= i)
		return (NULL);
	i = 0;
	while (head)
	{
		if (index == i)
			break;
		i++;
		head = head->next;
	}
	return (head);
}
