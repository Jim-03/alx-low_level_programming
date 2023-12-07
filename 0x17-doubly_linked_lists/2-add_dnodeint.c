#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: the beginning of the list
 * @n: the value of the new node
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!temp)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;

	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
