#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all parameters
 * @n: the number of parameters
 * Return: 0 or the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list num;

	if (n == 0)
		return (0);

	va_start(num, n);
	for (i = 0; i < n ; i++)
	{
		sum = sum + va_arg(num, int);
	}

	va_end(num);

	return (sum);
}
