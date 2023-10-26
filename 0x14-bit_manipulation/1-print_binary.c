#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	int i;
	int c = 0;
	unsigned long int x;

	for (i = 63; i >= 0; i--)
	{
		x = n >> i;

		if (x & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
		{
			_putchar('0');
		}
	}
	if (!c)
		_putchar('0');
}
