#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - implements the interpolation search algorithm
 * @array: pointer to first element of array
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: the index of the first occurence of the value, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0;
	size_t pos;

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos++;
		else
			high = pos--;
	}
	return (-1);
}
