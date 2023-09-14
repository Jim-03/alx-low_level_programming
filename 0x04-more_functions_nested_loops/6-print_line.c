#include "main.h"

/**
 * print_line - draws the line
 * @n: number of times to draw
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
