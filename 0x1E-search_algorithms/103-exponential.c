#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - implements the exponential search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: value being searched
 * Return: the index of the value, -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t low;
	size_t high;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i *= 2;
	}
	low = i / 2;
	if (i < size)
		high = i;
	else
		high = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d ,", array[i]);
		}
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}
