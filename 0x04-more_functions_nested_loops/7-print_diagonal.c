#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: number of lines printed
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
