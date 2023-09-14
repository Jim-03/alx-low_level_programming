#include "main.h"

/**
 * print_triangle - draws triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, j, n;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			n = i + 1;
			for (j = i ; j < size ; j++)
			{
				_putchar(' ');
			}
			for (j = 1 ; j < n ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
