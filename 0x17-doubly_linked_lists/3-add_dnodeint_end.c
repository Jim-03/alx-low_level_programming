#include "lists.h"

/**
 * add_dnodeint_end - adds new node to the end of a list
 * @head: the head of the list
 * @n: the new node's value
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *temp = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	new->prev = temp;
	return (new);
}
