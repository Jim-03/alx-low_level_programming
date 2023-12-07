#include "lists.h"

/**
 * delete_dnodeit_at_index - deletes a node at a given index
 * @head: the start of the list
 * @index: the position to delete the node
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;

	while (temp)
	{
		i++;
		temp = temp->next;
	}

	if (index >= i)
		return (-1);
	i = 0;
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
			break;
		i++;
		temp = temp->next;
	}
	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
