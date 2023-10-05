#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer to previous memory
 * @old_size: size of ptr
 * @new_size: size of new memory
 * Return: null or pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);

		if (ptr2 == NULL)
			return (NULL);

		return (ptr2);
	}

	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	ptr2 = malloc(new_size);

	if (ptr2 == NULL)
		return (NULL);

	while (i < old_size && i < new_size)
	{
		ptr2[i] = ((char *) ptr)[i];
		i++;
	}

	free(ptr);
	return (ptr2);
}
