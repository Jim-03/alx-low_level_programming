#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>


/**
 * print_numbers - prints numbers followed by string
 * @separator: in btwn numbers
 * @n: the size
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x, i;
	va_list num;

	va_start(num, n);
	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(num, int);
		printf("%d", x);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(num);

	printf("\n");
}
