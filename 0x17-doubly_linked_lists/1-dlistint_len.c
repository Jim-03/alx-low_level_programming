#include "lists.h"

/**
 * dlistint_len - returns number of elementts in a list
 * @h: the head of the list
 * Return: the number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
