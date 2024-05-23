#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - implements the jump search algorithm
 * @array: the first element of the array
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: the index of first occurence of value, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t low = 0;
	size_t high = jump;
	size_t i;
	size_t start;

	if (array == NULL)
		return (-1);
	while (low <= high && high < size)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		if (array[high] >= value || high == size - 1)
		{
			start = (high - jump < low) ? low : high - jump;
		printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (i = start; i <= high && i < size; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			break;
		}
		low = high;
		high += jump;
	}
	return (-1);
}
