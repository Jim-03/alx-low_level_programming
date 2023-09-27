#include "main.h"

/**
 * sqrt_recursion - helper function
 * @n: the number
 * @i: the guessing root
 * Return: root of n
 */

int sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - finds natural square root
 * @n: the number
 * Return: the result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}
