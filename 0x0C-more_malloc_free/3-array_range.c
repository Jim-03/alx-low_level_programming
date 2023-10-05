#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum
 * @max: max value of range
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0 ; min <= max ; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
