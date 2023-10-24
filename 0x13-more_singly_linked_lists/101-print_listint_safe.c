#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints value of the list
 * @head: pointer to the list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}

	return (i);
}
