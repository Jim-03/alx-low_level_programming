#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 * Return: pointer or null
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
