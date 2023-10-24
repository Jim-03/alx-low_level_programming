#include "lists.h"

/**
 * listint_t *reverse_listint - reverses a list
 * @head: pointer to list
 * Return: the head of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *n, *p = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;

	return (*head);
}
