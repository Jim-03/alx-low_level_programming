#include "lists.h"

/**
 * get_nodeint_at_index - gets node at the given index
 * @head: pointer to the list
 * @index: the required index
 * Return: the node of the index or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}

	return (NULL);
}
