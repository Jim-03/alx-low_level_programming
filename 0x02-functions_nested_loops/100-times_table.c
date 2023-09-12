#include "main.h"

/**
 * print_times_table - displays the table
 * @n: variable with number
 */
void print_times_table(int n)
{
	int i, j, c;

	if (n > -1 && n < 16)
	{
		for (i = 0 ; i <= n ; i++)
		{
			_putchar('0');
			for (j = 1 ; j <= n ; j++)
			{
				_putchar(',');
				_putchar(' ');
				c = i * j;
				if (c < 100)
				{
					_putchar(' ');
				}
				if (c < 10)
				{
					_putchar(' ');
				}
				if (c > 99)
				{
					_putchar((c / 100) + '0');
					_putchar((c / 10) % 10 + '0');
				}
				else if (c < 100 && c > 9)
				{
					_putchar((c / 10) + '0');
				}
				_putchar((c % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

