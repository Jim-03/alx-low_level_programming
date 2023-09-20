#include "main.h"

/**
 * reverse_array - reverses elements of array
 * @a: the array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int k = 0;
	int m = n / 2;

	while (k < m)
	{
		int b = a[k];

		a[k] = a[n - k - 1];
		a[n - k - 1] = b;
		k++;
	}
}
