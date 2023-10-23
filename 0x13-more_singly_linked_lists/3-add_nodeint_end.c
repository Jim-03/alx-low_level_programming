#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds element in the end of a list
 * @head: the first element
 * @n: value of new element
 * Return: the address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *temp = *head;

	last = malloc(sizeof(listint_t));

	if (last == NULL)
		return (NULL);

	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = last;
	}

	return (last);
}
