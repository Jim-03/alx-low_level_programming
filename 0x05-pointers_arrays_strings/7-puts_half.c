#include "main.h"

/**
 * puts_half - prints half the characters
 * @str: characters to be halfed
 */

void puts_half(char *str)
{
	int i, n, j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		n = (j - 1) / 2;
	}
	else
	{
		n = j / 2;
	}
	for (i = n ; i <= j ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
