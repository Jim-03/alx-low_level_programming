#include "main.h"
#include<stdio.h>

/**
 * print_diagsums - adds diagonals of square matrix
 * @a: the square matrix
 * @size: the size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int n = size - 1;
	int sum = 0;
	int sumA = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum += a[i * size + i];
	}

	for (i = n ; i >= 0 ; i--)
		sumA += a[i * size + (size - i - 1)];

	printf("%d, %d \n", sum, sumA);
}
