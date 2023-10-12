#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *temp = "";
	va_list any;

	va_start(any, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", temp, va_arg(any, int));
					break;
				case 'i':
					printf("%s%d", temp, va_arg(any, int));
					break;
				case 'f':
					printf("%s%f", temp, va_arg(any, double));
					break;
				case 's':
					str = va_arg(any, char *);
					if (str == NULL)
						printf("(nil)");
					else
						printf("%s%s", temp, str);
					break;
				default:
					i++;
					continue;
			}
			temp = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(any);
}

