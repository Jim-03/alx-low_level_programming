#include "main.h"

/**
 * puts2 - prints every other character
 * @str: characters to be checked
 */

void puts2(char *str)
{
	int n = 0;
	char *f = str;
	int i;

	while (*f != '\0')
	{
		f++;
		n++;
	}
	for (i = 0 ; i <= n - 1 ; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
