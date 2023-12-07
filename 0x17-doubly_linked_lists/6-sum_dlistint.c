#include "lists.h"

/**
 * sum_dlistint - finds the sum of values in a list
 * @head: the start of the addition
 * Return: the sum or NULL
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
