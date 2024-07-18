#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - a linear search algorithm
 * @array: pointer to first element of array
 * @size: the number of elements in the array
 * @value: the value to be searched for
 * Return: the index of first occurence of value, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	
	return (-1);
}
