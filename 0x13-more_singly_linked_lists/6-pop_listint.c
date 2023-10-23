#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes first element
 * @head: the pointer to first element
 * Return: the data of removed list or 0
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
