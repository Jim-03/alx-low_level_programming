#include "lists.h"

/**
 * find_listint_loop - searches for a loop
 * @head: the first element
 * Return: the address or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n = head;

	if (!head)
		return (NULL);

	while (head && n && n->next)
	{
		n = n->next->next;
		head = head->next;
		if (n == head)
		{
			head = head;
			while (head != n)
			{
				head = head->next;
				n = n->next;
			}
			return (n);
		}
	}
	return (NULL);
}
