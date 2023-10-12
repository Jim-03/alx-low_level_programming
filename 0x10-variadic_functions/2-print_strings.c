#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string printed btwn strings
 * @n: the number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *x;

	va_start(str, n);
	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(str, char *);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);

			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
