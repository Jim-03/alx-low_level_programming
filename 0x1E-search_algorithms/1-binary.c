#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - implements the binary search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the number to search for
 * Return: the first index of the occurence of the value, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t mid;
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = start + (end - start) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i == end)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
