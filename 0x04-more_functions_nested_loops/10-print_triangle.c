#include "main.h"

/**
 * print_triangle - draws triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int a, b;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1 ; a <= size ; a++)
		{
			for (b = a ; b < size ; b++)
			{
				_putchar(' ');
			}
			for (b = 1 ; b <= a ; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
