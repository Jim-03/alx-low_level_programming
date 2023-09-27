#include "main.h"

/**
 * factorial - finds factorial
 * @n: the number
 * Return: the factorial result
 */

int factorial(int n)
{
	int fact = n;

	if (n != 0)
		fact = fact * factorial(n - 1);
	return (n);
}
