#include "main.h"

/**
 * print_number - prints number
 * @n: number to be printed
 */

void print_number(int n)
{
	int m, k, x;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	m = 1000;
	k = 0;

	while (m >= 1)
	{
		x = n / m;

		if (x > 0 || k || m == 1)
		{
			_putchar(x + '0');
			k = 1;
		}
		n %= m;
		m /= 10;
	}
}
