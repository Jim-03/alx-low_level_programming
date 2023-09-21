#include "main.h"

/**
 * print_number - prints integers
 * @n: the integer to be printed
 */

void print_number(int n)
{
	int rem, j, f;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	j = 1000;
	f = 0;

	while (j >= 1)
	{
		rem = n / j;

		if (rem > 0 || f || j == 1)
		{
			_putchar(rem + '0');
			f = 1;
		}
		n %= j;
		j /= 10;
	}
}
