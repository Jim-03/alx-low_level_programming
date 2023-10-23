#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new element to list
 * @head: the current first element
 * @n: the value of the new element
 * Return: pointer to new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (new);
}
