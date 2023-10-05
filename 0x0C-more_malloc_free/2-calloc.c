#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements
 * @size: bytes
 * Return: pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int length, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	length = nmemb * size;
	ptr = malloc(length);

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < length ; i++)
		ptr[i]= 0;
	return (ptr);
}
