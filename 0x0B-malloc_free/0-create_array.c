#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it
 * @size: size of memory
 * @c: the char
 * Return: the result
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		str[i] = c;
	return (str);
}
