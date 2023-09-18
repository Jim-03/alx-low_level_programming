#include "main.h"

/**
 * print_rev - reverses a string
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--;
	for (i = n ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
